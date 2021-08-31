#include<iostream>
using namespace std;

int main()
{
	int x= 10;
	int *p = &x;
	cout<< "x: " << x << endl << "&x: " << &x <<endl << "p: " << p << endl << "&p: " << &p << endl << "*p: " << *p << endl;
	
	int &r = *p;
	
	cout << "r: " << r << endl << "&r: " << &r << endl;

	return 0;
}

/*Output:
 *
 * x: 10
&x: 0x7ffd43ed3424
p: 0x7ffd43ed3424
&p: 0x7ffd43ed3428
*p: 10
r: 10
&r: 0x7ffd43ed3424
*/
