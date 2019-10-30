# -*- coding: utf-8 -*-
n = int(input())
p = 'программист'
if (n % 10 == 0) or (5 <= n % 10 and n % 10 <= 9) or (11 <= n % 100 and n % 100 <= 19):
	print(n, p+'ов')
elif 2 <= n % 10 and n % 10 <= 4:
	print(n, p+'а')
else:
	print(n, p)
