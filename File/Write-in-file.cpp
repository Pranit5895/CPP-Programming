#include <iostream>
#include<conio>
#include <fstream>

using namespace std;

int main()
{
    fstream st; // Step 1: Creating object of fstream class
    st.open("E:\studytonight.txt",ios::out);  // Step 2: Creating new file
