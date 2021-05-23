/*Following are the situations where 'this' pointer is used:
 * 1. When local variable's name is same as member's name
 * 2. To return reference to the calling object
 */

/*Program to return reference to the calling object*/

#include<iostream>
using namespace std;

class Test
{
private:
	int x;
	int y;
public:
	Test(int x = 0,int y = 0) //Parameterized constructor
	{
		this->x = x;
		this->y = y;
	}
	Test &setX(int a) //returning reference         //Test* setX(int a) { x = a; return this; } //returning pointer
	{
		x = a; // Set data member x
		return *this;
	}
	Test &setY(int b) //returning reference         //Test* setY(int b) { y = b; return this; } //returning pointer
	{
		y = b; // Set data member y
		return *this;
	}
	void print() // Print x and y data
	{
		cout << "x:" << x << endl << "y:" << y << endl;
	}
};

int main()
{
	Test obj(5,5);

	// Chained function calls. All calls modify the same object 
	// as the same object is returned by reference
	obj.setX(10).setY(20);
	obj.print();

	/*Test *ob = new Test(5,5);
	 * ob->setX(10)->setY(20); //when a pointer was returned
	 * ob.print();*/
	return 0;
}

