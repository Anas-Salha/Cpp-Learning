#include <iostream>
#include "Player.h"
using namespace std;

void display_active_players();

int main(){
	display_active_players();
	Player hero {"Leo"};
	display_active_players();
	
	Player *villain = new Player{"Slark", 1000, 1000};
	display_active_players();
	
	{
		Player frank;
		display_active_players();
	}
	display_active_players();
	
	delete villain;
	display_active_players();
	
	return 0;
}

void display_active_players(){
	cout << "Active players: " << Player::get_num_players() << endl;
}