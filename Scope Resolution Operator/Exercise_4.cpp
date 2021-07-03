/*In case of multiple inheritanceIf same variable name exists in two ancestor classes, we can use scope resolution operator to distinguish.*/

#include <iostream>
using namespace std;

class base_1
{
	protected:
	int x;
	public:
	base_1() 
	{
		x = 10;
	}
};

class base_2
{
	protected:
	int x;
	public:
	base_2()
	{
		x = 20;
	}
};

class derived : public base_1, public base_2
{
	public:
	void function()
	{
		cout << "x of class base_1: " << base_1::x << endl;
		cout << "x of class base_2: " << base_2::x << endl;
	}
};

int main()
{
	derived object;
	object.function();

	return 0;
}


/*Output:
x of class base_1: 10
x of class base_2: 20
*/
