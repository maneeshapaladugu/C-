/*Program to demonstrate the solution for return by address problem*/

#include<iostream>
using namespace std;

int* multiplyValue(int x)
{
	static int value{x*2};
	return &value; // Returning value by address
}// Variable value is NOT destroyed here

int main()
{
	int *ptr = multiplyValue(2);
	cout << "*ptr: " << *ptr << endl;
}



/*Output:
 ptr: 4
*/
