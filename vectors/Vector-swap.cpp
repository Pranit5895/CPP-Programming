#include <iostream> 
#include <vector> 
using namespace std; 
  
// Implementation of swap() function   
int main() 
{ 
    // vector container declaration 
    vector<int> myvector1{ 1, 2, 3, 4 }; 
    vector<int> myvector2{ 3, 5, 7, 9 }; 
  
    // using swap() function to swap elements of vector 
    myvector1.swap(myvector2); 
  
    // printing the first vector 
    cout << " \n myvector1 = "; 
    for (auto it = myvector1.begin(); it < myvector1.end(); ++it) 
        cout << *it << " "; 
  
    // printing the second vector 
    cout << " \n myvector2 = "; 
    for (auto it = myvector2.begin(); it < myvector2.end(); ++it) 
        cout << *it << " "; 
        
    return 0; 
}

/*
vector::swap() - This function is used to swap the contents of 
one vector with another vector of same type and size.
Syntax: vectorname1.swap(vectorname2)
Parameters: The name of the vector with which the contents have to be swapped.
Result: All the elements of the 2 vectors are swapped.
Examples:-
Input: myvector1 = {1, 2, 3, 4}
         myvector2 = {3, 5, 7, 9}
         myvector1.swap(myvector2);
Output: myvector1 = 3, 5, 7, 9
         myvector2 = 1, 2, 3, 4
Input: myvector1 = {1, 3, 5, 7}
         myvector2 = {2, 4, 6, 8}
         myvector1.swap(myvector2);
Output: myvector1 = 2, 4, 6, 8
         myvector2 = 1, 3, 5, 7
Source: GeeksforGeeks (https://www.geeksforgeeks.org/vectorat-vectorswap-c-stl/)         
*/
