// C++ program to show that :: can be used to access static/non-static members when there is a local variable with same name

#include<iostream>
using namespace std;

class Test
{
	static int x;
	int y = 10;
	public:
	static int z;

	// Local parameter 'x' and 'y' hides class member 'x' and 'y', but we can access it using ::
	void function(int x, int y)
	{
		cout << "Value of static member x is " << Test::x << endl;
		cout << "Value of non-static member y is " << Test::y << endl;
		cout << "Value of local x is " << x << endl;
		cout << "Value of local y is " << y << endl;
	}
};

// In C++, static members must be explicitly defined 
int Test::x = 1;
int Test::z = 2;

int main()
{
	Test object;
	
	int x = 3;
	int y = 4;
	object.function(x,y);

	cout << "Test::z = " << Test::z << endl;
	
	return 0;
}


/*Output:
Value of static member x is 1
Value of non-static member y is 10
Value of local x is 3
Value of local y is 4
Test::z = 2
*/
