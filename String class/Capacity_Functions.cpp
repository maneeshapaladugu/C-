/*Capacity Functions
4. capacity() :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
5. resize() :- This function changes the size of string, the size can be increased or decreased.
6.length():-This function finds the length of the string
7.shrink_to_fit() :- This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.
*/


// C++ code to demonstrate the working of capacity(), resize() and shrink_to_fit()

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str = "Demonstration of string class";

	cout << "The initial string is: " << str << endl;

	//Displaying capacity and length of string
	cout << "The capacity of string is: " << str.capacity()  << endl;
	cout << "The length of string is: " << str.length()  << endl;

	cout << endl;

	//Resizing string using resize()
	str.resize(10);
	cout << "The string after resize to 10 characters: " << str << endl;
	
	cout << endl;
	
	//Displaying capacity and length of string
	cout << "The capacity of string is: " << str.capacity()  << endl;
	cout << "The length of string is: " << str.length()  << endl;

	//Decreasing the capacity of string using shrink_to_fit()
	str.shrink_to_fit();
	cout << "The new capacity of string after shrink operation: " << str.capacity() << endl;

	return 0;	
}


/*Output:
The initial string is: Demonstration of string class
The capacity of string is: 29
The length of string is: 29

The string after resize to 10 characters: Demonstrat

The capacity of string is: 29
The length of string is: 10
The new capacity of string after shrink operation: 15
*/
