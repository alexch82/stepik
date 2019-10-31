a = [int(i) for i in input().split()]
a.sort()
b = []
i = 0
while i < len(a) - 1:
	if a[i] == a[i + 1]:
		while i + 1 < len(a) - 1 and a[i] == a[i + 1]:
			a.remove(a[i])
		b.append(a[i])
	i += 1
for i in b:
	print(i, end = ' ')
