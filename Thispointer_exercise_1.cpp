/*Exercise 1: C++ program to show that 'this' pointer is not modifiable
 *This is not modifiable (This in C++ is an r-value)
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
	/*void change(Test *t)
	{
		// Throws compilation error: lvalue required as left operand of assignment
		this = t;

	}*/
	void print()
	{
		cout << "x:" << x << endl;
	}
};
int main()
{
	Test obj(5);

	Test *ptr = new Test(10);
	//obj.change(ptr); 
	obj.print();
	return 0;
}

