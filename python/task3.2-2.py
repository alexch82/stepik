t = str(input())
t = t.lower()
w = t.split()
s = set(w)
d = dict.fromkeys(s, 0)
for k in w:
	d[k] += 1
for k, v in d.items():
	print(k, v, sep = ' ')
