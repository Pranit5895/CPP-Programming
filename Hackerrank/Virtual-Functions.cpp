#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:
  string name;
  int age;
  virtual void getdata() = 0;
  virtual void putdata() = 0;
  virtual ~Person() {}
};

#include <array>
#include <numeric>

class Professor : public Person
{
  int id, publications;
  static int seq;
public:
  Professor() : id(++seq) {}
  void getdata() override { cin >> name >> age >> publications; }
  void putdata() override { cout << name << ' ' << age << ' ' << publications << ' ' << id << endl; }
};

int Professor::seq = 0;

class Student : public Person
{
  int id;
  array<int, 6> marks;
  static int seq;
public:
  Student() : id(++seq) {}
  void getdata() override { cin >> name >> age; for (int &x: marks) cin >> x; }
  void putdata() override { cout << name << ' ' << age << ' ' << accumulate(marks.begin(), marks.end(), 0) << ' ' << id << endl; }
};

int Student::seq = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
