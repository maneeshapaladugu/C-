/*Program to demonstrate working of lexical_cast()*/

/*Conversion from string to float/int*/
#include<iostream>
#include<string> // for string
#include<boost/lexical_cast.hpp> // for lexical_cast

using namespace std;
int main()
{
	string str1 = "5";
	string str2 = "6.5";

	//Initializing i_value with casted int
	int i_value = boost::lexical_cast<int>(str1);
	
	//Initializing f_value with casted float
	float f_value = boost::lexical_cast<float>(str2);

	//Displaying casted values
	cout << "The int value after casting is: " << i_value << endl;
	cout << "The float value after casting is: " << f_value << endl;

	return 0;
}


/*Output:
 The int value after casting is: 5
The float value after casting is: 6.5
*/
