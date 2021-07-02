/*Program to return dynamically allocated memory to the caller*/
/*Return by address was often used to return dynamically allocated memory to the caller*/

#include<iostream>
using namespace std;

int* allocateArray(int size) // Return by address
{
	return new int[size];
}
int main()
{
	int *array{allocateArray(25)};

	delete []array;
	return 0;
}
