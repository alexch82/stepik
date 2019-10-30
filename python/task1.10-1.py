A = int(input())
B = int(input())
H = int(input())
if H >= A and H <= B:
	print('Это нормально')
elif H > B:
	print('Пересып')
else:
	print('Недосып')
