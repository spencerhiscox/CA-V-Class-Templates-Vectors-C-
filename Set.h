©Spencer Hiscox, 2023

// A template-based class for a set. The actual data is
// stored in a vector and the set class operates as a
// wrapper for the vector data.

#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Set {

	vector<T> data;

public:

	Set();
	~Set();

	int getSize();
	T* getArray();

	void add(T val);
	void clearArray(T* arr);

};

template <class T>
Set<T>::Set() {			//Probably unnecessary to even explicitly define a class constructor for this class AT ALL
	data;				//Probably also unnecessary to perform this action on data variable - don't think it's actually changing
}						//anything - only included as a "best practice" - though I literally can't see that this does ANYTHING at all.	 
							 
template <class T>
Set<T>::~Set() {
	data.clear();			//THIS, on the other hand, IS necessary.
}

template <class T>
int Set<T>::getSize() {
	return (int)data.size();
}

template <class T>
T* Set<T>::getArray() {

	int size = getSize();
	T* dArr = new T[size];
	for (int i = 0; i < size; i++) {
		dArr[i] = data[i];
	}
	return dArr;
}


template <class T>
void Set<T>::add(T val) {

	bool exist = false;
	for (unsigned int i = 0; i < getSize(); i++) {
		if (data.at(i) == val) {
			exist = true;				
			break;
		}				
	}
	if (!exist) {
		data.push_back(val);
	}
	cout << "Adding: " << val << endl;
}

template <class T>
void Set<T>::clearArray(T* arr) {
	delete[] arr;
}
