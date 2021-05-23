/*Exercise 3: C++ program to show that Chained function calls are not achieved when an object reference/pointer is not returned by a function
 */

#include<iostream>
using namespace std;

class Test
{
private:
	int x;
	int y;
public:
	Test(int x=0, int y =0) // Parameterized constructor
	{
		this->x = x;
		this->y = y;
	}
	Test setX(int a) // return type is not reference/pointer
	{
		x = a;
		return *this;
	}
	Test setY(int b) //return type is not reference/pointer
	{
		y = b;
		return *this;
	}
	void print()
	{
		cout << "x:" << x << endl << "y:" << y << endl;
	}
};

int main()
{
	Test obj(5,5);
	//Chaining function calls
	obj.setX(10).setY(20); // As the object reference is not returned by setX, Output is x:10 y=5
	obj.print();
	return 0;
}

