/*Program to demonstrate the transform() function*/

/*
1. transform : Performs a transformation on given array/string.
2. toupper(int c) : Returns upper case version of character c. If c is already in uppercase, return c itself.
3. tolower(int c) : Returns lower case version of character c. If c is already in lowercase, return c itself.

4. transform() in C++ is used in two forms: 

i) Unary Operation : Applies a unary operator on input to convert into output 
transform(Iterator inputBegin, Iterator inputEnd, Iterator OutputBegin, unary_operation) 

ii)inary Operation : Applies a binary operator on input to convert into output 
transform(Iterator inputBegin1, Iterator inputEnd1, Iterator inputBegin2, Iterator OutputBegin, binary_operation) 
*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//Adding contents of two arrays in to third array without transform()
void addingContents_without_transform()
{
	int array1[] = {10,20,30};
	int array2[] = {20,30,40};
	int n = sizeof(array1) / sizeof(array1[0]);
	int result[n];
	
	//Adding arrays
	for(int i=0; i<n; i++)
		result[i] = array1[i] + array2[i];
	cout << "Adding contents of array without using transform function: ";
	for(int i=0; i<n; i++)
		cout << result[i] << " ";

	cout << endl;
}

//Adding contents of two arrays in to third array with transform()
void addingContents_with_transform()
{
	int array1[] = {10,20,30};
	int array2[] = {20,30,40};
	int n = sizeof(array1) / sizeof(array1[0]);
	int result[n];

	//Single line code to add array1[] and array2[]. Store result in result[]
	transform(array1, array1+n, array2, result, plus<int>());
	
	cout << "Adding contents of array using transform function: ";

	for(int i=0; i<n; i++)
		cout << result[i] << " ";
	cout << endl;
}

//Increment elements of array using transform()
int increment(int x) 
{
	return (x+1);
}
void incrementArrayUsingTransform()
{
	int array[] = {1,2,3,4,5};
	int n = sizeof(array) / sizeof(array[0]);

	//Apply incre,ent to all elements of array[] and store the modified elements back to array[]
	transform(array, array+n, array, increment);

	cout << "Increment elements of array using transform function: ";
	for(int i=0; i<n; i++)
		cout << array[i] << " ";
	cout << endl;
}

void StringConversionUsing_toupper_tolower()
{
	//str_upper is the string which is converted to uppercase
	string str_upper = "Transform Function";

	//using transform() function and ::toupper in STL
	transform(str_upper.begin(), str_upper.end(), str_upper.begin(), ::toupper);
	cout << "using transform() function and ::toupper: " << str_upper << endl;

	//str_lower is the string which is converted to lowercase
	string str_lower = "Transform Function";

	//using transform() function and ::tolower in STL
	transform(str_lower.begin(), str_lower.end(), str_lower.begin(), ::tolower);
	cout << "using transform() function and ::tolower: " << str_lower << endl;
}

int main()
{
	addingContents_without_transform();
	addingContents_with_transform();
	incrementArrayUsingTransform();
	StringConversionUsing_toupper_tolower();

	return 0;
}

/*Output:
Adding contents of array without using transform function: 30 50 70
Adding contents of array using transform function: 30 50 70
Increment elements of array using transform function: 2 3 4 5 6
using transform() function and ::toupper: TRANSFORM FUNCTION
using transform() function and ::tolower: transform function
*/
