/*C++ program to demonstrate various function string class*/

#include<iostream>
using namespace std;

int main()
{
	//Various constructor of string class
	//initialization by raw string
	string str1("first string");

	//initialization by another string
	string str2(str1);

	//initialization by character with number of occurrence
	string str3(5, '#');

	//initialization by part of another string
	string str4(str1, 6 , 6); //from 6th index(second parameter) 
				  // 6 characters (third parameter)

	//initialization by part of another string : iterator version
	string str5(str2.begin(), str2.begin()+5);

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	
	//Assignment operator
	string str6 = str4;

	//Clear function deletes all character from string
	str4.clear();

	//Both size() and length() return length of string 
	int len = str6.length();
	int size = str6.size();

	cout << "Length of string is: " << len << endl;
	cout << "Size of string is: " << size << endl;	

	//A particular character can be accessed using at operator or subscript [] operator
	char ch = str6.at(2);
	char ch_ = str6[2];

	cout << "ch: Third character of string is: " << ch << endl;	
	cout << "ch_ : Third character of string is: " << ch_ << endl;	

	//front returns first character and back returns last character of string
	
	char ch_f = str6.front();  //same as ch_f = str6[0];
	char ch_b = str6.back(); //same as ch_b = str6[str6.length() - 1];

	cout << "First character is: " << ch_f << endl;	
	cout << "Last character is: " << ch_b << endl;	

	//C string function c_str() returns null terminated character array version of string
	const char* charstr = str6.c_str();
	printf("charstr: %s\n",charstr);

	//append to add the argument string at the end
	str6.append(" Extension"); //same as str6 += " Extension"

	cout << "str6: " << str6 << endl;
	
	//Check if string is empty
	if(str4.empty())
		cout << "str4 is empty: " << str4 << endl;	

	//Another version of append, which appends part of another string
	str4.append(str6, 0, 6); // appends at 0th position, 6 characters
	
	cout << "str4: " << str4 << endl;

	//find returns index where pattern is found. If pattern is not there, it returns predefined constant npos (no position) whose value is -1
	
	if(str6.find(str4) != string::npos)
		cout << "str4 found in str6 at position: " << str6.find(str4) << endl;
	else
		cout << "str4 is not found in str6" << endl;

	//substr(a,b) function returns a substring of b length starting from index a
	cout << "str6.substr(7,3): " << str6.substr(7,3) << endl;

	//If second argument is not parsed, string till end is taken as substring
	cout << "str6.substr(7): " << str6.substr(7) << endl;

	//erase(a,b) deletes b characters at index a
	str6.erase(7,4);
	cout << "str6: " << str6 << endl;

	//Iterator version of erase
	str6.erase(str6.begin() + 5, str6.end() - 3);
	cout << "str6: " << str6 << endl;
	
	str6 = "This is a examples";

	//replace(a,b,str) replaces b characters from index a by str
	str6.replace(2,7, "ese are test");

	cout << "str6: " << str6 << endl;

	return 0;
}

/*Output:
first string
first string
#####
string
first
Length of string is: 6
Size of string is: 6
ch: Third character of string is: r
ch_ : Third character of string is: r
First character is: s
Last character is: g
charstr: string
str6: string Extension
str4 is empty: 
str4: string
str4 found in str6 at position: 0
str6.substr(7,3): Ext
str6.substr(7): Extension
str6: string nsion
str6: strinion
str6: These are test examples
*/
