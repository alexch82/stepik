n = int(input())
i, j, k, di, dj = 0, 0, 1, 0, 1
m = [[0] * n for i in range(n)]
while k <= n ** 2:
	m[i][j] = k
	if (j + 1 >= n or m[i][j + 1] != 0) and dj == 1:
		dj = 0
		di = 1
	elif (i + 1 >= n or m[i + 1][j] != 0) and di == 1:
		dj = -1
		di = 0
	elif (j - 1 < 0 or m[i][j - 1] != 0) and dj == -1:
		dj = 0
		di = -1
	elif (i - 1 < 0 or m[i - 1][j] != 0) and di == -1:
		dj = 1
		di = 0
	i += di
	j += dj
	k += 1
print()
for y in m:
	for x in y:
		print(x, end=' ')
	print()
