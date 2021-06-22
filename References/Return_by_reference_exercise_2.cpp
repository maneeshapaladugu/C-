/*Program to demonstrate the compilation error when a function is returned by value and a new value is assigned to it*/

#include<iostream>
using namespace std;

int function(int &r) 
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


/* On compilation:
ReferenceTest_4.cpp: In function ‘int main()’:
ReferenceTest_4.cpp:17:16: error: lvalue required as left operand of assignment
   17 |  function(x) = 15; //Passing value by reference
      |                ^~
*/
