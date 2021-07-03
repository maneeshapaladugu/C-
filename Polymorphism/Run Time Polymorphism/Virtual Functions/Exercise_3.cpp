/*Program to illustrate virtual function*/

/* A virtual function is a member function in the base class that we expect to redefine in derived classes.
Basically, a virtual function is used in the base class in order to ensure that the function is overridden. 
This especially applies to cases where a pointer of base class points to an object of a derived class.
*/

#include<iostream>
using namespace std;

class Shape //Base class
{
protected:
	int length;
	int width;
public:
	Shape(int len, int wid) 
	{
		length = len;
		width = wid;
	}
	virtual int get_Area()
	{
		cout << "This is call to parent class Area" << endl;
		return 0;
	}
};

class Square : public Shape //Derived class
{
public:
	Square(int len = 0, int wid = 0) : Shape(len,wid) 
	{
	}
	int get_Area()
	{
		cout << "Square Area: " << length * width << endl;
		return (length * width);
	}
};


class Rectangle : public Shape //Derived class
{
public:
	Rectangle(int len = 0, int wid = 0) : Shape(len,wid) 
	{
	}
	int get_Area()
	{
		cout << "Rectangle Area: " << length * width << endl;
		return (length * width);
	}
};

int main()
{
	Shape *shape_ptr;
	Square square_obj(5,5); // Creating object of child class Square 
	Rectangle rectangle_obj(4,5); // Creating object of child class Rectangle

	shape_ptr = &square_obj;
	shape_ptr->get_Area();
	
	shape_ptr = &rectangle_obj;
	shape_ptr->get_Area();

	return 0;
}


/* Output:
 * Square Area: 25
 * Rectangle Area: 20
 */
