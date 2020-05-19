/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream> 
  
/* fstream header file for ifstream, ofstream,  
  fstream classes */
#include <fstream> 
  
using namespace std; 
  
// Driver Code 
int main() 
{ 
    // Creation of ofstream class object 
    ofstream fout; 
  
    string line; 
  
    // by default ios::out mode, automatically deletes 
    // the content of file. To append the content, open in ios:app 
    // fout.open("sample.txt", ios::app) 
    fout.open("sample.txt"); 
  
