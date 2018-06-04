#Longest Common Subsequence
This problem can be difficult the understand, given two strings, we have to cut some letters(or not) of them to find the longest common 'word' they can make. Like 'aab' and 'abc', the longest is 'ab'. We can't change letters order.

#What it does
Given two string, find the longest common subsequence there is betwen them.

##The Algorithm
As others DP solutions, we will do a table. In this table, the rows will be one string and the columns the other string. At each cell we will put:
(first row and column are zero)
If characters match, get what number was on diagonal superior left, increment one, and put there.
If characters don't match, get the max between the cell on the left and the cell on the top.

Is a very simple algorithm, the logic behind it is that that way we keep always the state of the latest match going, until we find a new match and then we increment it by one. Do this until the algorithm is done(there is no more characters to match)

##The code
Nothing very much on the code, very simple algorithm
