# Non Weighted Graph
This kind of a graph has simple connections, with no cost from one node to another. It can represent any real life situation where the cost for going from one point to another is not relevant.

## Implementation
I implemented this graph with an array of vectors, we call that an adjacency list. The vector in the index 'x' of the array means what node are connected with x. So adj[0] = {1,2,3} means 0 is connected with 1,2 and 3. This representation is nice due to the low space cost compared to the other representation.

![Non Weighted Graph](https://cdncontribute.geeksforgeeks.org/wp-content/uploads/listadjacency.png)

## The Code
The code has two important algorithms, that are very closely tied with the graph definition, thus I did not put it in a separate class. These are the two graph traversal algorithms: BFS and DFS. They are very important as they will be used for most solutions for real graph applications.

* BFS
	BFS or Breadth First Search is way of traversing a graph in which, from an arbitrary starting node, you pass through all of its adjacent nodes, then you go to one of these adjacent, and pass trough all of it's adjacent. You don't want to keep visiting the same nodes a lot of times, so we use a Visited array to keep track of what nodes we've been trough. You probably can think of a way of doings this recursivelly, which is nice. In this code you will see a iterative way.
![BFS](https://www.ime.usp.br/~pf/algoritmos_para_grafos/aulas/figs/coelho-2011/aresta-biconexo-coelho.png) 
In this example, a bfs would be, starting from 0: 0->2->3->8->1->10->4->7->9->5->6

* DFS
	DFS of Depth First Search is another way of traversing a graph in which, from an arbitrary starting node, you pass to a adjancet node of that, and them to an adjacent node of that, and go deep until there's no more nodes to visit, then you go back and starting visiting the other adjancet nodes of the starting one. You will use the visited array again. This one is made recursevely on my code.
In the same example as above, the dfs would be, starting from zero: 0->2->1->4->9->6->5->7->10->8->3
