/*Program to demonstrate the reference to Array*/

#include<iostream>
using namespace std;

int main()
{
	int i;
	int array[]{10,20,30,40,50};

	int (&reference)[5] = array;

	for(i=0; i<5; i++)
	{
		cout << "reference[" << i << "]: " << reference[i] << endl;
	}

	cout << endl << "array: " << array << " " << "array+1: " << array+1 << " " << "&array+1: " << &array+1 << endl;
	cout << "array: " << array << " " << "array+1: " << array+1 << " " << "array+2: " << array+2 << " " << "array+3: " << array+3 << " " << "array+4: " << array+4 <<endl;
	cout << "reference: " << reference << " " << "reference+1" << reference+1 << " " << "&reference+1" << &reference+1 << endl;
	
}


/*Output:

reference[0]: 10
reference[1]: 20
reference[2]: 30
reference[3]: 40
reference[4]: 50

array: 0x7ffddc58f2e0 array+1: 0x7ffddc58f2e4 &array+1: 0x7ffddc58f2f4
array: 0x7ffddc58f2e0 array+1: 0x7ffddc58f2e4 array+2: 0x7ffddc58f2e8 array+3: 0x7ffddc58f2ec array+4: 0x7ffddc58f2f0
reference: 0x7ffddc58f2e0 reference+10x7ffddc58f2e4 &reference+10x7ffddc58f2f4

*/
