/*Program to demonstrate the conversion of number into string*/

#include<iostream>
#include<string> //for string and to_string()
#include<sstream> //for string stream
#include<boost/lexical_cast.hpp> //for lexical_cast()
using namespace std;

/*Method 1 : Using string streams
In this method, string stream declares a stream object which first inserts a number, as a stream into object and then uses “str()” to follow internal conversion of number to string.*/
void conversionUsingStringstream(int i_val)
{
	//declaring string stream
	stringstream s_stream;

	//Sending a number as a stream into object
	s_stream << i_val;

	//the str() function converts number into string
	string new_str = s_stream.str();

	//Displaying the string
	cout << "The newly formed string from number is: " << new_str << endl << endl;

}

/*Method 2 : Using to_string()
This function accepts a number(can be any data type) and returns the number in the desired string.*/
void ConversionUsingto_string(int i_val, float f_val)
{

	//Conersion of int into string using to_string()
	string str_i = to_string(i_val);
	
	//Conersion of float into string using to_string()
	string str_f = to_string(f_val);
	
	//Displaying the converted strings
	cout << "The integer in string is: " << str_i << endl;
	cout << "The float in string is: " << str_f << endl << endl;
}

/*Method 3 : Using boost lexical cast
Here, Boost library offers an inbuild function “lexical_cast(number)”, which directly converts a number to string. It returns an exception “bad_lexical_cast” in case of invalid input.*/
void ConversionUsingBoostLexicalCast(int i_val, float f_val)
{
	//converting int to string
	string str_i = boost::lexical_cast<string>(i_val);
	
	//converting float to string
	string str_f = boost::lexical_cast<string>(f_val);
	
	//Displaying the converted strings
	cout << "The integer in string is: " << str_i << endl;
	cout << "The float in string is: " << str_f << endl;
}

int main()
{
	int i_val = 2016;
	float f_val = 30.50;
	
	//Converting number using string stream
	conversionUsingStringstream(i_val);
	
	//Converting number using to_string()
	ConversionUsingto_string(i_val, f_val);

	//Conversion using boost lexical cast
	ConversionUsingBoostLexicalCast(i_val, f_val);

	float f = 10.235;
	string s = "78.495";

	float new_f = boost::lexical_cast<float>(s);
	string new_s = boost::lexical_cast<string>(f);
	
	cout << endl << "new_f: " << new_f << endl;
	cout << "new_s " << new_s << endl;
	//int x = boost::lexical_cast<int>(f); // returns bad_lexical_cast exception
}



/*Output:
The newly formed string from number is: 2016

The integer in string is: 2016
The float in string is: 30.500000

The integer in string is: 2016
The float in string is: 30.5

new_f: 78.495
new_s 10.2349997
terminate called after throwing an instance of 'boost::wrapexcept<boost::bad_lexical_cast>'
  what():  bad lexical cast: source type value could not be interpreted as target
Aborted (core dumped)

*/
