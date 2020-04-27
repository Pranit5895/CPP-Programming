#include <iostream> 
#include <vector> 
using namespace std; 

// Implementation of empty() function   
int e1() 
{ 
    vector<int> myvector{};
    
    if ( myvector.empty() ) 
    { 
        cout << " True "; 
    } 
    else 
    { 
        cout << " False "; 
    } 
    
    cout << endl;
    
    return 0; 
}
 
int e2() 
{ 
    int sum = 0; 
    
    vector<int> myvector{ 1, 5, 6, 3, 9, 2 }; 
    
    while ( !myvector.empty() ) 
    { 
        sum = sum + myvector.back(); 
        myvector.pop_back(); 
    } 
    
    cout << " " << sum << endl;
    
    return 0; 
}

int main()
{
    e1();
    e2();
    
    return 0;
}

/*
vector::empty() - empty() function is used to check if the vector container is empty or not.
Syntax : vectorname.empty()
Parameters : No parameters are passed.
Returns : True, if vector is empty
          False, Otherwise
          
Examples :- 
Input  : myvector = 1, 2, 3, 4, 5
         myvector.empty();
Output : False
Input  : myvector = {}
         myvector.empty();
Output : True
Q => Why is empty() preferred over size() ?
A => empty() function is often said to be preferred over the size() 
     function due to some of these points :-
	 
     1. empty() function does not use any comparison operators, thus it is more 
	    convenient to use.
	 
     2. empty() function is implemented in constant time, regardless of container 
	    type, whereas some implementations of size() function require O(n) time 
	    complexity such as list::size().
Source : GeekforGeeks (https://www.geeksforgeeks.org/vectorempty-vectorsize-c-stl/)
*/
