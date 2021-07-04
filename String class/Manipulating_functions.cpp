/*Manipulating Functions
12. copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.
13. swap() :- This function swaps one string with other.

*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring strings
	string str1 = "String class";
	string str2 = "Manipulating functions";

	//Declaring character array
	char ch[12];

	//using copy() to copy elements in to character array
	str1.copy(ch,12,0);

	//Displaying character array
	cout << "The new copied character array is: " << ch << endl << endl;

	//Displaying strings before swapping
	cout << "1st string before swapping: " << str1 << endl;
	cout << "2nd string before swapping: " << str2 << endl;

	//using swap() to swap string contents
	str1.swap(str2);
	cout << endl;
	//Displaying strings after swapping
	cout << "1st string after swapping: " << str1 << endl;
	cout << "2nd string after swapping: " << str2 << endl;
	
	return 0;
}


/*Output:
The new copied character array is: String class

1st string before swapping: String class
2nd string before swapping: Manipulating functions

1st string after swapping: Manipulating functions
2nd string after swapping: String class
*/
