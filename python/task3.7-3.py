n = int(input())
d = set()
for i in range(n):
	d.add(str(input()).lower())
l = int(input())
s = set()
for i in range(l):
	for j in str(input()).split():
		if j.lower() not in d:
			s.add(j)
for i in s:
	print(i)
