#include<iostream>
using namespace std;
 
int main()
{
	cout << "Enter the length of the room: ";
	int room_length;
	cin >> room_length;

	cout << "Enter the width of the room ";
	int room_width;
	cin >> room_width;

	int area_of_the_room;
	area_of_the_room = room_length * room_width;
	cout << "The area of the room is " << area_of_the_room << " square feet\n";

	return 0;
}
