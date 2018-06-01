# Prim Algorithm for MST
Prim's Algorithm is one of two famous algorithms for forming a MST of a graph. They are very optimal, because they use the Greedy Approach and are proven to give always the right answer, thus, they work in good time complexity.

## What is does?
Given a graph, makes one possible MST for that graph.

## The Algorithm
Prim's algorithm works in a very similar way to Dijkstra(afterall, they are both Greedy).
In Prim's approach, you will need three arrays sized Graph.size:
Visited array, to mark whick nodes you have alredy added to the mst, initialize as false
Keys array, to mark the distance to the nodes, initialize it as infinity
Parent array, to mark every node parent's, initialize as 0
Starting from node 0, or some another initial node, you mark
keys[0] as 0
parent[0] as -1 ( root )
then, while the mst does not have every node:
* Get the node with the smallest key not yet visited(Will always be the node you marked as 0 in the first iteration)
* Mark this node as visited
* Add this node to the MST, with it being the source, the key[node] is the weight, and parent[node] is the destiny.
Not the second loop: for all adjacent nodes of this one:
* If it has not yet been visited, and the it's key is more than the value in the graph g[node][adjacentNode], make it key be this value, and mark parent[adjacentNode] = node.

Then, return the created MST. 
The only catch is to return the smallest key we can use a Heap to be faster.

## Analysis
Can run in Worst Case O(|E|log|V|) but may alter depending on what data structures you are using, such as Adjacency List or Fibonacci Heap.

## The code
The code is very similar to Dijkstra's one, mind the insertions on the heap i do that is not on the described algorithm above, they take less time than always do a full search to check smallest node. I also take the number of vertices at Initialization becouse my Weighted graph does not keep track of that.
