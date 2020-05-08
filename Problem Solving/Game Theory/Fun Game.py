#!/bin/python

import math
import os
import random
import re
import sys

# Complete the funGame function below.


for _ in xrange(input()):
    n,a,b = input(),map(int, raw_input().split()),map(int, raw_input().split())
    s = [a[x] + b[x] for x in xrange(n)]
    add = c = 0
    for i in range(n):
        index = s.index(max(s))
        if c == 0: add += a[index]
        if c == 1: add -= b[index]
        s.pop(index)
        a.pop(index)
        b.pop(index)
        c = 1 - c
    if add > 0: print "First"
    elif add < 0: print "Second"
    else: print "Tie"
