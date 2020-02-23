#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Move{
private:
	int *data;
public:
	void set_data_value(int d) 		{*data = d;}
	int get_data_value()			{return *data;}
	Move(int d);					//Constructor
	Move(const Move &source);		//Copy constructor
	Move(Move &&source);			//Move constructor
	~Move();						//Destructor
};

int main(){
	vector <Move> vec;
	
	vec.push_back(Move{10});
	vec.push_back(Move{20});
	vec.push_back(Move{30});
	vec.push_back(Move{40});
	return 0;
}

/*********************** Move constructors & destructors*********************************/
//constructor
Move::Move(int d){
	data = new int;
	*data = d;
	cout << "Constructor for: " << *data << endl;
}

//copy constructor
Move::Move(const Move &source)
	:Move{*source.data}{
	cout << "Copy constructor - deep copy for: " << *data << endl;
}

//move constructor
Move::Move(Move &&source)
	: data{source.data} {
		source.data = nullptr;
		cout << "Move constructor - moving resource: " << *data << endl;
	}

//destructor
Move::~Move(){
	delete data;
	if(data != nullptr){
		cout << "Destructor freeing data for: " << *data << endl;
	} else {
		cout << "Destructor freeing data for nullptr.\n";
	}
	
}
/******************************************************************************************/