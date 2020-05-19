// C++ program to demonstrate function  
// declaration outside class 
  
#include <bits/stdc++.h> 
using namespace std; 
class Geeks 
{ 
    public: 
    string geekname; 
    int id;

    // printname is not defined inside class definition
    void printname();

    // printid is defined inside class definition
    void printid()
    {
        cout << "Geek id is: " << id;
    }
};
