/*Program to demonstrate swapping of 2 variables using reference*/

#include<iostream>
using namespace std;
void swap(int &p, int &q); // Function prototype or function declaration
int main()
{
	int x = 10, y = 20;
	cout << "Before swapping: " << "x: " << x << " " << "y: " << y << endl;	
	swap(x,y);
	cout << "After swapping: " << "x: " << x << " " << "y: " << y << endl;	
}

void swap(int &p, int &q) // Function definition
{
	int temp;
	temp = p;
	p = q;
	q = temp;
}
