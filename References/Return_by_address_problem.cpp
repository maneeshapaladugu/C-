/*Program to demonstrate the problem with return by address*/

#include<iostream>
using namespace std;

int* multiplyValue(int x)
{
	int value{x*2};
	return &value; // Returning value by address
}// Variable value is destroyed here

int main()
{
	int *ptr = multiplyValue(2);
	cout << "*ptr: " << *ptr << endl;
}



/* Output:
compilation warning:
Return_by_address.cpp: In function ‘int* multiplyValue(int)’:
Return_by_address.cpp:9:9: warning: address of local variable ‘value’ returned [-Wreturn-local-addr]
    9 |  return &value; // Returning value by address
      |         ^~~~~~
Return_by_address.cpp:8:6: note: declared here
    8 |  int value{x*2};
      |      ^~~~~

Executing binary ./a.out :
Segmentation fault (core dumped)
*/
