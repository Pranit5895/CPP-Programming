/ CPP program to demonstrate use of  
// std::vector::reserve  

#include <chrono> 
#include <iostream> 
#include <vector> 
  
using std::vector; 
using std::cout; 
using namespace std;
using namespace std::chrono;
  
int main() 
{ 
    // No of charactes 
    int N = (int)1e6; 
  
    vector<int> v1, v2; 
  
    // Reserve space in v2 
    v2.reserve( N ); 
  
    // Start filling up elements in v1 
    auto start = high_resolution_clock::now(); 
    
    for ( int i = 0; i < N; ++i ) 
         v1.push_back( i ); 
        
    auto stop = high_resolution_clock::now(); 
    
    auto duration = duration_cast<milliseconds>( stop - start ); 
  
    cout << " Method I took " << duration.count() << " microseconds " << endl; 
  
    // Start filling up elements in v2 
    start = high_resolution_clock::now(); 
    
    for ( int i = 0; i < N; ++i ) 
         v2.push_back( i ); 
        
    stop = high_resolution_clock::now(); 
    
    duration = duration_cast<milliseconds>( stop - start ); 
  
    cout << " Method II took " << duration.count() << " microseconds " << endl; 
  
    return 0; 
} 

/*
std::vector::reserve - std::vector class provides a useful function reserve which helps user 
specify the minimum size of the vector.It indicates that the vector is created such that it 
can store at least the number of the specified elements without having to reallocate memory.
Syntax : void reserve(size_type n)
Return Type : none
Arguments : n which denotes the no of elements to be stored in vector
Requests that vector is large enough to store n elements in the least. 
If the current vector capacity is less than n, then reallocation will 
take place. In other cases, reallocation will not happen. Function does
not modify existing elements in the vector.
=> To measure execution time in C++, refer below 
   https://www.geeksforgeeks.org/measure-execution-time-function-cpp/ 
 
Source : GeeksfoeGeeks (https://www.geeksforgeeks.org/using-stdvectorreserve-whenever-possible/) 
*/
