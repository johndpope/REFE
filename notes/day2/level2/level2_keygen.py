#!/usr/bin/python

def prod(arr):
    ret = 1
    for x in arr:
        ret *= x
    return ret

arr = [2, 2, 23, 37, 73, 83, 191]
output = ""

for x in arr:
    output += chr(x)

print output
