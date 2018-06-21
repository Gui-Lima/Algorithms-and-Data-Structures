# HEAP
A heap is a tree structure that focuses on faster min and max operations. When you see things like "get the mininum element of the set", the faster method is a heap. They are very simple, hence they can be implemented in an array. The reason behind this is that a heap is always a complete tree. This means a new element is always added on the bottom of the tree. The property this tree(the heap) have is that every node below any has a lower or equal priority(is higher in a min heap, lower in a max heap). This property does not involve horizontal, only vertical priority.

## Implementation
We can keep the tree in a array, where
array[0] is the hights priority element, or the root.
for every node array[i], array[(int) i-1/2] is it parent.
for every node array[i], array[2*i  + 1] and array[2*i + 2] are it's children(if they exist).
When we add a node or pop(delete the highest priority element), we have to rearrange the tree(array) to keep the property going. This method is called Heapify.
In insertion, we insert in the next avaliable node then we heapify up this element until it's in the right position by comparing it to it's parent.
In pop(deletion), we delet the root, insert the righmost element in the root(the latter added) and heapify down comparing to it's children.
They are two main ways of constructing a heap, top down and bottom up.
In bottom up, we construct a complete binary tree normally, then we heapify each node to make sure that every node is a heap, if every node is a heap, then the whole thing is a heap.
In top down, we start with an empty heap, then add elements as in a normal heap, so we heapify in every insertion that needs it.
This two methods can construct two different heaps.

## The Code
There is a different heap in which the elements are structs, but the minHeap is pretty much what you'd expect, an array that inserts at the end then heapify comparing to the parent, and deletes from the beginnig, put the last element in the first, then heaipify down by comparing to each children.
