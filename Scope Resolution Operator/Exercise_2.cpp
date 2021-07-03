// C++ program to show that scope resolution operator :: is used to define a function outside a class

#include<iostream>
using namespace std;

class A
{
	public:
	void function(); // declaration
};

//Definition outside class using :: 
void A::function()
{
	cout << "function()" << endl;
}

int main()
{
	A a;
	a.function();
	return 0;
}

/*Output:
 *function
 */
