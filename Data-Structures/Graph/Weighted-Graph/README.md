# Weighted Graph
This kind of a graph has a cost for going from um node to another. This difference can make this Data Structure to some real applications like roads connecting a city, that a simple graph can't.

## Implementation
I implemented this graph with a matrix VxV, being V the number of nodes. In each cell (x,y) there is the cost for going from node x to node y. If there is no such path, the number is 0, so my Graph does not accept zero costing edges.

![Weighted Graph](http://2.bp.blogspot.com/-KS2IS_wQ99k/Ux5EYJg2SZI/AAAAAAAACL8/xn2mJDQto8o/s1600/Adjacency+Matrix+Representation+of+Weighted+Graph.JPG)

## The Code
The code has two important algorithms, that are very closely tied with the graph definition, thus I did not put it in a separate class. These are the two graph traversal algorithms: BFS and DFS. They are very important as they will be used for most solutions for real graph applications.

* BFS
	BFS or Breadth First Search is way of traversing a graph in which, from an arbitrary starting node, you pass through all of its adjacent nodes, then you go to one of these adjacent, and pass trough all of it's adjacent. You don't want to keep visiting the same nodes a lot of times, so we use a Visited array to keep track of what nodes we've been trough. You probably can think of a way of doings this recursivelly, which is nice. In this code you will see a iterative way.
![BFS](https://www.ime.usp.br/~pf/algoritmos_para_grafos/aulas/figs/coelho-2011/aresta-biconexo-coelho.png) 
In this example, a bfs would be, starting from 0: 0->2->3->8->1->10->4->7->9->5->6

* DFS
	DFS of Depth First Search is another way of traversing a graph in which, from an arbitrary starting node, you pass to a adjancet node of that, and them to an adjacent node of that, and go deep until there's no more nodes to visit, then you go back and starting visiting the other adjancet nodes of the starting one. You will use the visited array again. This one is made recursevely on my code.
In the same example as above, the dfs would be, starting from zero: 0->2->1->4->9->6->5->7->10->8->3
