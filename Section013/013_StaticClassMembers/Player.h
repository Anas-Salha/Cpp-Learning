#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <string>

class Player
{
private:

public:
private:
	static int num_players;
	
	//attributes
	std::string name;
	int health;
	int xp;
	
public:
	void set_name(std::string name_val){
		name = name_val;
	}
	//getters
	std::string get_name() const {return name;}
	int get_health() {return health;}
	int get_xp() {return xp;}
	static int get_num_players();
	
	Player(std::string name_val = "Guest", int health_val = 100, int xp_val = 0);				//constructor
	Player(const Player &source);																//copy constructor
	~Player();																					//destructor
};

#endif // _PLAYER_H
