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
    else
    {
        cout<<"New file created"<<endl;
        st<<"Hello Friends"; //Writing to file

        // Checking the file pointer position
        cout<<"File Pointer Position is "<<st.tellp()<<endl;

        st.seekp(-1, ios::cur); // Go one position back from current position
