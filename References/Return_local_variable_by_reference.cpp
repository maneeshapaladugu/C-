/* Program to demostrate that, returning a reference to local variable leads to crash.
 *
 * Similar to return by address, values returned by reference must be variables 
 * You should not return a reference to a literal or an expression that resolves to a temporary value
 * As they will go out of scope at the end of the function and you’ll end up returning a dangling reference
 * When a variable is returned by reference, a reference to the variable is passed back to the caller
 * The caller can then use this reference to continue modifying the variable
 *
*/

#include<iostream>
using namespace std;

int& function_1()
{
	static int x = 10;
	return x;
}//'x' will not get destroyed here

int& function_2()
{
	int y = 10;
	return y; //returning a reference to local variable that will be destroyed when function returns back to the caller
}//'y' gets destroyed here

int main()
{
	int x = function_1();
	cout << "x: " << x << endl;
	
	int y = function_2(); //As a reference to garbage was returned, program will crash
	cout << "y: " << y << endl;
}



/*On Compilation:
ReferenceTest_2.cpp: In function ‘int& function_2()’:
ReferenceTest_2.cpp:13:9: warning: reference to local variable ‘y’ returned [-Wreturn-local-addr]
   13 |  return y;
      |         ^
ReferenceTest_2.cpp:12:6: note: declared here
   12 |  int y = 10;
      |      ^
*/

/*Output:
x: 10
Segmentation fault (core dumped)
*/
