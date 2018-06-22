# Hash
Hash is a data structured based on two things: Hash table, and hash function. The goal here is to get fast access to data. What is the fastest access to data? An array. So the ideia is when you have to save a number, like 552, you put it in an array on the SLOT 552, so if you wanna check if 552 belongs to sth or whatever, you check the 552 position if there is a true there. But obviously you can't always do that. First because if you wanna store large numbers you would have an array of 1m positions, wasting memory. Second, not everything you want to store is a number. So what the hash does is:  
*	Transform the data in numbers to insert in an array.
*	Handle any possible confusion  
  
What that means is we do a Hash function, generally to transform an string into a number. This number tries to be unique for each string, but there can be times where two different strings generate the same number, so there has to be a collision handler function.  

## Implementation
So two things are tricky: The hash function and the collision function.
There are many many well known and alredy made hashes functions, with pro and cons. The aim is to have the least collision as possible, and don't cluster elements next to each other. There can't be a random in the function, because from the number generated(key) we have to be able to get the data we want.  

There are two famous ways of dealing with collision:  
*	Separate Chaining, in which we put a linked list in each cell of the hash table, so when colliding just add the element to the list. The downside is having to seach a list, losing the power of fast acessing sometimes.
*	Open Adressing, in which we put the element in another cell, by:  
Putting on the next open spot, or  
Putting on the i^2 next spot(avoid clustering), or  
Making another hash function to choose another spot.  

Basically we will have the method to add an element, search an element and delete an element, all in average O(1).

## The code
I did not implemented any fancy hash function, in fact, mine is quite terrible since strings that have the same length get hashed to the same values. Other thing is in open adressing you have to do some fancy things when searching, becouse you will have to keep looking for an element with the position you looked was filled, because maybe the one you are looking for got sent to another cell. And you have to keep track of numbers previously deleted so you don't stop the search there.
