#include <iostream> 
#include <vector> 
using namespace std; 

// Implementation of front() function  
int a1() 
{ 
    vector<int> myvector; 
    myvector.push_back(3); 
    myvector.push_back(4); 
    myvector.push_back(1); 
    myvector.push_back(7); 
    myvector.push_back(3); 
    // Vector becomes 3, 4, 1, 7, 3 
  
    cout << endl << myvector.front(); 
    return 0; 
} 

// application Of front() and back() function
int a2() 
{ 
    vector<int> myvector; 
    myvector.push_back(8); 
    myvector.push_back(7); 
    myvector.push_back(6); 
    myvector.push_back(5); 
    myvector.push_back(4); 
    myvector.push_back(3); 
    myvector.push_back(2); 
    myvector.push_back(1); 
  
    // Vectro becomes 1, 2, 3, 4, 5, 6, 7, 8 
  
    if (myvector.front() > myvector.back()) { 
        cout << endl << myvector.front() - myvector.back(); 
    } 
    else if (myvector.front() < myvector.back()) { 
        cout << endl << myvector.back() - myvector.front(); 
    } 
    else
        cout << "\n 0 "; 
} 

int main()
{
    a1();
    a2();
    
    return 0;
}

/*
vector::front() - This function can be used to fetch the first element of a vector container.
Syntax: vectorname.front()
Examples :-
Input  :  myvector = 1, 2, 3
          myvector.front();
Output :  1
Input  :  myvector = 3, 4, 1, 7, 3
          myvector.front();
Output :  3
Difference between front(),back() and begin(),end() function :-
begin() and end() function return an iterator(like a pointer) initialized to the first or the 
last element of the container that can be used to iterate through the collection, 
while front() and back() function just return a reference to the first or the last element of the container.
Application: Given an empty vector of integers, add numbers to the vector, 
then print the difference between the first and the last element.
Example :- 
Input: 1, 2, 3, 4, 5, 6, 7, 8
Output: 7
Explanation - Last element = 8, First element = 1, Difference = 7
Source: GeeksforGeeks (https://www.geeksforgeeks.org/vectorfront-vectorback-c-stl/)
*/
