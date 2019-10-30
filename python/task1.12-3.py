#+, -, /, *, mod, pow, div Деление на 0!
a, b, oper = float(input()), float(input()), str(input())
if oper == '+':
	print(a + b)
elif oper == '-':
	print(a - b)
elif oper == '/' and b != 0.0:
	print(a / b)
elif oper == '*':
	print(a * b)
elif oper == 'mod' and b != 0.0:
	print(a % b)
elif oper == 'pow':
	print(a ** b)	
elif oper == 'div' and b != 0.0:
	print(a // b)
else:
	print('Деление на 0!')
