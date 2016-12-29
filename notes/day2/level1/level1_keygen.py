#!/usr/bin/python

import string
import random

def xor_hash(s):
    ret = 0
    for c in s:
        ret = ret ^ ord(c)
    return ret

chars = [x for x in string.printable if x not in string.whitespace]
while True:
    guess = ""
    for i in range(10):
        guess += random.choice(chars)

    if xor_hash(guess) == 0x20:
        print "Found valid key: {}".format(guess)
