a = [2, 4, 1, 6, 5, 5, 10, 0, 123, 46, 26, 11, 124, 26, 22, 12, 16, 537]

def bubbleSort(list):
	for passnum in range(len(list)-1,0,-1):
		for i in range(passnum):
			if list[i]>list[i+1]:
				b = list[i]
				list[i] = list[i+1]
				list[i+1] = b

bubbleSort(a)
print(a)

