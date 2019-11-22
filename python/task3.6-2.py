import requests
path = 'https://stepic.org/media/attachments/course67/3.6.3/'
with open('input.txt', 'r') as f:
	r = requests.get(f.readline().strip())
	t = r.text
while t.find('We') != 0:
	r = requests.get(path + t)
	t = r.text
with open('output.txt', 'w') as f:
	print(t, file = f)
