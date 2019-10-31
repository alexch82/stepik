# -*- coding: utf-8 -*-
lst = [int(i) for i in input().split()]
x = int(input())
if x not in lst:
	print('Отсутствует')
else:
	k = 0
	for i in lst:
		if i == x:
			print(k, end=' ')
		k += 1
