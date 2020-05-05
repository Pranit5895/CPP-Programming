#include<iostream.h>
#include<conio.h>
int binary(int B[],int size,int item);
void selection(int [],int);
void bubble(int [],int);
void insertion(int A[],int size);
void main()
{
cout<<"Enter the size of the array\n";
int size;
cin>>size;
int arr[80];
for(int i=0;i<size;i++)
{
cout<<"Enter the element at position "<<i+1<<" of the array\n";
cin>>arr[i];
}
cout<<"enter your choice,i.e,1 for selection sort and 2 for bubble sort and 3 for insertion sort\n";
int choice;
cin>>choice;
switch(choice)
{
case 1:selection(arr,size);
       break;
case 2:bubble(arr,size);
       break;
case 3:insertion(arr,size);
       break;
}

