import requests
fin = open('input.txt', 'r')
for s in fin:
	x = s.strip()
	r = requests.get(x)
	c = len(r.text.splitlines())
	print(c)
fin.close()