#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "The element at index 0 is: " << vector1.at(0) << endl;
	cout << "The element at index 1 is: " << vector1.at(1) << endl;
	cout << "The total elements in vector1 are: " << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "The element at index 0 is: " << vector2.at(0) << endl;
	cout << "The element at index 1 is: " << vector2.at(1) << endl;
	cout << "The total elements in vector2 are: " << vector2.size() << endl;

	vector <vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "The elements in vector_2d at index(0,0) are: " << vector_2d.at(0).at(0) << endl;
	cout << "The elements in vector_2d at index(0,1) are: " << vector_2d.at(0).at(1) << endl;
	cout << "The elements in vector_2d at index(1,0) are: " << vector_2d.at(1).at(0) << endl;
	cout << "The elements in vector_2d at index(1,1) are: " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;

	cout << "The elements of vector 1 now are: " << vector1.at(0)<< endl;
	cout << "The elements of vector 1 now are: " << vector1.at(1) << endl;

	return 0;
}
