d = dict(zip(list(str(input())), list(str(input()))))
s1 = list(str(input()))
s2 = list(str(input()))
for i in range(len(s1)):
	for k, v in d.items():
		if s1[i] == k:
			s1[i] = v
			break
for i in range(len(s2)):
	for k, v in d.items():
		if s2[i] == v:
			s2[i] = k
			break
for i in range(len(s1)):
	print(s1[i], end = '')
print()
for i in range(len(s2)):
	print(s2[i], end = '')
