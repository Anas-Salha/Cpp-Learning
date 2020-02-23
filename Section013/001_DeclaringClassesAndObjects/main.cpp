#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
	//attributes
	string name {"Player"};
	int hp {100}; //health points
	int mp {50}; //mana points
	int xp {10}; //experience points
	
	//methods
	void talk(string);
	bool is_dead();
};

class Account{
	//attributes
	string name {"Account"};
	double balance {0.0};
	
	//methods
	bool deposit(double);
	bool withdraw(double);
};

int main(){
	Account frank_account;
	Account anas_account;
	
	Player Frank;
	Player Anas;
	
	Player players[] {Frank, Anas};
	
	vector<Player> player_vec{Frank};
	player_vec.push_back(Anas);
	
	Player *enemy {nullptr};
	enemy = new Player;
	
	delete enemy;
	return 0;
}
