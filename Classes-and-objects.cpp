#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Player
{
public:
	string name;
	int health;
	int xp;

	void talk(string text_to_say)
	{
		cout << name  << " says " << text_to_say << endl;
	}
};



int main()
{
	Player Player1;
	Player Player2;

	Player1.name = "RohitRaider";
	Player1.health = 100;
	Player1.xp = 34;

	cout << "========================================" << endl;
	cout << "The Name of player is: " << Player1.name << endl;
	cout << "The Health of player is: " << Player1.health << endl;
	cout << "The XP of player is: " << Player1.xp << endl;
	Player1.talk("I'll Kill You!!");
	cout << "========================================" << endl;

	Player* enemy = new Player;
	(*enemy).name = "Anshuman";
	enemy->health = 100;
	enemy->xp = 50;
	
	cout << "========================================" << endl;
	cout << "The Name of enemy is: " << (*enemy).name << endl;
	cout << "The Health of enemy is: " << enemy->health << endl;
	cout << "The XP of enemy is: " << enemy->xp << endl;
	enemy->talk("Daddy's Home Boy!!");
	cout << "========================================" << endl;

}
