/*
1. find(“string”): Searches the string for the first occurrence of the substring specified in arguments. It returns the position of the first occurrence of substring.
2. find_first_of(“string”): Searches the string for the first character that matches any of the characters specified in its arguments. It returns the position of the first character that matches.
3. find_last_of(“string”): Searches the string for the last character that matches any of the characters specified in its arguments. It returns the position of the last character that matches.
4. rfind(“string”): Searches the string for the last occurrence of the substring specified in arguments. It returns the position of the last occurrence of substring
5. insert(pos_to_begin,string_to_insert): This function inserts the given substring in the string. It takes two arguments, first the position from which you want to insert the substring and second the substring.
6. clear(): This function clears all the characters from the string. The string becomes empty (length becomes 0) after this operation.
7. empty(): Tests whether the string is empty. This function return a Boolean value.
*/

/*C++ program to demonstrate working of find(), rfind(), find_first_of() and find_last_of()*/

#include<iostream>
using namespace std;

int main()
{
	string str("functions - Search functions");

	//find returns position to first occurrence of substring "functions"
	cout << "First occurrence of \"functions\" starts from: ";
	cout << str.find("functions") << endl;

	//prints position of first occurrence of any character of "aeiou"
	cout << "First occurrence of character from \"aeiou\" is at: ";
	cout << str.find_first_of("aeiou") << endl;

	//prints position of last occurrence of any character of "aeiou"
	cout << "Last occurrence of character from \"aeiou\" is at: ";
	cout << str.find_last_of("aeiou") << endl;

	//rfind() returns position to last occurrence of substring "functions"
	cout << "Last occurrence of \"functions\" starts from: ";
	cout << str.rfind("functions") << endl;
	
	cout << "Length of str: " << str.length() << endl;
	//Inserting " program" at 28th position
	str.insert(28, " program");
	
	//Printing modified string after string operation
	cout << str  << endl;
	
	//clearing string
	str.clear();

	//checking if string is empty
	(str.empty() == 1)?
		cout << "String is empty" << endl:
		cout << "String is not empty" << endl;
	
	return 0;
}

/*Output:
 First occurrence of "functions" starts from: 0
First occurrence of character from "aeiou" is at: 1
Last occurrence of character from "aeiou" is at: 25
Last occurrence of "functions" starts from: 19
Length of str: 28
functions - Search functions program
String is empty
*/
