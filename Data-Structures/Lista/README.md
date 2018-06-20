# List - Stack and Queue
	A list is a set of objects/structures that have a value and a pointer. Generally the pointer points to one of these objects, or to null. The idea is to have a dynamic data structure that we can add objects, it is very simple. The first object, or node, its called head, and there is usually a pointer to that. The last is the tail. 
![list](https://www.geeksforgeeks.org/wp-content/uploads/gq/2015/03/Linkedlist_find_length.png)
The tail is the one pointing to null.
	There two different data structures that can be made this way, what changes is basically the way of deleting elements. These are the Stack and the Queue. Although simple they are very relevant to implement various things in computer science, like the stack trace in JVM calls.

## The Stack
Basically, you add elements one after another, but when you delete one, you take it off from the last to the first. Like a stack of plates. It's called POP.

## The Queue
This one you add one after the other, normally, but you remove from the start of the list, like a bank waiting line. It's called dequeue.

## Implementation
You need to create the object/class/structure that has a value, whatever it is(string, int, double, a lot of things) and a pointer of the same object type. At initialization we put head = null and tail = null. first element added is very simple, just point the head and the tail to it, and let it point to null. Starting from the second, you have to point the tail to the new element, then move the tail to be the new element, then let the new element point to null. 
Removing varies from Stack to Queue, but in general you just move the head or tail to point to another thing.
In a list where you can remove any element, you have to search the list for that element, then make the element previous to it point to the element next to it.

## The code
In the code there is both functions pop and deuque in the list, so you it's a STACKQUEUE ( just made that up ) but you can implement then separate, obviously.

 
