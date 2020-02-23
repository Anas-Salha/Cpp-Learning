#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
	friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
	
private:
    char *str;											// pointer to a char[] that holds a C-style string
public:
    Mystring();											// No-args contstructor
    Mystring(const char *s);							// Overloaded contstructor              
    Mystring(const Mystring &source);					// Copy constructor
    ~Mystring();										// Destructor

	Mystring &operator=(const Mystring &rhs); 			// Copy assignment
	Mystring &operator=(Mystring &&rhs);				// Move assignment
	Mystring operator-() const;							// Negation (make lowercase)
	Mystring operator+(const Mystring &rhs) const;		// Concatenation
	bool operator==(const Mystring &rhs) const;			// Equality
	
	void display() const;
	
	//getters
	int get_length() const;                           
	const char *get_str() const;
  
};

#endif // _MYSTRING_H_
