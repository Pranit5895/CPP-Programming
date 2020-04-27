#include <iostream> 
#include <vector> 
using namespace std; 

// Removing element from particular position
// working of erase() function   
int e1() 
{ 
    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
    vector<int>::iterator it; 
  
    it = myvector.begin(); 
    myvector.erase( it ); 
  
    // Printing the Vector 
    for ( auto it = myvector.begin(); it != myvector.end(); ++it ) 
        cout << " " << *it; 
        
        cout << endl;
        
    return 0; 
} 

// Removing elements within a range
// Implementation of erase() function 
int e2() 
{ 
    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
    vector<int>::iterator it1, it2; 
  
    it1 = myvector.begin(); 
    it2 = myvector.end(); 
    it2--; 
    it2--; 
  
    myvector.erase(it1, it2); 
  
    // Printing the Vector 
    for ( auto it = myvector.begin(); it != myvector.end(); ++it ) 
        cout << " " << *it;
        
        cout << endl;
        
    return 0; 
} 

// Application of erase() function 
int e3() 
{ 
    vector<int> myvector{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  
    for ( auto i = myvector.begin(); i != myvector.end(); ++i ) 
    { 
        if ( *i % 2 == 0 ) 
        { 
            myvector.erase( i ); 
            
            i--; 
        } 
    } 
  
    // Printing the vector 
    for ( auto it = myvector.begin(); it != myvector.end(); ++it ) 
        cout << " " << *it; 
        
        cout << endl;
        
    return 0; 
}

int main()
{
    e1();
    e2();
    e3();
    
    return 0;
}

/*
vector::erase() - erase() function is used to remove elements from a container 
                  from the specified position or range.
				  
                - erase() function on the other hand, is used to remove specific 
				  elements from the container or a range of elements from the 
				  container, thus reducing its size by the number of elements 
				  removed.				  
Syntax: (1) vectorname.erase(position)
        (2) vectorname.erase(startingposition, endingposition)
        
Parameters: Position of the element to be removed in the form of iterator.
            or the range specified using start and end iterator.
            
Result: Elements are removed from the specified position of the container.
Examples:-
Input: myvector= {1, 2, 3, 4, 5}, iterator= 2
       myvector.erase(iterator);
Output: 1, 2, 4, 5
Input: myvector= {1, 2, 3, 4, 5, 6, 7, 8}, iterator1= 3, iterator2= 6
       myvector.erase(iterator1, iterator2);
Output: 1, 2, 3, 7, 8
Time Complexity: O(N) in the worst case when the 1st element is deleted 
while O(1) in the best case when the last element is deleted.
Source: GeeksforGeeks (https://www.geeksforgeeks.org/vector-erase-and-clear-in-cpp/)
*/
