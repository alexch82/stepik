fin = open('input.txt', 'r')
fout = open('output.txt', 'w')

d = {}
for t in fin:
	t = t.strip()
	t = t.lower()
	w = t.split()
	for k in w:
		d[k] = d.get(k, 0) + 1

m = max(d.values())
l = []
for k, v in d.items():
	if v == m:
		l.append(k)

l.sort()
print(l[0], m, sep = ' ', end = '\n', file = fout)

fin.close()
fout.close()
