/*Program to return reference to array index element*/
/*Return by reference is typically used to return arguments passed by reference to the function back to the caller*/

#include<iostream>
#include<array>
using namespace std;

// Returns a reference to the index element of an array
int& getElement(std::array<int, 15>& array, int index)
{
	//We know that array[index] will not be destroyed when we return to the caller (since the caller passed the array to this function)
	//so it is okay to return it by reference 
	return array[index];
}

int main()
{
	std::array<int, 15> array;

	//Sets the 10th index of array with value 5
	getElement(array,10) = 5;
	std::cout << "array[10]: "<< array[10] << '\n';
}


/*Output:
 * array[10]: 5
*/
