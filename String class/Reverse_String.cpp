/*Program to demonstrate the methods to reverse a string*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//Reverse string using swap() function
void reverseUsingSwap(string &str)
{
	int n = str.length();

	//swap characters starting from two corners
	for(int i = 0; i < n/2; i++)
	{
		swap(str[i], str[n-i-1]);
	}
}

//Print reverse of a string
void PrintInReverse(string str)
{
	for(int i = str.length()-1; i >= 0; i--)
		cout << str[i];
}

//Get reverse of a constant string
char* reverseConstString(char const* str)
{
	int length = strlen(str); // find length of string
	char *reverse = new char[length+1]; // create a dynamic pointer character array

	strcpy(reverse, str); // copying string to pointer array

	for(int i = 0, j = length-1; i < j; i++, j--)
	{
		swap(reverse[i], reverse[j]);
	}
	return reverse; // returing dynamic memory pointer - no dangling
}

//Reverse string using constructor: Passing reverse iterators to the constructor returns us a reversed string
void ReverseUsingConstructor(string str)
{
	string reverse = string(str.rbegin(), str.rend());

	cout << "Reverse of string using constructor: " << reverse << endl;

}

//Reverse using a temporary string
void ReverseUsingTempString(string str)
{
	int length = str.length();
	string reverse;
	for(int i=length-1; i>= 0; i--)
		reverse.push_back(str[i]);

	cout << "Reverse using temporary string: " << reverse << endl;
}

int main()
{
	string str1 = "MyProgram";
	//Method 1: Reverse using swap() function
	reverseUsingSwap(str1);// pass by reference to str
	cout << "Reverse string using swap() function: " << str1 << endl;

	string str2 = "MyNewProgram";
	//Method 2: Reverse using reverse() function
	reverse(str2.begin(), str2.end());
	cout << "Reverse string using reverse() function: " << str2 << endl;
	
	string str3 = "MyCPPProgram";
	//Method 3: Printing in reverse
	cout << "Printing string in reverse: ";
	PrintInReverse(str3);
	cout << endl;

	//Method 4: Reverse a constant string
	const char* st = "Reverse";
	printf("ReverseConstantString: %s\n",reverseConstString(st));

	//Method 5: Reverse string using constructor
	ReverseUsingConstructor(str3);

	//Method 6: Reverse string using a temporary string
	ReverseUsingTempString(str3);
	return 0;
}

/*Output:
Reverse string using swap() function: margorPyM
Reverse string using reverse() function: margorPweNyM
Printing string in reverse: margorPPPCyM
ReverseConstantString: esreveR
Reverse of string using constructor: margorPPPCyM
Reverse using temporary string: margorPPPCyM
*/
