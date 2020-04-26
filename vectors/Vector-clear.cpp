// Implementation of clear() function 
#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    vector<int> myvector; 
    myvector.push_back( 1 ); 
    myvector.push_back( 2 ); 
    myvector.push_back( 3 ); 
    myvector.push_back( 4 ); 
    myvector.push_back( 5 ); 
  
    // Vector becomes 1, 2, 3, 4, 5 
  
    myvector.clear(); 
    // vector becomes empty 
  
    // Printing the vector 
    for ( auto it = myvector.begin(); it != myvector.end(); ++it ) 
        cout << " " << *it;
        
    return 0; 
} 

/*
vector::clear() - clear() function is used to remove all the elements 
                  of the vector container, thus making it size 0.
				  
				- clear() removes all the elements from a vector 
				  container, thus making its size 0. All the elements 
				  of the vector are removed using clear() function.  
Syntax: vectorname.clear()
Parameters: No parameters are passed.
Result: All the elements of the vector are removed ( or destroyed ).
Time Complexity: O(N) ; All elements are destroyed one by one.
Source: GeeksforGeeks (https://www.geeksforgeeks.org/vector-erase-and-clear-in-cpp/)
*/
