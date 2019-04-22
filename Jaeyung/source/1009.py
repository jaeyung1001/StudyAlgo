def pow3(base, index):
	r = 1
	while(index != 0):
		if(index & 1 != 0):
			r = r * base % 10
		base = (base * base) % 10
		index = index >> 1
	return r
answer = []
n = input()
for i in range(int(n)):
	a,b = map(int, input().split())
	result = pow3(a,b)
	if result == 0:
		answer.append(10)
	else:
		answer.append(result)

for i in answer:
	print(i)
