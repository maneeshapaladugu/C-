/*Program to demonstrate pass by reference*/

#include<iostream>
using namespace std;

int function(int &r) //r is a parameter or a formal parameter
{
	r = 20;
	return r;
}

int main()
{
	int x = 10;
	cout << "Before calling function: x= " << x << endl;
	
       	int y = function(x); //x is an argument or an actual argument
	cout << "After calling function: " << "x= " << x << " " <<  "y= " << y << endl;
}


/*Output:
Before calling function: x= 10
After calling function: x= 20 y= 20
*/
