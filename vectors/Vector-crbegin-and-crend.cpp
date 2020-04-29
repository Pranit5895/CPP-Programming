/* CPP program to illustrate 
working of crbegin()crend() */

#include <iostream> 
#include <vector> 
using namespace std; 
  
int main () 
{ 
  // initializing vector with values 
  vector<int> vect = {10, 20, 30, 40, 50}; 
  
  // for loop with crbegin and crend 
  for (auto i = vect.crbegin(); i != vect.crend(); i++) 
    cout <<" "<< *i;
   
  cout <<'\n'; 
  return 0; 
} 

/*
Using vector::crend() - It’s a public member function that returns a const_reverse_iterator 
                        pointing to the element preceding the first element.
Syntax: const_reverse_iterator crend() const noexcept; 
Using vector::crbegin() - It returns a const_reverse_iterator pointing to the last element 
                          in the container (i.e., its reverse beginning)
Syntax: const_reverse_iterator crbegin() const noexcept;    
Source: GeekforGeeks (https://www.geeksforgeeks.org/vectorcrend-vectorcrbegin-examples/)
*/
