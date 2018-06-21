# QuickSort
In this sorting algorithm, we do a recursive call with an array(or subarray) in which in each call we choose a pivot and put every element lower(or greater, depending on what king of order you want) to the left, and every greater to the right. Then we recall the function to the subarray on the left, and to the subarray on the right. At each call, one element is put in it's final position. At the end, every element is at it final location.

## Implementation
There has some to it, like the pivot can be choosen in different ways, usually the first, the last, a random, or the median.
The loop to put the elements in order(lower to the left and greater to the right) is a bit tricky. We will keep track of a j index, that will loop through all the elements, and a i index that will start at -1 and everytime the condition (< pivot) or (> pivot) is met, we increase it and swap element at array[i] and array[j]. So it's like:

```
for j in array.length
	if(arr[j] < pivot)
		i++
		swap(arr[i], arr[j]) 
```


then we call the function again to the left side and the right side.


## The code
In the code there is no secret, the only other thing to care is to keep the natural order, so you can make an algorithm that keeps or don't keep, and this can be important for some pratical usage.
