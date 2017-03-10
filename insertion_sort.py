
a = [2, 4, 1, 6, 5, 5, 10, 0, 123, 46, 26, 11, 124, 26, 22, 12, 16, 537]


def insertion_sort(list):
	for i in range(1, len(list)):
		
		current = list[i]
		position = i
		while position>0 and list[position-1]>current:
			list[position] = list[position-1]
			position -=1
		list[position] = current
	return list

i(a)
print(a)

