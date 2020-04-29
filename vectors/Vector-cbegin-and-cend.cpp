#include <iostream> 
#include <string> 
#include <vector> 
  
using namespace std; 

int cbegin()                               // use of cbegin() 
{ 
    vector<string> vec; 
  
    // 5 string are inserted 
    vec.push_back(" First "); 
    vec.push_back(" Second "); 
    vec.push_back(" Third "); 
    vec.push_back(" Fourth "); 
    vec.push_back(" Fifth "); 
  
    // displaying the contents 
    cout << "\n Contents of the vector: " << endl; 
    for (auto itr = vec.cbegin(); itr != vec.end(); ++itr) 
        cout << *itr << endl; 
  
    return 0; 
}

int cend()                                 // use of cend()
{ 
    vector<string> vec; 
  
    // 5 string are inserted 
    vec.push_back(" First "); 
    vec.push_back(" Second "); 
    vec.push_back(" Third "); 
    vec.push_back(" Fourth "); 
    vec.push_back(" Fifth "); 
  
    // displaying the contents 
    cout << "\n Contents of the vector: " << endl; 
    for (auto itr = vec.cend() - 1; itr >= vec.begin(); --itr) 
        cout << *itr << endl; 
  
    return 0; 
} 

int main()
{
    cbegin();
    cend();
    
    return 0;
}

/*
vector::cbegin()
The function returns an iterator which is used to iterate container.
The iterator points to the beginning of the vector.
Iterator cannot modify the contents of the vector.
Syntax: vectorname.cbegin()
vector::cend()
The function returns an iterator which is used to iterate container.
The iterator points to past-the-end element of the vector.
Iterator cannot modify the contents of the vector.
Syntax: vectorname.cend()
Scource: GeeksforGeeks (https://www.geeksforgeeks.org/vector-cbegin-vector-cend-c-stl/)
*/
