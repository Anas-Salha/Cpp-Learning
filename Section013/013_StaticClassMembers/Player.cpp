#include "Player.h"

int Player::num_players {0};

Player::Player(std::string name_val, int health_val, int xp_val)		//constructor
	:name(name_val), health(health_val), xp(xp_val){
		++num_players;
		}

Player::Player(const Player &source)									//copy constructor
	:Player{source.name, source.health, source.xp}{
		}
		
Player::~Player(){														//destructor
	--num_players;
}

int Player::get_num_players(){
	return num_players;
}