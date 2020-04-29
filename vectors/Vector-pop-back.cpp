#include <iostream> 
#include <vector> 
using namespace std; 

// pop_back() function   
int p1() 
{ 
    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
    myvector.pop_back(); 
  
    // Vector becomes 1, 2, 3, 4 
  
    for ( auto it = myvector.begin(); it != myvector.end(); ++it ) 
        cout << " " << *it; 
        
    cout << endl;
    
    return 0;
} 
 
// Application of push_back and pop_back function 
int p2() 
{ 
    int count = 0; 
    
    vector<int> myvector; 
    myvector.push_back( 1 ); 
    myvector.push_back( 2 ); 
    myvector.push_back( 3 ); 
    myvector.push_back( 4 ); 
    myvector.push_back( 5 ); 
    myvector.push_back( 6 ); 
    
    while ( !myvector.empty() ) 
    { 
        count++; 
        myvector.pop_back(); 
    } 
    
    cout << " " << count << endl;; 
    
    return 0; 
}

int main()
{
    p1();
    p2();
    
    return 0;
}

/*
vector::pop_back() - pop_back() function is used to pop or remove elements from 
a vector from the back. The value is removed from the vector from the end, and 
the container size is decreased by 1.
Q => Does pop_back() removes values along with elements ?
A => When pop_back() function is called, element at the last is removed, values and 
    elements are one of the same thing in this case. The destructor of the stored 
    object is called, and length of the vector is removed by 1. If the container’s 
    capacity is not reduced, then you can still access the previous memory location 
    but in this case, there is no use of accessing an already popped element, as 
    it will result in an undefined behavior.
Syntax: vectorname.pop_back()
Parameters: No parameters are passed.
Result: Removes the value present at the end or back of the given vector named 
as vectorname.
Examples:-
Input: myvector = {1, 2, 3, 4, 5};
       myvector.pop_back();
Output: 1, 2, 3, 4
Input: myvector = {5, 4, 3, 2, 1};
       myvector.pop_back();
Output: 5, 4, 3, 2
Source: GeeksforGeeks (https://www.geeksforgeeks.org/vectorpush_back-vectorpop_back-c-stl/)
*/
