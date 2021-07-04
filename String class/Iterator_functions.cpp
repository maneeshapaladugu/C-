/*Iterator Functions
8. begin() :- This function returns an iterator to beginning of the string.
9. end() :- This function returns an iterator to end of the string.
10. rbegin() :- This function returns a reverse iterator pointing at the end of string.
11. rend() :- This function returns a reverse iterator pointing at beginning of string.
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	//Declaring string
	string str = "String class";

	//Declaring iterator
	string::iterator it;

	//Declaring reverse iterator
	string::reverse_iterator rev_it;

	//Displaying string
	cout << "String using forward iterator is: " << endl;
	for(it=str.begin(); it!=str.end(); it++)
		cout << *it;
	cout << endl;

	//Displaying reverse string
	cout << "Reverse string using reverse iterators is: " << endl;
	for(rev_it=str.rbegin(); rev_it!=str.rend(); rev_it++)
		cout << *rev_it;
	cout << endl;

	return 0;
}


/*Output:
String using forward iterator is: 
String class
Reverse string using reverse iterators is: 
ssalc gnirtS
*/
