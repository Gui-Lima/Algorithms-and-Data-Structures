# Kruskal Algorithm for MST
Kruskal's Algorithm is one of two famous algorithms for forming a MST of a graph. They are very optimal, because they use the Greedy Approach and are proven to give always the right answer, thus, they work in good time complexity.

## What it does?
Given a graph, makes one possible MST for that graph.

## The Algorithm
It's not a complex Algorithm, but it requires some things to work, first, you will need a Disjoint Set data structure, and a fast Sorting Algorithm too.
It gets all the edges of the Graph and sorts it's weights in a increasing order.
It created a Disjoint Set for every vertice in that Graph.
Then, while the resulted graph(the mst) it's not complete:
* Pick the minimum cost edge not yet picked(it's sorted so it's fast)
* If the source of that edge it's not in the same Disjoint Set as the destiny of that edge, add this edge to the MST and join their sets together.

The part where we check if it's in the same Disjoint Set, we are actually checking if adding the edge forms a cycle in the MST, since a MST cannot have a cycle. The Disjoint Set porpouse is to make sure we don't add a edge that there is another way to get to the destiny of that edge from other node.

## Analysis
Kruskal Algorithm runs, on average, at O(|E| log|V|) time complexity, and in worst case, it's Omega(|E|+|V|).

## The code
In my code, you may get confued with Kruskal definition funciton, because i have to an Edge structure, and populate the edge array analyzing the graph, since in my Graph function i do not keep track of the edges i create. 
The mst function is very simple in itself, and to sort the edges i use a Quicksort, represented by the sortEdges function.
