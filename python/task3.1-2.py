def modify_list(l):
	i = 0
	while i < len(l):
		if l[i] % 2:
			l.pop(i)
		else:
			l[i] //= 2
			i += 1
