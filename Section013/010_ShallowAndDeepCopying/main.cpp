#include <iostream>
#include <string>

using namespace std;

/*********************************** Shallow class *****************************************/
class Shallow {
private:
	int *data;
public:
	void set_data_value(int d){*data = d;}
	int get_data_value(){return *data;}
	//Constructor
	Shallow(int d);
	//Copy constructor
	Shallow(const Shallow &source);
	//Destructor
	~Shallow();
};
/*******************************************************************************************/

/*********************************** Deep class *****************************************/
class Deep {
private:
	int *data;
public:
	void set_data_value(int d){*data = d;}
	int get_data_value(){return *data;}
	//Constructor
	Deep(int d);
	//Copy constructor
	Deep(const Deep &source);
	//Destructor
	~Deep();
};
/*******************************************************************************************/

void display_shallow(Shallow s){
	cout << s.get_data_value() << endl;
}

void display_deep(Deep s){
	cout << s.get_data_value() << endl;
}

int main(){
	Deep obj1 {100};
	display_deep(obj1);
	
	Deep obj2 {obj1};
	obj2.set_data_value(1000);
	
	Shallow obj3 {100};
	display_shallow(obj3);
	
	Shallow obj4 {obj3};
	obj4.set_data_value(1000);
	
	return 0;
}

/*********************** Shallow constructors & destructors*********************************/
//constructor
Shallow::Shallow(int d){
	data = new int;
	*data = d;
}

//copy constructor
Shallow::Shallow(const Shallow &source)
	:data(source.data){
	cout << "Copy constructor - shallow copy.\n";
}

//destructor
Shallow::~Shallow(){
	delete data;
	cout << "Destructor freeing data.\n";
}
/*******************************************************************************************/

/*********************** Deep constructors & destructors*********************************/
//constructor
Deep::Deep(int d){
	data = new int;
	*data = d;
}

//copy constructor
Deep::Deep(const Deep &source)
	:Deep{*source.data} {
	cout << "Copy constructor - deep copy.\n";
}

//destructor
Deep::~Deep(){
	delete data;
	cout << "Destructor freeing data.\n";
}
/*******************************************************************************************/

