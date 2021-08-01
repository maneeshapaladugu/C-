/*Program to demonstrate use of Copy constructor*/
#include<iostream>
#include<cstring> // or <string.h>
using namespace std;
 
class Data
{
private:
	char *ptr;
    	int dataSize; 
public:
	Data(const char *data1_str = NULL) //Parameterized Constructor
	{
		  dataSize = strlen(data1_str);  // Equals to data1.dataSize = strlen(data1_str)
		  ptr = new char[dataSize+1];
		  strcpy(ptr, data1_str);
	}
	 
	Data(const Data& data1) // copy constructor
	{
		  dataSize = data1.dataSize;     // Equals to - data2.dataSize = data1.dataSize;
		  ptr = new char[dataSize+1];    // Equals to - data2.ptr = new char[dataSize+1]; creating seperate memory to hold data2 object data
		  strcpy(ptr, data1.ptr);        // Copies string from location data1.ptr to location data2.ptr //Deep copy
	}

    	void change(const char *new_data)  // Function to change
	{
   		 delete [] ptr;
		 dataSize = strlen(new_data);
		 ptr = new char[dataSize+1];
		 strcpy(ptr, new_data);
	}
    	
	void print() 
	{
	       	 cout << ptr << endl;  // Function to print string
	}
    	
	~Data() //Destructor
	{
	       	delete [] ptr;  
	}
};
 
int main()
{
    Data data1("Maneesha"); // Calls Parameterized constructor
    Data data2 = data1;      //Equals to Data data2(data1); - Passing object by reference
 
    data1.print(); // what is printed ?
    data2.print();
 
    data2.change("Maneesha Paladugu");
 
    data1.print(); // what is printed now ?
    data2.print();
    return 0;
}


/*Output:
Maneesha
Maneesha
Maneesha
Maneesha Paladugu
*/
