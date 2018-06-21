# MergeSort
This sorting algorithm is based on divide-and-conquer paradigm, we will divide an array until they are trivial(one element), and then merge arrays, but when merging, we put the elements in the right order. It's pretty simple but need two methods, the divide and the merge. Usually is done recursive.

## Implementation
This can be complicated because of the way recursion works, but basically there will be two functions: Split and Merge:
Split:
```
split(initial, final)
	if(initial >= final)
		return;
	mid = initial + final / 2
	split(initial, mid)
	split(mid, final)
	merge(initial, mid, final)
```

Merge:

```
merge(initial, mid, final)
	left[] = arr[initial to mid]
	right[] = arr[mid to final]
	result[]
	int k
	for i and j in left.length and right.length
		if(left[i] <= right[j])
			result[k] = left[i]
			i++
		else
			result[k] = right[j]
			j++
		k++

	for elementsLeft in left or right
		result[k] = left[elementsLeft] || right[elementsLeft]			
		
```

This way, merge is called first when the arrays are trivial, then the things are merged increasing until there is the complete sorted array.

## The code
Nothing excepicional on the code, pretty much the stantard mergesort
