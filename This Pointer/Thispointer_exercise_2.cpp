/*Exercise 2: C++ program to show that 'this' pointer is not available for static member functions
 *because, static member functions can be called without any object (with class name)
 *and static member functions are part of class but not part of object
 */

#include<iostream>
using namespace std;

class Test
{
private:
	int x;
public:
	Test(int x=0) // Parameterized constructor
	{
		this->x = x;
	}
	static void function1()
	{
		cout << "Inside function1()";
	}
	static void function2()
	{
		cout << "Inside function2()";
		this->function1();
	}
};

int main()
{
	Test obj(5);

	obj.function1(); // No error
	obj.function2(); // Throws compilation error ‘this’ is unavailable for static member functions
	return 0;
}

