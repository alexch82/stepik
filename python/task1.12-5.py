a = int(input())
M, m, mid = a, a, a

b = int(input())
if b > a:
	M = b
else:
	m, mid= b, b

c = int(input())
if c > M:
	M = c
elif c < m:
	m = c
else:
	mid = c

print(M)
print(m)
print(mid)
