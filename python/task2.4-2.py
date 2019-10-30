s = input()
z = '';
while len(s):
	l = 0
	r = 0
	while r < len(s) and s[l] == s[r]:
		r += 1
	z += s[l] + str(r)
	s = s[r:]
print(z)
