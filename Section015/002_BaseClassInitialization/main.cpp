// Section 15
// Invoking Base Initilization

#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
   Base() : value{0} { cout << "Base no-args constructor" << endl; }
   Base(int x) : value{x} { cout << "Base (int) overloaded constructor" << endl; }
   ~Base(){ cout << "Base destructor" << endl; }
};

class Derived : public Base {
    //using Base::Base;
private:
    int doubled_value;
public:
    Derived() : doubled_value {0} { cout << "Derived no-args constructor " << endl; } 
    Derived(int x) : Base{x}, doubled_value {x*2}  { cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor " << endl; } 
};

int main() {
	Base b1;
	cout << endl;
	
	Base b2 {100};
	cout << endl;
	
	Derived d1;
	cout << endl;
	
	Derived d2 {1000};
    cout << endl;

    return 0;
}