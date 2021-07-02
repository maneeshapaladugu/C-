/* In case A, we’re assigning a reference return value to a non-reference variable. Because "value" isn’t a reference, the return value is copied into "value", as if returnByReference() had returned by value.
*
* 
*In case B, we’re trying to initialize non-const reference "reference" with the copy of the return value returned by returnByValue(). However, because the value being returned doesn’t have an address (it’s an r-value), this will cause a compile error.
*
*
* In case C, we’re trying to initialize const reference "constReference" with the copy of the return value returned by returnByValue(). Because const references can bind to r-values, there’s no problem here. Normally, r-values expire at the end of the expression in which they are created -- however, when bound to a const reference, the lifetime of the r-value (in this case, the return value of the function) is extended to match the lifetime of the reference (in this case, "constReference")
* 
* 
* In case D, return_Const_By_Reference() is returning a const reference to a value that will go out of scope when the function ends. This is normally a no-no, as it will result in a dangling reference. However, we also know that assigning a value to a const reference can extend the lifetime of that value. So which takes precedence here? Does 5 go out of scope first, or does ref extend the lifetime of 5?

The answer is that 5 goes out of scope first, then the reference to 5 is copied back to the caller, and then "constRef" extends the lifetime of the dangling reference which leads to crash
*/

#include<iostream>
using namespace std;

int returnByValue()
{
	return 5;
}

const int& returnByReference()
{
	static int x{5}; // static ensures x is not destroyed when the function ends
	return x;
}

const int& return_Const_By_Reference()
{
	return 5;
}

int main()
{
	int value = returnByReference(); 			// Case A: treated as return by value

	//int& reference = returnByValue();   			// Case B: Compiler error since the value is an r-value and an r-value can not be bind to a non-const reference
	
	const int& constReference = returnByValue(); 		// Case C: Lifetime of return value is extended to the lifetime of constReference

	//const int& constRef = return_Const_By_Reference(); 	// Case D: Runtime error - Segmentation fault

	cout <<"value: " << value << endl;
        cout << "constReference: " << constReference << endl;
	//cout << "constRef: " << constRef << endl; // which leads to crash when constRef is used
	
	return 0;	
}


/* compilation output resultant of case B (error) and case D (warning):
Mix_return_reference_and_values.cpp: In function ‘const int& returnBy_Const_Reference()’:
Mix_return_reference_and_values.cpp:27:9: warning: returning reference to temporary [-Wreturn-local-addr]
   27 |  return 5;
      |         ^
Mix_return_reference_and_values.cpp: In function ‘int main()’:
Mix_return_reference_and_values.cpp:33:32: error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
   33 |  int& reference = returnByValue();      // Case B: Compiler error since the value is an r-value and an r-value can not be bind to a non-const reference
      |                   ~~~~~~~~~~~~~^~
*/


/*Output of Case A and Case C:
value: 5
constReference: 5
*/


/*Output with Case D:
value: 5
constReference: 5
Segmentation fault (core dumped)
*/
