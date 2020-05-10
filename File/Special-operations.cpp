#include <iostream>
#include<conio>
#include <fstream>

using namespace std;
int main()
{
    fstream st; // Creating object of fstream class
    st.open("E:\studytonight.txt",ios::out);  // Creating new file
    if(!st) // Checking whether file exist
    {
        cout<<"File creation failed";
    }
