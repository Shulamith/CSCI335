//@author: Shulamith Dashevsky
//Date:February 18,2020
//Homework Assignment #2 CSCI335 Professor Raja
//Description: The following is just one function which implements the find capability
//in STL that iterates through a loop until it finds the value we search for.
//The object and the place we look for can be of any type. 
#include <iostream>
/* The following function accepts three parameters.
1. Start >> Where in the sequence are we looking for this item
2. End >> Where to stop in the sequence
These two parameters are type iterators which can be of type??
Iterators are objects like pointers.
3. Is a reference to the object. Meaning x is a pointer to some object we look
for in the sequence. we don't want to change what we search for. Hence, const.
Our goal is to return the iterator where it finds the object x
*/
template <typename Iterator, typename object> //What is the point of this?!
Iterator my_find(Iterator start, iterator end, const object & x){
  while (start!=end) { //while start and end are not the same iterator we will keep looping through
    if (*start==x) //*start is the object to which the iterator points to. If it's equal to X we want to return the iterator
     return start;
    ++first; //every iterator has the functionality of moving on to the next one, keep adding until we reach end or find value
  }
  return end; //if we don't find any value return the last iterator
}
