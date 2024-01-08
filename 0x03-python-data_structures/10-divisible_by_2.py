#!/usr/bin/python3


def divisible_by_2(my_list=[]):
    new_list = []


    for dee in my_list:
        if dee % 2 == 0:
            new_list.append(True)
        else:
            new_list.append(False)
    return (new_list)
