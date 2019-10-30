a = [int(i) for i in input().split()]
for i in range(len(a) - 1):
	if i == 0:
		print(a[i + 1] + a[-1], end = ' ')
	else:
		print(a[i - 1] + a[i + 1], end = ' ')
if len(a)  == 1:
	print(a[0], end = ' ')
else:
	print(a[0] + a[len(a) - 2], end = ' ')

