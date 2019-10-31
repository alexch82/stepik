s, l1, l2 = '', [], []
while s != 'end':
	s = str(input())
	l1.append(s.split())
l1.remove(['end'])
l1 = [l1[len(l1) - 1]] + l1 + [l1[0]]
i = 0
for x in l1:
	x = [x[len(x) - 1]] + x + [x[0]]
	l1[i] = x
	i += 1
for i in range(1, len(l1) - 1):
	for j in range(1, len(l1[i]) - 1):
		print(int(l1[i-1][j]) + int(l1[i+1][j]) + int(l1[i][j-1]) + int(l1[i][j+1]), end = ' ')
	print()
