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
cout<<"\nEnter the elements to be searched\n";
int item;
cin>>item;
int index=binary(arr,size,item);
if(index==-1)
cout<<"\nsorry!!given element could not be found.\n";
else
cout<<"\nElement found at index:"<<index<<",position:"<<index+1<<endl;
getch();
clrscr();
}
void selection(int arr1[],int size)
{
int small,pos,tmp;
for(int i=0;i<size-1;i++)
{
small=arr1[i];
pos=i;
for(int j=i+1;j<size;j++)
{
if(arr1[j]<small)
{
small=arr1[j];
pos=j;
}
}
tmp=arr1[i];
arr1[i]=arr1[pos];
arr1[pos]=tmp;
cout<<"\nArray after pass "<<i+1<<" is: ";
for(int m=0;m<size;m++)
cout<<arr1[m]<<" ";
}
}
void bubble(int arr1[],int size)
{
int tmp;
for(int i=0;i<size;i++)
{
for(int j=0;j<(size-1)-i;j++)
{
if(arr1[j]>arr1[j+1])
{
tmp=arr1[j];
arr1[j]=arr1[j+1];
arr1[j+1]=tmp;
}
}
cout<<"\nArray after pass "<<i+1<<" is: ";
for(int m=0;m<size;m++)
cout<<arr1[m]<<" ";
}
}
void insertion(int A[],int size)
{
int i,j,key;
for(i=1;i<size;i++)
{
key=A[i];
j=i-1;
while(j>=0 && A[j]>key)
{
A[j+1]=A[j];
j=j-1;
}
A[j+1]=key;
}
cout<<"\nArray after sorting is: ";
for(int m=0;m<size;m++)
cout<<A[m]<<" ";
}

