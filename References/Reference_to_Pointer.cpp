/*Program to demonstrate the reference to pointer*/

#include<iostream>
using namespace std;

int main()
{
	int x = 10, y =20;
	int *pointer = &x; //pointer to variable

	int *&reference = pointer; //reference to pointer

	cout << "x: " << x << " " << "&x :" << &x << endl;
	cout << "y: " << y << " " << "&y :" << &y << endl;
	cout << "*pointer: " << *pointer << " " << "pointer: " << pointer << endl;
	cout << "*reference: " << *reference << " " << "reference: " << reference << endl;
	cout << endl;

	reference = &y; //Changing the 'pointer' point to address of 'y'
	
	cout << "x: " << x << " " << "&x :" << &x << endl;
	cout << "y: " << y << " " << "&y :" << &y << endl;
	cout << "*pointer: " << *pointer << " " << "pointer: " << pointer << endl;
	cout << "*reference: " << *reference << " " << "reference: " << reference << endl;
}


/*Output:

x: 10 &x :0x7fff7d2c0200
y: 20 &y :0x7fff7d2c0204
*pointer: 10 pointer: 0x7fff7d2c0200
*reference: 10 reference: 0x7fff7d2c0200

x: 10 &x :0x7fff7d2c0200
y: 20 &y :0x7fff7d2c0204
*pointer: 20 pointer: 0x7fff7d2c0204
*reference: 20 reference: 0x7fff7d2c0204

*/
