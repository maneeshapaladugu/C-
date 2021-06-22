/*Prgram to demonstrate that, seperate memory is not created for reference variable*/

#include<iostream>
using namespace std;

void function_1(int x) 
{
	cout << "Inside function_1" << endl;
	cout << "x: " << x << " " << "&x: " << &x << endl;
}
void function_2(const int &x) // const keyword is to achieve const reference = const value/variable
{
	cout << "Inside function_2" << endl;
	cout << "x: " << x << " " << "&x: " << &x << endl;
}

int main()
{
	int x = 10;
	int &r = x; //'r' is a reference to variable 'x'
	cout << "x: " << x << " " << "&x: " << &x << endl << "r: " << r << " " << "&r: " << &r << endl;

	
	cout << endl << "Befoe Calling function_1" << endl;
	cout << "x: " << x << " " << "&x: " << &x << endl;

	function_1(x);
	function_1(10);
	
	cout << endl << "Before Calling function_2" << endl;
	cout << "x: " << x << " " << "&x: " << &x << endl;

	function_2(x);
	function_2(10);
}

/* Output:
x: 10 &x: 0x7ffd3c536d68
r: 10 &r: 0x7ffd3c536d68

Befoe Calling function_1
x: 10 &x: 0x7ffd3c536d68
Inside function_1
x: 10 &x: 0x7ffd3c536d4c
Inside function_1
x: 10 &x: 0x7ffd3c536d4c

Before Calling function_2
x: 10 &x: 0x7ffd3c536d68
Inside function_2
x: 10 &x: 0x7ffd3c536d68
Inside function_2
x: 10 &x: 0x7ffd3c536d6c
*/

