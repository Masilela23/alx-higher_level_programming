#!/usr/bin/python3

def magic_calculation(a, b):
    sumof = 0
    for i in range(1, 3):
        try:
            if i > a:
                raise Exception('Too far')
            sumof += a ** b / i
        except Exception:
            sumof = b + a
            break
    return sumof
