/*Exercise 4: C++ program to show that, deleting this pointer results in abnormal program termination. 
 * C++ lets object destroy themselves by calling: 
 * delete this;
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
	void setX(int a) 
	{
		x = a;
	}
	void setY(int b) 
	{
		y = b;
	}
	void destroy()
	{
		delete this;
	}
	void print()
	{
		cout << "x:" << x << endl << "y:" << y << endl;
	}
};

int main()
{
	Test obj(5,5);
 	
	obj.destroy(); //Output: munmap_chunk(): invalid pointer Aborted (core dumped)
	
	obj.print();
	return 0;
}

