/*Program to demonstrate that return by reference is typically used to return arguments passed by reference to the function, back to the caller */

/*When a variable is returned by reference, a reference to the variable is passed back to the caller. The caller can then use this reference to continue modifying the variable, which can be useful at times. Return by reference is also fast, which can be useful when returning structs and classes.*/

#include<iostream>
using namespace std;

int& function(int &r) 
{
	cout << endl << "Inside function: r= " << r << endl;
	return r; // returning reference of the value which was passed by reference to this function 
}

int main()
{
	int x = 10;
	cout << "Before calling function: x = " << x << endl;
	
	function(x) = 15; //Passing value by reference
	
	cout << endl << "After calling function: x = " << x << endl;
}


/* Output:
 *
Before calling function: x = 10

Inside function: r= 10

After calling function: x = 15
 *
*/
