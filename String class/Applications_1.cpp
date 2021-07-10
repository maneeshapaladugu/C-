/*Some applications of strings*/

#include<iostream>
using namespace std;

//This function returns the floating part of a numeric string
string returnFloatingPart(string str)
{
	int pos = str.find(".");
	if(pos == string::npos)
		return "";
	else
		return str.substr(pos+1);
}

//This function checks whether a string contains all digit or not
bool isDigits(string str)
{
	int l = str.length();
	for(int i = 0; i < l; i++)
	{
		if(str.at(i) < '0' || str.at(i) > '9')
			return false;
	}
	//If we reach here, all characters are digits
	return true;
}

//this function replaces all single space by %20 used in URLs
string replaceBlankWith20(string str)
{
	string replaceBy = "%20";
	int n = 0;

	//loop till all the spaces are replaced
	while((n = str.find(" ", n)) != string::npos)
	{
		str.replace(n,1,replaceBy);
		n += replaceBy.length();
	}
	return str;
}

//Driver function to check above methods
int main()
{
	string floatNum = "23.342";
	cout << "Floating part is: " << returnFloatingPart(floatNum) << endl;

	string number = "1234";
	if(isDigits(number))
		cout << number << " String has only digits" << endl;

	string url = "google com in";
	cout << "Replaced url: " << replaceBlankWith20(url) << endl;

	return 0;
}

/*Output:
 * Floating part is: 342
1234 String has only digits
Replaced url: google%20com%20in
*/
