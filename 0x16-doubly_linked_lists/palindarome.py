#!/usr/bin/python3
def num_scan():
    pal_num = 0
    for i in range(999, 0, -1):
        for j in range(999, 0, -1):
            product = i * j
            if product > pal_num:
                if str(product) == str(product)[::-1]:
                    pal_num = product
                    numbers = [i, j]
    print("{:d} * {:d} = {:d}".format(numbers[0], numbers[1], pal_num))
    return (pal_num)

num_scan()
