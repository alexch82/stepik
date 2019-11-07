fin = open('input.txt', 'r')
fout = open('output.txt', 'w')

n = 0;
avr = [0, 0, 0]
for s in fin:
	p = s.split(';')
	n += 1
	print((int(p[1]) + int(p[2]) + int(p[3])) / 3, file = fout)
	for i in range(3):
		avr[i] += int(p[i + 1])
for a in avr:
	print(a / n, end = ' ', file = fout)
	
fin.close()
fout.close()
