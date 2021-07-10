/*string class of C++*/

#include<iostream>
using namespace std;

int main()
{
	//Case 1:
	string str = "Hello";
	cout << "str: " << str << endl;

	str = "Hello world"; //string copy - Unlike character array, strcpy is not necessary to change the value of string
	cout << "str: " << str << endl;
	
	//Case 2:
	string s1, s2;
        s1 = "My Program";
	s2 = s1; // string copy
	
	cout << "s1 = " << s1 << endl << "s2 = " << s2 << endl;

	//Case 3:
	string s3, s4;
	s3 = "Welcome";
	s4 = "India";
	s3 = s3 + s4;

	cout << "s3 = " << s3 << endl;

	//Case 4:
	string s5,s6;
	s5 = "India";
	s6 = "Paris";
	
	if(s5 == s6)
		cout << "Strings are equal" << endl;
	else
		cout << "Strings are not equal" << endl;
	cout << endl;

	//Case 5:
	string s7 = "String class";
	for(int i=0; s7[i]; i++)
		cout << s7[i]  << " " << endl;
	
	return 0;
}


/*Output:
str: Hello
str: Hello world
s1 = My Program
s2 = My Program
s3 = WelcomeIndia
Strings are not equal

S
t
r
i
n
g

c
l
a
s
s
*/
