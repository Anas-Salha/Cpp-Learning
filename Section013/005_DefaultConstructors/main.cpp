#include <iostream>
#include <string>

class Player{
private:
	//attributes
	std::string name;
	int health;
	int xp;
	
public:
	//methods
	void set_name(std::string name_val){
		name = name_val;
	}
	
	std::string get_name(){
		return name;
	}
	
	//constructors
	Player(){ 																//no args
		name = "Guest";
		health = 100;
		xp = 10;
	}
	
	Player(std::string name_val, int health_val, int xp_val){ 				//3 args
		name = name_val;
		health = health_val;
		xp = xp_val;
	}
};

int main(){
	Player frank;
	std::cout << frank.get_name() << std::endl;
	
	frank.set_name("Frank");
	std::cout << frank.get_name() << std::endl;
	
	Player leo("Nightstalker", 1000, 200);
	std::cout << leo.get_name() << std::endl;
	
	std::cout << std::endl;
	return 0;
}
