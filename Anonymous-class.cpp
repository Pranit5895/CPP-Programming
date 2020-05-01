// CPP program to illustrate  
// concept of Anonymous Class 
// by scope restriction 
#include<iostream> 
using namespace std;

// Anonymous Class : Class is not having any name 
class
{ 
    // data member 
    int i;  
public: 
    void setData(int i) 
    { 
        // this pointer is used to differentiate 
        // between data member and formal argument. 
        this->i = i; 
    } 
    void print() 
    { 
        cout << "Value for i : " << this->i << endl; 
    } 
      
} obj1;     // object for anonymous class 

// Anonymous Class : Class is not having any name 
class
{ 
    // data member 
    int i;  
public: 
    void setData(int i) 
    { 
        // this pointer is used to differentiate 
        // between data member and formal argument. 
        this->i = i; 
    } 
    void print() 
    { 
        cout << "Value for i : " << this->i << endl; 
    } 
      
} obj2, obj3;    // multiple objects for anonymous class
 
// Anonymous Class : Class is not having any name 
typedef class
{ 
    // data member 
    int i;  
public: 
    void setData(int i) 
    { 
        // this pointer is used to differentiate  
        // between data member and formal argument. 
        this->i = i; 
    } 
    void print() 
    { 
        cout << "Value for i : " << this->i << endl; 
    } 
      
} myClass;      // using typedef give a proper name 
  
// Driver function 
int main() 
{ 
    // multiple objects 
    myClass obj4, obj5; 
	
    obj1.setData(10); 
    obj1.print(); 
  
    obj2.setData(20); 
    obj2.print(); 
	
	obj3.setData(30); 
    obj3.print();
	
	obj4.setData(40); 
    obj4.print();
	
	obj5.setData(50); 
    obj5.print();
	
    return 0; 
}
