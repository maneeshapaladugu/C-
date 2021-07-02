/*Program to demostrate that, returning a reference to constant literal leads to crash*/

#include<iostream>
using namespace std;

const int& function()
{
	cout << "Inside function" << endl;
	return 10; //returning a reference to constant literal which goes out of scope when function is returned back to the caller
}

int main()
{
	cout << endl << "Before calling the function" << endl;
	
	int x = function(); // As a reference to garbage was returned, program will crash here
	
	cout << "x: " << x << endl;
	
}

/*On compilation with 'const' keyword - const int& function():
ReferenceTest_5.cpp: In function ‘const int& function_1()’:
ReferenceTest_5.cpp:8:9: warning: returning reference to temporary [-Wreturn-local-addr]
    8 |  return 10; //returning a reference to constant literal which goes out of scope when function is returned back to the caller
      |         ^~
*/

/*Output:
*
Before calling the function
Inside function
Segmentation fault (core dumped)
*
*/




/*Error on compilation without 'const' keyword - int& function(): 
ReferenceTest_5.cpp: In function ‘int& function()’:
ReferenceTest_5.cpp:9:9: error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
    9 |  return 10; //returning a reference to constant literal which goes out of scope when function is returned back to the caller
      |    
*/
