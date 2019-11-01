def f(x):
	return x ** 2

d = {}
n = int(input())
for i in range(n):
	x = int(input())
	if x in d:
		print(d[x])
	else:
		d[x] = f(x)
		print(d[x])
