# BackTracking
Backtracking Algorithms are those in which we try to find a solution for a problem by analyzing all the ways from the start, but as soon as a way is discovered to be 'wrong' or unable to finish, we backtrack until the last time we made a decision and to the other decision.
In general is used in constraint satisfaction problems, in which we have a constraint to make a decision.
Sudoku, for example, we can not put a number if there is the same number in a row or a column.

Backtracking Algorithms are usually recursive, because they are simpler to implement that way. You will se many isSafe functions, that check if the decision you are making matches the constraints. Usually if this is false, we backtrack.

## Applications
Backtracking can be used in many game problems sulutions, logic programming and combinatorial problemns such as the Knapsack, which is also in the Dynamic Programming folder.

## See Also
* Sudoku BackTrack
* N Queens problem
