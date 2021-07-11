/*Program to demonstrate conversion from string to number*/

#include<iostream>
#include<string> // for string
#include<boost/lexical_cast.hpp> // for lexical_cast
#include<sstream> // for stringstream
using namespace std;

//Method 1: Using Boost Lexical_cast
//Boost library offers an inbuild function “lexical_cast(“string”)”, which directly converts a string to number. 
//It returns an exception “bad_lexical_cast” in case of invalid input.
void ConversionUsingLexicalCast()
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
}

//Method 2: Using string stream
/* A stringstream is similar to input/output file stream. We need to declare a stringstrea just like an fstream
for example: 
	stringstream ss;
	ss << myString;  // like an fstream or cout, we can write to it
	ss >> myChar; // and we can read from it*/
void ConversionUsingStringStream()
{
	string str = "12345";
	int x = 0;
	
	//Object of class stringstream
	stringstream ss(str);

	//The object has the value 12345 and stream it to the integer x
	ss >> x;

	//Now the variable x holds the value 12345
	cout << "Value of x: " << x << endl;
}

//Method 3: Using sscanf() function
//sscanf() is a C style function similar to scanf(). It reads input from a string rather that standard input. 
void sscanfFunction()
{
	const char *str = "12345";
	int x;
	sscanf(str,"%d", &x);
	printf("The value of x is: %d\n",x);
}

//Method 4: Using stoi() function
//stoi() : The stoi() function takes a string as an argument and returns its value.
void ConversionUsingstoi()
{
	string str1 = "45";
	string str2 = "3.14159";
	string str3 = "31337 string";

	int int1 = stoi(str1);
	int int2 = stoi(str2);
	int int3 = stoi(str3);

	cout << "stoi(\"" << str1 << "\") is: " << int1 << endl;
	cout << "stoi(\"" << str2 << "\") is: " << int2 << endl;
	cout << "stoi(\"" << str3 << "\") is: " << int3 << endl;
}

//Method 5: Using atoi() function
//atoi() : The atoi() function takes a character array or string literal as an argument and returns its value.
void ConversionUsingatoi()
{
	const char* str1 = "45";
	const char* str2 = "3.14159";
	const char* str3 = "31337 string";

	int int1 = atoi(str1);
	int int2 = atoi(str2);
	int int3 = atoi(str3);

	cout << "atoi(\"" << str1 << "\") is: " << int1 << endl;
	cout << "atoi(\"" << str2 << "\") is: " << int2 << endl;
	cout << "atoi(\"" << str3 << "\") is: " << int3 << endl;

}

int main()
{
	//Conversion from string to float/int using boost Lexical_cast
	ConversionUsingLexicalCast();

	//Conversion from string to int/float using string stream
	ConversionUsingStringStream();

	//Conversion from string to int using sscanf function
	sscanfFunction();

	//Conversion from string to int using stoi()
	ConversionUsingstoi();
	
	//Conversion from string to int using atoi()
	ConversionUsingatoi();

	return 0;
}


/*Output:
The int value after casting is: 5
The float value after casting is: 6.5
Value of x: 12345
The value of x is: 12345
stoi("45") is: 45
stoi("3.14159") is: 3
stoi("31337 string") is: 31337
atoi("45") is: 45
atoi("3.14159") is: 3
atoi("31337 string") is: 31337
*/
