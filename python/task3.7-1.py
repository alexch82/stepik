n = int(input())
d = dict()
r = dict()
for i in range(n):
	x = input().split(';')
	d[x[0]] = int(x[1])
	d[x[2]] = int(x[3])
	if x[0] not in r:
		r[x[0]] = [1, 0, 0, 0, 0]
	else:
		r[x[0]][0] += 1
	if x[2] not in r:
		r[x[2]] = [1, 0, 0, 0, 0]
	else:
		r[x[2]][0] += 1
	if d[x[0]] > d[x[2]]:
		r[x[0]][1] += 1
		r[x[2]][3] += 1
		r[x[0]][4] += 3
	elif d[x[0]] < d[x[2]]:
		r[x[0]][3] += 1
		r[x[2]][1] += 1
		r[x[2]][4] += 3
	else:
		r[x[0]][2] += 1
		r[x[2]][2] += 1
		r[x[0]][4] += 1
		r[x[2]][4] += 1
for k in r.keys():
	print(k + ':', end = ' ')
	for i in r[k]:
		print(i, end = ' ')
	print()
