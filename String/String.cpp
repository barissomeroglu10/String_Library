/*
Purpose of the code is learning string library.

Developer = Barış Someroğlu
Date = 19.06.2024 - 06.00 pm
*/

#include <iostream>
#include <string> // string library to use string variable in code

using namespace std;

int main() {
  system("color E9");

  Example. shows string functions under string library

  /*
  1. DEFINITION and INITIAL VALUE ASSIGNMENT
   1a. DEFINITION
   1b. USEING " "
   1c. READING DATA WITH CONSOLE
 */

  
  string Example = "First String Definition.";

  cout << Example << endl;

  cin.get();

  system("cls");

  cout << "Enter Something = ";
  cin >> Example;

  cout << endl << Example << endl;
  

  /*
  2. STRIING MEMORY FUNCTIONS
    2a. size and lenght
    2b. resize
    2c. capacity
    2d. reserve
    2e. clear
    2f. empty
  */

  
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

  cout << "Capacity of String After Reservation = " << Example2.capacity() <<
  endl;

  // clear function deletes string's ingredient
  // after .clear() string's size will be 0
  cout << "\nNow deleteing string's ingredient!" << endl;

  cout << "String content before clear = " << Example2 << endl;

  Example2.clear();

  cout << "String content after clear = " << Example2 << Example2.length() <<
  endl;

  // empty function checks string is empty or not empty
  // if it's empty ---> shows 1
  // if it's not empty ---> shows 0
  cout << "\nNow using empty function!" << endl;

  cout << Example2.empty() << endl;

  Example2 = "Now string not empty";
  cout << Example2 << "\n" << Example2.empty() << endl;

  /*
  3. ACCESS METHODS
    3a. at FUNCTİON
    3b. [] OPERATOR
  */

  string Example3 = "Leaning String Access Methods";

  // at function
  cout << "Finding string character with using .at" << endl;
  cout << "Character at 2. index = " << Example3.at(2) << endl;

  // [] operator
  cout << "\nFinding string character with using [] operator" << endl;
  cout << "Character at 2. index = " << Example3.at(2) << endl;

  /* 4.TEXT EDITING FUNCTIONS
    - + operator
    - += operator
    - append
    - push_back
    - assign
    - insert
    - erase
    - replace
    - swap
    - substr
  */

  string Example4, Example5;

  cout << "Please Enter 1. String = ";
  cin >> Example4;

  cout << "Please Enter 2. String = ";
  cin >> Example5;

  // + operator to connect strings
  cout << "\nUsing + operator ---> " << Example4 + " " + Example5 << endl;

  // += opeartor to connect strings
  Example4 += " ";
  Example4 += Example5;

  cout << "\nUsing += operator ---> " << Example4 << endl;

  cout << "--------------------------------------------------";

  cout << "\nPlease Enter 1. String = ";
  cin >> Example4;

  cout << "Please Enter 2. String = ";
  cin >> Example5;

  // .append to add a string at the end of one string
  Example4.append(Example5);

  cout << "\nUsing Example4.append(Example5) ---> " << Example4 << endl;

  Example4 = " String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  Example5.append(Example4, 0, 4);

  cout << "\nUsing Example5.append(Example4, 0, 4) ---> " << Example5 << endl;

  cout << "--------------------------------------------------";

  Example4 = "String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // push_back to add a character at the end of a string
  Example4.push_back('1');
  Example5.push_back('2');

  cout << "\nUsing Example4.push_back('1'); ---> " << Example4 << endl;
  cout << "\nUsing Example5.push_back('2'); ---> " << Example5 << endl;

  cout << "--------------------------------------------------";

  Example4 = " String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // assign to assignment one string to another string
  Example4.assign(Example5, 0, 3);

  cout << "\nUsing Example4.assign(Example5, 0, 3) ---> " << Example4 << endl;

  cout << "--------------------------------------------------";

  Example4 = "String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // insert to add a string to to any position of a string
  Example4.insert(3, Example5, 0, 6);

  cout << "\nExample4.insert(3, Example5, 0, 6) ---> " << Example4 << endl;

  cout << "--------------------------------------------------";

  Example4 = "String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // erase to delete any position of a string
  Example4.erase(3, 3);
  Example5.erase(0, 3);

  cout << "\nExample4.erase(3, 3) ---> " << Example4 << endl;
  cout << "\nExample5.erase(0, 3) ---> " << Example5 << endl;

  cout << "--------------------------------------------------";

  Example4 = "String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // replace = erase + insert
  // replace firstly makes erase any position of a string then adds a string to
  // any position of a string

  Example4.replace(3, 3, Example5, 3, 3);
  Example5.replace(3, 3, Example4, 0, 3);

  cout << "\nExample4.replace(3, 3, Example5, 3, 3) ---> " << Example4 << endl;
  cout << "\nExample5.replace(3, 3, Example4, 0, 3) ---> " << Example5 << endl;

  cout << "--------------------------------------------------";

  Example4 = "String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // swap changes value of strings between them
  Example4.swap(Example5);

  cout << "\nExample4 after Example4.swap(Example5) ---> " << Example4 << endl;

  cout << "\nExample5 after Example4.swap(Example5) ---> " << Example5 << endl;

  cout << "--------------------------------------------------";

  Example4 = "String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // substr copy any position of a string
  Example5 = Example4.substr(0, 3);

  cout << "\nExample5 = Example4.substr(0, 3) ---> " << Example5 << endl;

  /* 5.OTHER PROCCESSES
    - c_str
    - data
    - find
    - compare
    - Using spacial characters
  */

  cout << "--------------------------------------------------";

  Example4 = "String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // c_str converts string to char array (converts to c string)
  Example4.c_str();
  Example5.c_str();

  cout << "\nExample4 after Example4.c_str() ---> " << Example4 << endl;

  cout << "Example5 after Example5.c_str() ---> " << Example5 << endl;

  // data converts string to char array (converts to c string)
  Example4.data();
  Example5.data();

  cout << "\nExample4 after Example4.data() ---> " << Example4 << endl;
  cout << "Example5 after Example5.data() ---> " << Example5 << endl;

  cout << "--------------------------------------------------";

  Example4 = "String Adding";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // find finds a string in another string
  cout << "\nExample4.find(Example5) ---> " << Example4.find(Example5) << endl;

  cout << "\nExample5.find(Example4, 7, 6) --->" << Example5.find(Example4, 7)
       << endl;

  string Example6 = "Try";

  cout << "\nExample4.find(Example6) ---> " << Example4.find(Example6) << endl;

  cout << "--------------------------------------------------";

  Example4 = "String comparing";
  Example5 = "String";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  // compare compares two strings
  cout << "\nExample4.compare(Example5) --->" << Example4.compare(Example5) << endl;

  cout << "\nExample4.compare(0, 6, Example5) ---> " << Example4.compare(0, 6, Example5) << endl;

  cout << "\nExample4.compare(0, 2, Example5, 0, 3) ---> " << Example4.compare(0, 2, Example5, 0, 3) << endl;

  /*
  
  Using spacial characters

  \n or \r = to go to next line
  \t = to add tab
  \a = to make a sound
  \\ = to add backslash
  \' = to add single quote
  \" = to add double quote
  
  */

  cout << "--------------------------------------------------";

  Example4 = "String";
  Example5 = "Adding";

  cout << "\nExample4 = " << Example4 << endl;
  cout << "Example5 = " << Example5 << endl;

  cout << "\rExample4\'s contents = " << Example4 << endl;
  cout << "Example5\"s contents = " << Example5 << endl;

  cout << "\r";

  cout << "\"String\" is in Exaple4" << endl;
  cout << "\"Adding\" is in Exaple5" << endl;

  cout << "\r\tUsing backslash \\ to add backslash" << endl;

  cout << "\r\aMaking a sound" << endl;
  
  return 0;
}
