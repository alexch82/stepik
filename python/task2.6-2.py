n = int(input())
k = 1
while n > 0:
	for i in range(k):
		print(k, end = ' ')
		n -= 1
		if n < 1:
			break
	k += 1
	if n < 1:
		break
	
