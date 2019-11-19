fin = open('input.txt', 'r')
fout = open('output.txt', 'w')

p = list()
for s in fin:
	x = s.split()
	p.append({'n': int(x[0]), 's': x[1], 'h': int(x[2])})
c = {1: [0,0], 2: [0,0], 3: [0,0], 4: [0,0], 5: [0,0], 6: [0,0], 7: [0,0], 8: [0,0], 9: [0,0], 10: [0,0], 11: [0,0]}
for x in p:
	c[x['n']][0] += x['h']
	c[x['n']][1] += 1
for n, h in c.items():
	if h[1] == 0:
		print(n, '-', file = fout)
	else:
		print(n, float(h[0]) / float(h[1]), file = fout)
		
fin.close()
fout.close()
