#include <cstring>
#include <iostream>
#include "Mystring.h"

using namespace std;

/***************************************** Constructors & Destructor *************************************************/
// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
     : str{nullptr} {
        str = new char[strlen(source.str )+ 1];
        strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

/************************************************ Operators *********************************************************/
// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
	cout << "Copy assingment" << endl;
	if(this == &rhs)
		return *this;
		
	delete [] this->str;
	
	this->str = new char[strlen(rhs.str) + 1];
	strcpy(this->str, rhs.str);
	
	return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
	cout << "Move assingment" << endl;
	if(this == &rhs){
		return *this;
	}
		
	delete [] this->str;
	
	this->str = rhs.str;
	rhs.str = nullptr;
	
	return *this;
}

// Negation (make lowercase)
Mystring Mystring::operator-() const{
	char *buff = new char[strlen(this->str) + 1];
	for(size_t i {0}; i < strlen(this->str); i++)
		buff[i] = tolower(this->str[i]);
		
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

// Concatenation
Mystring Mystring::operator+(const Mystring &rhs) const{
	size_t buff_size {strlen(this->str) + strlen(rhs.str) + 1};
	char *buff = new char[buff_size];
	
	strcpy(buff, this->str);
	strcat(buff, rhs.str);
	
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

// Equality
bool Mystring::operator==(const Mystring &rhs) const{
	return (strcmp(this->str, rhs.str) == 0);
}

// overloaded insertion operator
ostream &operator<<(ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
istream &operator>>(istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}
/************************************************* Methods **********************************************************/
// Display method
void Mystring::display() const {
    cout << str << " : " << get_length() << endl;
}

// length getter
 int Mystring::get_length() const { return strlen(str); }
 
// string getter
const char *Mystring::get_str() const { return str; }




