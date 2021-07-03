/*Program to illustrate virtual function*/

/*In a Runtime polymorphism, functions are called at the time of program execution. Hence, it is known as late binding or dynamic binding.*/

/*A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. */

/* Basically, a virtual function is used in the base class in order to ensure that the function is overridden. 
This especially applies to cases where a pointer of base class points to an object of a derived class.
*/

#include<iostream>
using namespace std;

class base
{
public:
	virtual void print()
	{
		cout << "Base class print function" << endl;
	}
	void show()
	{
		cout << "Base class show function" << endl;
	}
};

class derived:public base
{
public:
	void print()
	{
		cout << "Derived class print function" << endl;
	}
	void show()
	{
		cout << "Derived class show function" << endl;
	}
};

int main()
{
	base *b_ptr;
	derived d_obj;		
	b_ptr = &d_obj; // Base class pointer pointing to derived class object  
	
	b_ptr->print();	//Virtual function binded at run time
	b_ptr->show();  //Non-virtual function, binded at compile time
}



/* Output:
 * Derived class print function
 * Base class show function
 * /
