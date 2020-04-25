#include <iostream>
#include <vector>
using namespace std; 
  
// how to assign constant values to a vector  
int m1() 
{ 
    vector<int> v; 
    v.assign(7, 100); 
  
    cout << " \n Size of first : " << int(v.size()); 
  
    cout << " \n Elements are : "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
    return 0; 
} 

// how to assign values to a vector from a list
int m2() 
{ 
    vector<int> v1; 
    int a[] = { 1, 2, 3 }; 
  
    // assign first 2 values 
    v1.assign(a, a + 2); 
  
    cout << " \n Elements of vector 1 are : "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    vector<int> v2; 
    // assign first 3 values 
    v2.assign(a, a + 3); 
  
    cout << " \n Elements of vector 2 are : "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    return 0; 
} 
 
// how to modify vector size
int m3() 
{ 
    vector<int> v; 
    v.assign(7, 100); 
  
    cout << " \n Size of first : " << int(v.size()); 
  
    cout << " \n Elements are : "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // modify the elements 
    v.assign(v.begin(), v.begin() + 3); 
  
    cout << " \n Modified VectorElements are : "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
    return 0; 
} 

int main()
{
    m1();
    m2();
    m3();
    
    return 0;
}

/*
vector::assign() is an STL in C++ which assigns new values to the vector elements 
by replacing old ones. It can also modify the size of the vector if necessary.
Syntax for assigning constant values: vectorname.assign(int size, int value)
Parameters: 1. size - number of values to be assigned
            2. value - value to be assigned to the vectorname
Syntax for assigning values from an array or list: vectorname.assign(arr, arr + size)
Parameters: 1. arr - the array which is to be assigned to a vector
            2. size - number of elements from the beginning which has to be assigned.
Syntax for modifying values from a vector: vectorname.assign(InputIterator first, InputIterator last) 
Parameters: 1. first - Input iterator to the initial position range.
            2. last - Input iterator to the final position range. 
            
Source: GeeksforGeeks (https://www.geeksforgeeks.org/vector-assign-in-c-stl/)            
*/
