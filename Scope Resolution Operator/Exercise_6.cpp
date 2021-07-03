/*Refer to a class inside another class:
If a class exists inside another class we can use the nesting class to refer the nested class using the scope resolution operator*/

#include<iostream>
using namespace std;

class outside
{
	public:
	int x = 10;

	class inside
	{
		public:
		int x = 20;
		static int y;
		int function()
		{
			cout << "Called outside::inside::function" << endl;

			return 0;
		}
	};
};

int outside::inside::y = 5;

int main()
{
	outside object1;
	outside::inside object2;

	object2.function();
	cout << "object1.x: " << object1.x << endl;
	cout << "object2.x: " << object2.x << endl;
	cout << "outside::inside::y: " << outside::inside::y << endl;

	return 0;
}


/*Output:
Called outside::inside::function
object1.x: 10
object2.x: 20
outside::inside::y: 5
*/
