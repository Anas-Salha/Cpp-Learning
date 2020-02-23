// Section 14
// Overloading copy assignment
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
	/*************************** testing move and copy assignments ***************************************/
	
    Mystring a {"Hello"};					// overloaded constructor
    Mystring b;								// no-args contructor
    b = a;									// copy assignment - b.operator=(a)
	a = Mystring{"Hola"};					// move assignment - b.operator=("Hola")
	a = a;									// self assignment
	
    b = "This is a test";					// move assignment - b.operator=("This is a test");
  
    Mystring empty;							// no-args constructor
    Mystring larry("Larry");				// overloaded constructor
    Mystring stooge {larry};				// copy constructor 
    Mystring stooges;						// no-args constructor
    
    empty = stooge;							// copy assignment operator
    
    empty.display();						// Larry : 5
    larry.display();						// Larry : 5
    stooge.display();						// Larry : 5
    empty.display();						// Larry : 5
    
    stooges = "Larry, Moe, and Curly";  
	stooges.display();						// Larry, Moe, and Curly : 21
    
	/*************************** testing negation, concatentaion, equality ***************************************/
	
	cout << boolalpha << endl;

    Mystring moe{"Moe"};

    larry.display();														// Larry
    moe.display();															// Moe
    
    cout << (larry == moe) << endl;											// false
    cout << (larry == stooge) << endl;										// true

    larry.display();														// Larry
    Mystring larry2 = -larry;
    larry2.display();														// larry
     
    stooges = larry + "Moe";										// ok with member function
    //stooges = "Larry" + moe;										// Compiler error
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();      
                                                   // Moe Larry
    Mystring three_stooges = moe + " " + larry + " " +  "Curly";
    three_stooges.display();												//  Moe Larry Curly
	
	/***************************** testing insertion and extraction ***************************************/
    Mystring curly;
	cout << "Enter the third stooge's first name: ";
    cin >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    
    cout << "\nEnter the three stooges names separated by a space: ";
    cin >> larry >> moe >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
	
	cout << endl;
    return 0;
}

