/*Program to illustrate pure virtual function*/

/*When the function has no definition, we call such functions as “Do-nothing function or Pure virtual function”. The declaration of this function happens in the base class with no definition.*/

#include<iostream>
using namespace std;

class Animal
{
	public:
	virtual void show() = 0; // Pure virtual function declaration
};

class Human : public Animal
{
	public:
	void show()
	{
		cout << "Human" << endl;
	}
};

int main()
{
	Animal *animal_ptr; // Base class pointer
	Human human_object;

	animal_ptr = &human_object;
	animal_ptr->show();

	return 0;	
}

/*Output:
 * Human
 */
