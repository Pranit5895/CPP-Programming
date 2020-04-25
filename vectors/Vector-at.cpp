#include <iostream> 
#include <vector> 
using namespace std; 
  
// Implementation of at() function  
int v1() 
{ 
    vector<int> myvector; 
    myvector.push_back(3); 
    myvector.push_back(4); 
    myvector.push_back(1); 
    myvector.push_back(7); 
    myvector.push_back(3); 
    cout << myvector.at(3) << endl; 
    return 0; 
} 
 
// Application of at() function 
int v2() 
{ 
    vector<int> myvector; 
    myvector.push_back(1); 
    myvector.push_back(2); 
    myvector.push_back(3); 
    myvector.push_back(4); 
    myvector.push_back(5); 
    myvector.push_back(6); 
    myvector.push_back(7); 
    myvector.push_back(8); 
    myvector.push_back(9); 
    // vector becomes 1, 2, 3, 4, 5, 6, 7, 8, 9 
  
    for (int i = 0; i < myvector.size(); i += 2) { 
  
        cout << myvector.at(i); 
        cout << " "; 
    } 
    cout << endl;
    
    return 0; 
} 

int main()
{
    v1();
    v2();
    
    return 0;
} 

/*
vector::at() - at() function is used reference the element present 
at the position given as the parameter to the function.
Syntax: vectorname.at(position)
Parameters: Position of the element to be fetched.
Returns: Direct reference to the element at the given position.
Examples:-
Input: myvector = 1, 2, 3
         myvector.at(2);
Outpu: 3
Input: myvector = 3, 4, 1, 7, 3
         myvector.at(3);
Output: 7
Source: GeeksforGeeks 
(https://www.geeksforgeeks.org/vectorat-vectorswap-c-stl/)
*/
