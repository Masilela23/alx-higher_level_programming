#!/usr/bin/python3


def no_c(my_string):
    updated_str = ''
    for dee in my_string:
        if dee != 'c' and dee != 'C':
            updated_str += dee
    return (updated_str)
