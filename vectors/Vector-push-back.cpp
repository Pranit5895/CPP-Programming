#include <iostream> 
#include <vector> 
using namespace std; 

// push_back() function 
int p1() 
{ 
    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
    myvector.push_back( 6 ); 
  
    // Vector becomes 1, 2, 3, 4, 5, 6 
  
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
    
    cout << " " << count << endl; 
    
    return 0; 
}

int main()
{
    p1();
    p2();
    
    return 0;
}

/*
vector::push_back() - push_back() function is used to push elements into a 
vector from the back. The new value is inserted into the vector at the end, 
after the current last element and the container size is increased by 1.
Syntax: vectorname.push_back(value)
Parameters: The value to be added in the back is passed as the parameter.
Result: Adds the value mentioned as the parameter to the back of the vector
named as vectorname.
Examples:-
Input: myvector = {1, 2, 3, 4, 5};
       myvector.push_back(6);
Output: 1, 2, 3, 4, 5, 6
Input: myvector = {5, 4, 3, 2, 1};
       myvector.push_back(0);
Output: 5, 4, 3, 2, 1, 0
Source: GeeksforGeeks (https://www.geeksforgeeks.org/vectorpush_back-vectorpop_back-c-stl/)
*/
