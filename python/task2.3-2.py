a, b = int(input()), int(input())
average = 0.0
count = 0
for i in range(a, b+1):
	if i % 3 == 0:
		average += i
		count += 1
print(average / count)
