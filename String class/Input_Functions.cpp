/*Input Functions
1. getline() :- This function is used to store a stream of characters as entered by the user in the object memory.
2. push_back() :- This function is used to input a character at the end of the string.
3. pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.
*/


// C++ code to demonstrate the working of getline(), push_back() and pop_back()

#include<iostream>
using namespace std;

int main()
{
	string str;
	
	//Taking string input from input stream using getline() 	
	cout << "Enter your name: " << endl;
	getline(cin, str);
	cout << "The initial string is: " << str << endl;

	//Using push_back() to insert a character at the end
	str.push_back('P');
	cout << "The string after push_back is: " << str << endl;

	//Using pop_back() to delete a character from the end
	str.pop_back();
	cout << "The string after push_back is: " << str << endl;

	return 0;
}

/*Output:
 * Enter your name:
Maneesha
The initial string is: Maneesha
The string after push_back is: ManeeshaP
The string after push_back is: Maneesha
*/
