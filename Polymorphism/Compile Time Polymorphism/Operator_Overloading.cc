/*Program to illustrate Operator Overloading*/

/*Polymorphism in C++ means, the same entity ( function or object ) behaves differently in different scenarios.
 *
 *
 *In compile-time polymorphism, a function is called at the time of program compilation. We call this type of polymorphism as early binding or Static binding.
 *
 *
 * Operator overloading means defining additional tasks to operators without changing its actual meaning. We do this by using operator function.

The purpose of operator overloading is to provide a special meaning to the user-defined data types.

The advantage of Operators overloading is to perform different operations on the same operand.
*/

#include<iostream>
using namespace std;

class Overloader
{
	string x;
	
	public:
	Overloader()
	{
	}
	Overloader(string str)
	{
		x = str;
	}
	
	Overloader operator+(Overloader);
	void display();
};

// This is automatically called when '+' is used between two "Overloader" objects
Overloader Overloader::operator+(Overloader ovr_ldr)
{
	Overloader obj;
	obj.x = x + ovr_ldr.x;
	return obj;
}
void Overloader::display()
{
	cout << "The result of addition of two objects is: " << x << endl;
}

int main()
{
	Overloader Object_1("Welcome");
	Overloader Object_2("back");
	Overloader Object_3 = Object_1 + Object_2; // An example call to "operator+"

	Object_3.display();
		
	return 0;
}

/*Output:
* The result of addition of two objects is: Welcomeback
*/
