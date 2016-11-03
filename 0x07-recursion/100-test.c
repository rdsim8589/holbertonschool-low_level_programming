#include "holberton.h"
#include <stdio.h>

/**
 * helper_wildcmp - compares two strings
 * @str: a pointer to a string
 * @check: a pointer to a string that is compared against str
 * @save: a pointer to the string after the * of s2
 * @pass: determines if it passes or fails (value is 1 or 0)
 *
 * Return: 1 if the stings ==, and 0 otherwise.
 */
int helper_wildcmp(char *str, char *check, char *save, int pass)
{
	if (pass == 0 && *str =='\0' && *check == '\0')
		return (0);
	if (*str == '\0' && *check == '\0')
		return (1);
	if (*str == '\0' && *check != '\0')
		return (0);
	if (*check == '*')
	{
		if (*(str + 1) == '\0')
			return (1);
		save = check + 1;
		return (helper_wildcmp(str, check + 1, save, pass));
	}
	if (*str == *check)
		return (helper_wildcmp(str + 1, check + 1, save, pass));
	if (*str != *check)
	{
		if (*(str - 1) == *(check - 1))
			return (0);
		return (helper_wildcmp(str + 1, check, save, pass));
	}
	if (*str != '\0' && check == '\0')
		return (helper_wildcmp(str , save, save, 1));
	return (99);
}
/**
 * helper_2 - compares two strings
 * @str: a pointer to a string
 * @check: a pointer to a string that is compared against str
 * @save: a pointer to the string after the * of s2
 * @pass: determines if it passes or fails (value is 1 or 0)
 *
 * Return: 1 if the stings ==, and 0 otherwise.
 */
int helper_2(char *str, char *check, char *save, int pass)
{
	if (*str == '\0' && *check == '\0' )
		return (1);
	if (*str == '\0' && *check == '\0' )
		return (1);
	if (*str == '\0' && *check != '\0')
		return (0);
	if (*(check) == '*')
	{
//		printf("HELP %c, %c \n", *str, *check);
		if (*(str + 1) == '\0')
			return (1);
		save = check + 1;
		return (helper_2(str, check + 1, save, pass));
	}
	if (*str == *check)
	{
//		printf("debug_3 %c, %c\n", *str, *check);
		return (helper_2(str + 1, check + 1, save, pass));
	}
	if (*str != *check)
	{
		if (*(str - 1) == *(check - 1))
			{
		    return (helper_2(str , save, save, 1));
			}
//		printf("debug_1 %c, %c \n", *str, *check);
		return (helper_2(str + 1, check, save, pass));
	}
	if (*str != '\0' && check == '\0')
	{
//		printf("debug_5 %c, %c \n", *str, *check);
	}
	return (0);
}
/**
 * wildcmp - compares two strings
 * s1: a pointer to a string
 * s2: a pointer to a string that is compared against s1
 *
 * Return: 1 if the stings ==, and 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	int helper1, helper2;

	helper1 = helper_wildcmp(s1, s2, s2, 1);
	helper2 = helper_2(s1, s2, s2, 0);
	printf ("wild: %d, help_2: %d\n", helper1, helper2);
	return (55);
}
