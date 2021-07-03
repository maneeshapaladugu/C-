/*Program to illustrate virtual function*/

/* A virtual function is a member function in the base class that we expect to redefine in derived classes.
Basically, a virtual function is used in the base class in order to ensure that the function is overridden.
This especially applies to cases where a pointer of base class points to an object of a derived class.
*/

#include<iostream>
using namespace std;

class Base 
{
public:
	void function_1() 
	{
		cout << "Base 1" << endl;
	}
	virtual void function_2() 
	{
		cout << "Base 2" << endl;
	}
	virtual void function_3() 
	{
		cout << "Base 3" << endl;
	}
	virtual void function_4() 
	{
		cout << "Base 4" << endl;
	}
};

class Derived : public Base
{
public:
	void function_1()
	{
		cout << "Derived 1" << endl;
	}
	void function_2()
	{
		cout << "Derived 2" << endl;
	}
	void function_4(int x) //Derived class function_4 has a parameter
	{
		cout << "Derived 4" << endl;
	}
};

int main()
{
	Base *b_ptr;
	Derived d_obj;
	b_ptr = &d_obj;

	b_ptr->function_1();  //Early binding because function_1 is non-virtual in base
	b_ptr->function_2();  //Late binding - Run Time Polymorphism
	b_ptr->function_3();  //Late binding - Run Time Polymorphism
	b_ptr->function_4();  //Late binding - Run Time Polymorphism

	//Error case
	//b_ptr->function_4(5); //Early binding but this function call produces error because pointer is of base class type and function is of derived class 

}

/* Output:
 * Base 1
 * Derived 2
 * Base 3
 * Base 4
 */



/* Output of Error case:
 * Exercise_2.cpp: In function ‘int main()’:
Exercise_2.cpp:55:21: error: no matching function for call to ‘Base::function_4(int)’
   55 |  b_ptr->function_4(5); //Early binding but this function call produces error because pointer is of base class type and function is of derived class
      |                     ^
Exercise_2.cpp:21:15: note: candidate: ‘virtual void Base::function_4()’
   21 |  virtual void function_4()
      |               ^~~~~~~~~~
Exercise_2.cpp:21:15: note:   candidate expects 0 arguments, 1 provided
 */
