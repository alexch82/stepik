fin = open('dataset_3363_2.txt', 'r')
fout = open('output.txt', 'w')

for s in fin:
	s = s.strip()
	ss = ''
	i = 0
	while i < len(s) - 1:
		k = 1
		while i + k < len(s) and s[i + k].isdigit():
			k += 1
		ss += s[i] * int(s[i+1:i+k])
		i += k

	print(ss, end = '\n', file = fout)

fin.close()
fout.close()
