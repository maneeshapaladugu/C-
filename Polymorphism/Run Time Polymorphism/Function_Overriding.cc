/*Program to illustrate Function overriding*/


/*Polymorphism in C++ means, the same entity ( function or object ) behaves differently in different scenarios.
 *
 *
 *In a Runtime polymorphism, functions are called at the time the program execution. Hence, it is known as late binding or dynamic binding. 
 *
 * Function overriding is a part of runtime polymorphism. In function overriding, more than one method has the same name with different types of the parameter list.

 *In function overriding, we give the new definition to base class function in the derived class. At that time, we can say the base function has been overridden.
 It can be only possible in the ‘derived class’. In function overriding, we have two definitions of the same function, one in the superclass and one in the derived class.
 The decision about which function definition requires calling happens at runtime.
*/


#include<iostream>
using namespace std;
class Animal
{
	public:
	void function()
	{
		cout << "Animal..." << endl;
	}
};

class Human: public Animal
{
	public:
	void function()
	{
		cout << "Human..." << endl;
	}
};

int main()
{
	Animal A = Animal();
	A.function(); // Parent class object
	Human m = Human(); 
	m.function(); // Child class object

	return 0;
}

/*Output:
 * Animal...
 * Human...
*/
