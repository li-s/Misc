def recurrence(num):
	print(num)
	if num >10:
		input('end')
	num += 1
	recurrence(num)
recurrence(0)
