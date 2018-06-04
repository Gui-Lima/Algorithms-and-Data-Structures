#KnapSack Problem
The knapsack problem is a famous Computer Science problem that has many variations, here, we do the binary 0-1 and a alternate version with aggregated values.

## What is does
Given a set itens, each one having a weight/cost and a value, and we have a container that can carry x weights/costs, give us the best optimization such as we have the highest value in the container without exceding it's carriage.

## The Algorithm
As you may imagine(since it's in the folder name), this is solveable by a DP approach, so you must be thinking we will make a table of states. You are right.
As all DP problems we have the optimalsubstructure and overlapping subproblems, our matrix will be: States x Weights. What we will do is start with only one possible item(the lowest weight) and fill the first state that way. Each collumn is a weight, starting from 0 and going to the container weight.
So in a example where Weights={1,2,5,7}, Values={4,7,15,23}, and Size=10
First row would be adding only the 1-weight item. Mind that we only have 1 of each item


					0	1	2	3	4	5	6	7	8	9	10
		State 0 (1)         -   0	4	4	4	4	4	4	4	4	4	4
		State 1 (1,2)       -
		State 2 (1,2,5)     -
		State 3 (1,2,5,7)   -

So in each collumn we put the maximum value we can achieve at that weight in that state.
The trick starts with the other columns, becouse you will have to check the previous column


					0	1	2	3	4	5	6	7	8	9	10
		State 0 (1)         -   0	4	4	4	4	4	4	4	4	4	4
		State 1 (1,2)       -	0	4	7	11	11	11	11	11	11	11	11
		State 2 (1,2,5)     -	0	4	7	11	11	15	19	22	26	26	26
		State 3 (1,2,5,7)   -	0	4	7	11	11	15	19	23	27	30	34

At each iteartion, we ask if the new item fits in the bag, if not, then just copy to value it had before in that cell, if it fits, we have to check if we add it, if the total value on the bag will improve, by looking at the solved problem one row above.

## Analysis
This approach solves the problem in O(numberOfItens * Weight of bag) time complexity, and memory cost of constructing the matrix.

## The code
One bad things about array pointes in C++ is you can't get the size of that array. So i have to pass 4 parameters, one being the number of itens in the bag, but normally, you can get that from the weight ou values array. Beside that, very simple algorithm to understand if you look. 



