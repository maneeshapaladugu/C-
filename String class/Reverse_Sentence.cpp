/*Program to reverse the given sentence*/

#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

string reverse_string(string str)
{
	stringstream ss(str);
	string word;
	string reverse = "";
	vector<string> vect;
	
	while(ss >> word)
	{
		vect.push_back(word);
	}
	for(auto itr = vect.rbegin(); itr != vect.rend(); itr++)
	{
		reverse += *itr + " ";
	}
	return reverse;
}

int main()
{
	string str;
	cout << "Enter the string: " << endl;
	getline(cin,str);
	cout << "Entered string is: "<< str <<endl;

	string rev;
        rev = reverse_string(str);

	cout << "Reverse of the string is: " << rev << endl;
	return 0;
}


/*Output:
Enter the string:
My name is Maneesha
Entered string is: My name is Maneesha
Reverse of the string is: Maneesha is name My
*/
