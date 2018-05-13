import re
answer = []
n = input()
for i in range(int(n)):
	string = input()
	if(re.fullmatch("(100+1+|01)+", string)):
		answer.append("YES")
	else:
		answer.append("NO")
for i in answer:
	print(i)