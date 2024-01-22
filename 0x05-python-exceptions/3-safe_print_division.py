#!/usr/bin/python3

def safe_print_division(a, b):

    try:
        mas = a / b
    except (TypeError, ZeroDivisionError):
        mas = None
    finally:
        print("Inside result: {}".format(mas))
    return (mas)
