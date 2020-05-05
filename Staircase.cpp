// CPP program to print stair case pattern. 
#include <iostream> 
  
using namespace std; 
  
// Function definition 
void pattern(int n) 
{ 
    // for loop for rows 
    for (int i = 1; i <= n; i++) { 
  
        // conditional operator 
        int k = (i % 2 != 0) ? i + 1 : i; 
  
        // according to value of k carry 
        // out further operation 
        for (int j = 0; j < k; j++) 
            cout << " * "; 
        cout << endl; 
    } 
} 
