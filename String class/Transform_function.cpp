/*Program to demonstrate the transform() function*/

/*transform : Performs a transformation on given array/string.
toupper(int c) : Returns upper case version of character c. If c is already in uppercase, return c itself.
tolower(int c) : Returns lower case version of character c. If c is already in lowercase, return c itself.*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//str_upper is the string which is converted to uppercase
	string str_upper = "Transform Function";

	//using transform() function and ::toupper in STL
	transform(str_upper.begin(), str_upper.end(), str_upper.begin(), ::toupper);
	cout << "using transform() function and ::toupper: " << str_upper << endl;

	//str_lower is the string which is converted to lowercase
	string str_lower = "Transform Function";

	//using transform() function and ::tolower in STL
	transform(str_lower.begin(), str_lower.end(), str_lower.begin(), ::tolower);
	cout << "using transform() function and ::tolower: " << str_lower << endl;

	return 0;
}

/*Output:
using transform() function and ::toupper: TRANSFORM FUNCTION
using transform() function and ::tolower: transform function
*/
