def quicksort(a_list):
	quicksort_helper(a_list, 0, len(a_list)-1)

def quicksort_helper(a_list, first, last):
	if first<last:
		
		splitpoint = partition(a_list, first, last)
		
		quicksort_helper(a_list, first, splitpoint -1)
		quicksort_helper(a_list, splitpoint+1, last)

def partition(a_list, first, last):
#	a = input('Enter number of texts: ')
#	pivot = a_list[len(a_list)/a/2]
	pivot = a_list[first]
	
	leftmark = first + 1
	rightmark = last
	
	done = False
	while not done:
		
		while leftmark <=rightmark and a_list[leftmark] <= pivot:
			leftmark += 1
			
		while rightmark >= leftmark and a_list[rightmark] >= pivot:
			rightmark -= 1
		
		if rightmark <= leftmark:
			done = True
		
		else:
			temp = a_list[leftmark]
			a_list[leftmark] = a_list[rightmark]
			a_list[rightmark] = temp
			
	temp = a_list[first]
	a_list[first] = a_list[rightmark]
	a_list[rightmark] = temp
	
	return rightmark
	
a_list = [54,26,93,17,77,31,44,55,20]
quicksort(a_list)
print(a_list)

