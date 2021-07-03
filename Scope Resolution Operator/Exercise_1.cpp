/*C++ program to show that we can access a global variable using scope resolution operator :: when there is a local variable with same name*/

#include<iostream>
using namespace std;

int x; //Global x

int main()
{
	int x = 10; //Local x
	cout << "Value of Global x is " << ::x << endl;  //Accessing global variable x using scope resolution operator
	cout << "Value of Local x is " << x << endl;

	return 0;
}

/*Output:
 * Value of Global x is 0
Value of Local x is 10
*/
