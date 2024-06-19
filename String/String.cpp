/*
Purpose of the code is learning string library.

Developer = Barış Someroğlu
Date = 19.06.2024 - 06.00 pm
*/

#include <iostream>
#include <string> // string library to use string variable in code

using namespace std;

int main()
{
	 /* 1. DEFINITION and INITIAL VALUE ASSIGNMENT
		1a. DEFINITION
		1b. USEING " "
		1c. READING DATA WITH CONSOLE */	 
	
	/*  string Example = "First String Definition.";

	cout << Example << endl;

	cin.get();

	system("cls");

	cout << "Enter Something = ";
	cin >> Example;

	cout << endl << Example << endl; */

	// Example. shows string functions under string library

	/* 2. STRIING MEMORY FUNCTIONS
		2a. size and lenght
		2b. resize
		2c. capacity
		2d. reserve
		2e. clear
		2f. empty */
	
	string Example2 = "Learning String's Size.";

	cout << Example2 << endl << endl;

	// size and length function shows string's size
	cout << Example2.size() << endl;
	cout << Example2.length() << endl;
	
	// resize function edits size of string
	cout << "\nNow making resize!" << endl;

	Example2.resize(17);

	cout << Example2.size() << endl << Example2 << endl;

	// capacity function shows capactiy of string which gave by compiler 
	// capacity can be 15, 31, 47, 63, 79 ..... 16n -1 
	cout << "\nNow learning capacity!" << endl;

	cout << Example2.capacity() << endl;

	// reserve function makes reservations for capacity
	cout << "\nNow making capacity reservation for string!" << endl;

	Example2.reserve(64);

	cout << "Capacity of String After Reservation = " << Example2.capacity() << endl;

	// clear function deletes string's ingredient
	// after .clear() string's size will be 0
	cout << "\nNow deleteing string's ingredient!" << endl;

	cout << "String content before clear = " << Example2 << endl;

	Example2.clear();

	cout << "String content after clear = " << Example2 << Example2.length() << endl;

	// empty function checks string is empty or not empty
	// if it's empty ---> shows 1
	// if it's not empty ---> shows 0
	cout << "\nNow using empty function!" << endl;

	cout << Example2.empty() << endl;

	Example2 = "Now string not empty";
	cout << Example2 << "\n" << Example2.empty() << endl;

	/* 3. ACCESS METHODS
	
	
	*/


	return 0;
}