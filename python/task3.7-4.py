n = int(input())
pos = [0, 0]
for i in range(n):
	x = input().split()
	if x[0] == 'север':
		pos[1] += int(x[1])
	if x[0] == 'юг':
		pos[1] -= int(x[1])
	if x[0] == 'восток':
		pos[0] += int(x[1])
	if x[0] == 'запад':
		pos[0] -= int(x[1])
print(pos[0], pos[1])
