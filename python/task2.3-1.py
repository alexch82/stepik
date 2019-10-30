# -*- coding: utf-8 -*-
a = int(input())
b = int(input())
c = int(input())
d = int(input())
for i in range(a-1, b+1):
	if i < a: print('', end='\t')
	else: print(i, end = '\t')
	for j in range(c, d+1):
		if i < a: print(j, end = '\t')
		else: print(i * j, end = '\t')
	print()
