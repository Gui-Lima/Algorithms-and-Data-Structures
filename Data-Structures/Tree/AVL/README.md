# AVL TREE
AVL tree is a binary search tree that is always balanced. This means no node has a sub-three two degree higher than the other. To do that we have to keep track of a height in every node. Everytime a insertion causes a node to be unbalanced, we do a rotation. Rotations can be in 4 forms in a insertion. In deletion we have a lot more rotations possible, so i won't be abording it here.
This is important because a normal BST can become a linked list, if we add only increasing values, for example. In a AVL, the operations are always log n.

## Implementation
So, everything is as in a binary search tree, except that we keep track of those heights in each node. Everytime we add a node, it's height is obviously 0. When we go up in the recursion(if your insert is recursive), we update the height of each node to MAX(height(left), height(right)) + 1, and check if the balance(height(left) - height(right) is equal to 2 or -2(or 3 if you use 1 index), if it is, then we have to do a rotation. The type of rotation varies depending on where the node was inserted:

*	Right Rotation - When the balance is -2, and the node was inserted on the left sub-three of the left sub-three
![right_rotation](https://www.tutorialspoint.com/data_structures_algorithms/images/avl_right_rotation.jpg)
*	Left Rotation - When the balance is 2, and the node was inserted on the right sub-three of the right sub-three
![left_rotation](https://www.tutorialspoint.com/data_structures_algorithms/images/avl_left_rotation.jpg)
*	Right Left Rotation - When the balance is 2, and the node was inserted on the left sub-three of the right sub-three
*	Left Right Rotation - When the balance is -2, and the node was inserted on the right sub-three of the left sub-three

The names are categorized on the way the rotation is going, so in Left rotation, since we add to much elements on the right side, we have to rotate to the left to make it balanced, hence the name.
The more comples ones are Right-Left, where we have to make a left rotation on the left sub-three, then a right rotation on the new middle element.
The Left-Right is same thing but invert right w left and vice-versa.

In deletion we have to do that too, but there are so much more cases instead of only these four.

## The code
In my code everthing is done recursive, so it's easier to see what's happening.

