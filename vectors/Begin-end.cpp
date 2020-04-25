#include <iostream> 
#include <vector> 
using namespace std;

// Implementation of begin() function 

int int_beg()                            // INTEGER VECTOR EXAMPLE
{ 
    // declaration of vector container 
    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
  
    cout<<endl;
    // using begin() to print vector 
    for (auto it = myvector.begin(); 
         it != myvector.end(); ++it) 
        cout << " " << *it; 
    return 0; 
} 

int str_beg()                            // STRING VECTOR EXAMPLE
{ 
    // declaration of vector container 
    vector<string> myvector{ "My", "Name", "is", "Aryan" }; 
  
    cout<<endl;
    // using begin() to print vector 
    for (auto it = myvector.begin(); 
         it != myvector.end(); ++it) 
        cout << " " << *it; 
    return 0; 
} 

// Implementation of end() function

int int_end()                            // INTEGER VECTOR EXAMPLE 
{ 
    // declaration of vector container 
    vector<int> myvector{ 1, 2, 3, 4, 5 }; 
  
    cout<<endl;
    // using end() to print vector 
    for (auto it = myvector.begin(); 
         it != myvector.end(); ++it) 
        cout << " " << *it; 
    return 0; 
} 

int str_end()                            // STRING VECTOR EXAMPLE
{ 
    // declaration of vector container 
    vector<string> myvector{ "My", "Name", "is", "Aryan" }; 
  
    cout<<endl;
    // using end() to print vector 
    for (auto it = myvector.begin(); 
         it != myvector.end(); ++it) 
        cout << " " << *it; 
    return 0; 
} 

int main()
{
    int_beg();
    str_beg();
    int_end();
    str_end();
    
    return 0;
}

/*
begin() function is used to return an iterator pointing to the first element of the vector container. 
begin() function returns a bidirectional iterator to the first element of the container.
Syntax : vectorname.begin()
Time Complexity : O(1)
end() function is used to return an iterator pointing to next to last element of the vector container. 
end() function returns a bidirectional iterator.
Syntax : vectorname.end()
Time Complexity : O(1)
Source: GeeksforGeeks (https://www.geeksforgeeks.org/vectorbegin-vectorend-c-stl/)
*/
