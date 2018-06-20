# Binary Search Tree
A binary tree is a data structure in which we have a node with a value and up to two pointers to another node. A binary search tree is a binary tree constructed in a way that each is value is added in the following way:
*	Try to add in the root
*	If it is smaller then the node we are at, try to add on the left of it, if it is bigger, try to add it on the right. Continue this until we find a null to add there.

This is useful specially for searching, since when searching a value we will have to only look at log n nodes, because in everynode we only go to the right if the value we are looking for is bigger, or the left if it is smaller. So we go cutting in half the number of nodes we go through, so log n.

## Implementation
The insertion and search are pretty simple methods, specially if you do it recursively. The delete method has some to it. When deleting, there are 3 cases:
*	Node is a leaf : just delete it
*	Node has one child : Copy the child to the node, then delete the child
*	Node has two childs: Find the inorder sucessor of the node, copy to it, and delete it

The Inorder sucessor is the smallest node that is bigger than it, it is found by going one node to the right, then all the way to the left from the node we want to delete.

There are three famous ways of printing a tree : Preorder, Inorder, Postorder.
*	PreOrder is print(value), print(left), print(right)
*	PostOrder is print(left), print(right),print(value)
*	Inoder is print(left), print(value), print(right)

## The code
There are some methods that I implemented recursive and other iterative.
