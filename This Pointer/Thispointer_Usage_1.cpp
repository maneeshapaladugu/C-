/*Following are the situations where 'this' pointer is used:
 * 1. When local variable's name is same as member's name
 * 2. To return reference to the calling object
 */

/*Local variable name is same as data member's name*/

#include<iostream>
using namespace std;

class Test
{
private:
	int x;
public:
	void setX(int x)
	{
		//'this' pointer is used to retrieve the object's x 
		//hidden by the local variable x
		this->x = x;			
	}
	void print()
	{
		cout << "x:" << x << endl;
	}
};
int main()
{
	Test obj;
	int var = 20;
	obj.setX(var);
	obj.print();
	return 0;
}

