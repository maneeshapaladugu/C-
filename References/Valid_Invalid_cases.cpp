/*Program to understand the valid and invalid cases of reference*/

#include<iostream>
using namespace std;

int main()
{
	/*Case 1: Non-constant reference = Non-constant variable*/
	int p = 10;
	int &ref1 = p;  //Valid
	
	cout << "Non-constant reference = Non-constant variable:" << endl;
	cout << "p: " << p << " " << "&p: " << &p << endl << "ref1: " << ref1 << " " << "&ref1: " << &ref1 << endl;
	cout << endl;

	/*Case 2: Constant reference = Non-constant variable*/
	int q = 10;
	const int &ref2 = q;  //Valid

	cout << "Constant reference = Non-constant variable:" << endl;
	cout << "q: " << q << " " << "&q: " << &q << endl << "ref2: " << ref2 << " " << "&ref2: " << &ref2 << endl;
	cout << endl;

	/*Case 3: Constant reference = Constant variable or constant value*/
	const int r = 10;
	const int &ref3 = r;  //Valid

	cout << "Constant reference = Constant variable or constant value:" << endl;
	cout << "r: " << r << " " << "&r: " << &r << endl << "ref3: " << ref3 << " " << "&ref3: " << &ref3 << endl;
	cout << endl;
	
	const int ref4 = 10;  //Valid
	cout << "ref4: " << ref4 << " " << "&ref4: " << &ref4 << endl;
	cout << endl;

	/*Case 4: Non-constant reference = Constant variable or constant value*/
	/*const int s = 10;
	int &ref5 = s;  //Invalid

	cout << "s: " << s << " " << "&s: " << &s << endl;
	cout << "ref5: " << ref5 << " " << "&ref5: " << &ref5 << endl;
	
	int &ref6 = 10; //Invalid
	cout << "ref6: " << ref6 << " " << "&ref6: " << &ref6 << endl;*/

	/*Case 6: Once initialized, Reference variable can not be changed or referred to another object*/
	int t = 10;
	int &ref7 = t;
	cout << "t: " << t << " " << "&t: " << &t << endl << "ref7: " << ref7 << " " << "&ref7: " << &ref7 << endl;
	cout << endl;

	int u = 20;
        ref7 = u; //Here, we did not make 'ref7' refer to 'u'. We basically changed the value of 't' to 'u' using 'ref7'
	/*Observe that, ref7 is still referring to 't' - notice the addresses of 'u','t' and 'ref7'*/
	cout << "u: " << u << " " << "&u: " << &u << endl << "ref7: " << ref7 << " " << "&ref7: " << &ref7 << endl;
	
	cout << endl << "Let us look at variable 't' and 'ref7' once again:" << endl;
	cout << "t: " << t << " " << "&t: " << &t << endl << "ref7: " << ref7 << " " << "&ref7: " << &ref7 << endl;
	cout << endl;

	/*Case 7: Reference variable must be initialized*/
	/*int v = 30;
	int &ref8;
	ref8 = v; //Invalid
	cout << "v: " << v << " " << "&v: " << &v << endl << "ref8: " << ref8 << " " << "&ref8: " << &ref8 << endl;
	cout << endl;*/
}


/*Output: for case 1,2,3,5,6:
Non-constant reference = Non-constant variable:
p: 10 &p: 0x7ffe856d5a50
ref1: 10 &ref1: 0x7ffe856d5a50

Constant reference = Non-constant variable:
q: 10 &q: 0x7ffe856d5a54
ref2: 10 &ref2: 0x7ffe856d5a54

Constant reference = Constant variable or constant value:
r: 10 &r: 0x7ffe856d5a58
ref3: 10 &ref3: 0x7ffe856d5a58

ref4: 10 &ref4: 0x7ffe856d5a5c

t: 10 &t: 0x7ffe856d5a60
ref7: 10 &ref7: 0x7ffe856d5a60

u: 20 &u: 0x7ffe856d5a64
ref7: 20 &ref7: 0x7ffe856d5a60

Let us look at variable 't' and 'ref7' once again:
t: 20 &t: 0x7ffe856d5a60
ref7: 20 &ref7: 0x7ffe856d5a60
*/

/*Output: Case 4 throws compilation error as follows:

Valid_Invalid_cases.cpp: In function ‘int main()’:
Valid_Invalid_cases.cpp:31:14: error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers
   31 |  int &ref5 = s;  //Invalid
      |              ^
Valid_Invalid_cases.cpp:35:14: error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
   35 |  int &ref6 = 10; //Invalid
      |              ^~
*/

/*Output: Case 7 throws compilation error:
Valid_Invalid_cases.cpp: In function ‘int main()’:
Valid_Invalid_cases.cpp:59:7: error: ‘ref8’ declared as reference but not initialized
   59 |  int &ref8;
      |       ^~~~
*/
