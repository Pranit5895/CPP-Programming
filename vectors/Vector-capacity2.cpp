#include <iostream>
#include <vector>
using namespace std; 
  
// vector::capacity() function  
int c1() 
{ 
    vector<int> v; 
  
    // inserts elements 
    for ( int i = 0; i < 10; i++ ) 
    { 
        v.push_back( i * 10 ); 
    } 
  
    cout << " \n The size of vector 1 is " << v.size(); 
    cout << " \n The maximum capacity is " << v.capacity(); 
    
    return 0; 
}

// vector::capacity() function
int c2() 
{ 
    vector<int> v; 
  
    // inserts elements 
    for ( int i = 0; i < 100; i++ ) 
    { 
        v.push_back( i * 10 ); 
    } 
  
    cout << " \n The size of vector 2 is " << v.size(); 
    cout << " \n The maximum capacity is " << v.capacity(); 
    
    return 0; 
}

int main()
{
    c1();
    c2();
    
    return 0;
}

/*
The vector::capacity() function is a built-in function which returns the 
size of the storage space currently allocated for the vector, expressed 
in terms of elements. 
-> This capacity is not necessarily equal to the vector size. 
-> It can be equal to or greater, with the extra space allowing to accommodate
   for growth without the need to reallocate on each insertion.
-> The capacity does not suppose a limit on the size of the vector. 
-> When this capacity is exhausted and more is needed, it is automatically 
   expanded by the container (reallocating it storage space).
-> The theoretical limit on the size of a vector is given by member max_size.
Syntax: vector_name.capacity()
Parameters: The function does not accept any parameters.
Return Value: The function returns the size of the storage space currently 
              allocated for the vector, expressed in terms of elements.
Scource: GeeksforGeeks (https://www.geeksforgeeks.org/vector-capacity-function-in-c-stl/)
*/
