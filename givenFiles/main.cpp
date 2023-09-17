©Carleton University, 2023

/*Write a template - based class that implements a set of items.The class should allow the user to :
	a.Add a new item to the set
	b.Get the number of items in the set
	c.Get a pointer to a dynamically created array containing each item in the set
	d.Create a function for de-allocating the memory.
*/

#include <iostream>
#include <vector>
#include <string>
#include "Set.h"

using namespace std;


// ======================
//     main function
// ======================
int main()
{
	Set<int> s1;
	Set <double> s2;
	Set<string> s3;
	Set<char> s4;

	int* intArray = NULL;
	string* stringArray = NULL;
	double* doubleArray = NULL;
	char* charArray = NULL;


	int i;

	// Add some sample integers to the set
	cout << "----------------------------------\n";
	cout << "----Example 1: Set of integers----\n";
	cout << "----------------------------------\n";
	s1.add(10);
	s1.add(5);
	s1.add(15);
	s1.add(25);
	s1.add(15);
	cout << "--------------------------------\n";

	intArray = s1.getArray();
	cout << "The first set has " << s1.getSize() << " items\nThey are: " << endl;
	for (i = 0; i < s1.getSize(); i++)
	{
		cout << "\t" << intArray[i] << endl;
	}
	s1.clearArray(intArray);


	// Add some sample doubles to the set
	cout << "\n----------------------------------\n";
	cout << "----Example 2: Set of doubles-----\n";
	cout << "----------------------------------\n";
	s2.add(1.5);
	s2.add(5.6);
	s2.add(12.8);
	s2.add(1.5);
	s2.add(12.8);
	cout << "----------------------------------\n";

	doubleArray = s2.getArray();
	cout << "The second set has " << s2.getSize() << " items\nThey are: " << endl;
	for (i = 0; i < s2.getSize(); i++)
	{
		cout << "\t" << doubleArray[i] << endl;
	}
	s2.clearArray(doubleArray);

	// Add some sample doubles to the set
	cout << "\n----------------------------------\n";
	cout << "----Example 3: Set of strings-----\n";
	cout << "----------------------------------\n";
	// Add some sample strings to the set
	s3.add("John Smith");
	s3.add("Jane doe");
	s3.add("John Smith");
	s3.add("Jack black");
	cout << "----------------------------------\n";
	stringArray = s3.getArray();
	cout << "The third set has " << s3.getSize() << " items\nThey are: "
		<< endl;
	for (i = 0; i < s3.getSize(); i++)
	{
		cout << "\t" << stringArray[i] << endl;
	}
	s3.clearArray(stringArray);

	cout << "----------------------------------\n";


	// Add some sample doubles to the set
	cout << "\n----------------------------------\n";
	cout << "-----Example 4: Set of Chars------\n";
	cout << "----------------------------------\n";
	// Add some sample strings to the set
	s4.add('B');
	s4.add('I');
	s4.add('T');
	s4.add('2');
	s4.add('4');
	s4.add('0');
	s4.add('0');
	cout << "----------------------------------\n";
	charArray = s4.getArray();
	cout << "The third set has " << s4.getSize() << " items\nThey are: "
		<< endl;
	for (i = 0; i < s4.getSize(); i++)
	{
		cout << "\t" << charArray[i] << endl;
	}
	s4.clearArray(charArray);

	cout << "----------------------------------\n";

	return 0;
}

