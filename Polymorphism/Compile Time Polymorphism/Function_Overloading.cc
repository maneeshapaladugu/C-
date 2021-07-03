/*Program to illustrate Function overloading*/

/* Polymorphism in C++ means, the same entity ( function or object ) behaves differently in different scenarios.
 *
 * In compile-time polymorphism, a function is called at the time of program compilation. We call this type of polymorphism as early binding or Static binding.
 *
 * Function Overloading: When there are multiple functions with same name but different parameters then these functions are said to be overloaded. Functions can be overloaded by change in number of arguments or/and change in type of arguments.
 */

#include<iostream>
using namespace std;

class Overloader
{
	public:
	//funtion with 1 parameter
	void function(int x) 
	{
		cout << "function 1: value of x is: " << x << endl;
	}

	//function with same name but 1 double parameter 
	void function(double x)
	{
		cout << "function 2: value of x is: " << x << endl;
	}

	//function with same name and 2 int parameters
	void function(int x, int y)
	{
		cout << "function 3: value of x and y is: " << x << "," << y << endl;
	}	
};

int main()
{
	Overloader object;

	//Which function is called depends on parameters passed
	object.function(7);

	object.function(9.132);

	object.function(85,64);
	
	return 0;
}

/*Output:
 * function 1: value of x is: 7
function 2: value of x is: 9.132
function 3: value of x and y is: 85,64
*/
