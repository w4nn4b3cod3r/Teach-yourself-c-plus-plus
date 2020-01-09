// Write a Class C That have Member Variable Value(Int), Member Function Constructor, Overlode(+,-) & Overload (==, >)

#include <iostream>

class C
{
public:
	C();
	C(int x);
	~C();
	C operator +(C SOME_OB) {
		C temp;
		temp.value = value + SOME_OB.value;
		return temp;
	}
	C operator -(C SOME_OB) {
		C temp;
		temp.value = value - SOME_OB.value;
		return temp;
	}
	bool operator == (C SOME_OB) {
		if (value == SOME_OB.value) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator > (C SOME_OB) {
		if (value > SOME_OB.value) {
			return true;
		}
		else {
			return false;
		}
	}
	void print();
private:
	int value;
};
C::C()
{
	value = 0;
}
C::C(int x)
{
	value = x;
}
C::~C()
{
}
void C::print()
{
	std::cout << "Class Object Value: " << value << std::endl;
}
int main() {
	C c1(10), c2(20), c3(50), c5(10);
	C c4;
	c4 = c1 + c2 - c3;
	c4.print();
	if (c1 > c5) {
		std::cout << "C1 > C5" << std::endl;
	}
	if (c1 == c5) {
		std::cout << "C1 == C5" << std::endl;
	}
	return 0;
}

//Here is a short example that illustrates the basic operation of a vector.

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v; // create zero-length vector
	int i; 
	std::cout << "Default Size of vector: " << v.size() << std::endl;

	//put values onto end of vector --
	//vector will grow as needed 
	for (i = 0; i < 10; i++) v.push_back(i);

	// display current size of v
	std::cout << "Now the size of the vector v: " << v.size() << std::endl;

	// display all the contents of the vector

	for (i = 0; i < v.size(); i++) std::cout << " " << v[i];
	std::cout << std::endl;

	// Put more values onto end of vector again , vector will grow as needed
	for (i = 0; i < 10; i++) v.push_back(i + 10);

	// now display the size of the vector
	std::cout << "Again change of size: " << v.size() << std::endl;

	// Now display again the elements of the vector

	for (i = 0; i < v.size(); i++) std::cout << " " << v[i];

	std::cout << std::endl;

	// change content of vector
	for (i = 0; i < v.size(); i++) v[i] = v[i]*2;

	// contents doubled
	for (i = 0; i < v.size(); i++) std::cout << v[i] << " ";
	std::cout << std::endl;

	return 0;

}


// 2.Write a class C
// That have Member variable
// 1.value(double)
// That have Member Function
// 1.constructor for initialization
// 2.overloaded = function taking parameter(a double value)
// 3. get value function to print the values
// Now in main function
// 1.Take vector<C> v;
// 2. Insert 10 objects of class C, each object must hold different value in its “value ” variable
// 3.Print all the values of objects from vector.
// 4. modify all the values of the objects in vector
// 5.print again all the values
#include <iostream>
#include <vector>

class C {
private:
	double value;
public:
	C();
	~C();
	C(double d) { value = d; }
	C& operator = (double x) {
		value = x;
		return *this;
	}
	double getValue() { return value; }
};
C::C()
{
	value = 0;
}

C::~C()
{
	//do nothing 
}

int main()
{
	std::vector<C> v;
	int i;

	//push new items to the class value with vector
	for (i = 0; i < 10; i++)
		v.push_back(i/3.0);

	// display the current Vector Elements in dynamic array/Vector
	for (i = 0; i < v.size(); i++)
		std::cout << v[i].getValue() << " ";
	std::cout << "\n";

	// now if i try to multiply those vector value by 2.1 then
	std::cout << "After the multiplication of elements of the value by 2.1" << "\n";
	for (i = 0; i < v.size(); i++)
		v[i] = v[i].getValue() * 2.1;

	// now display the elements
	for (i = 0; i < v.size(); i++)
		std::cout << v[i].getValue() << " ";
	std::cout << "\n";

	return 0;
}


// Some
// Add 
// Erase Function application using Vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Inser 5 Elements with value 1
	vector<int> v(5, 1);
	int i;
	// print all the elements is the dynamic array
	for (i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
	// print the current size of the vector
	cout << "Size of v object is: " << v.size() << endl;
	
	// we can loop through the vector also using *iterator function as below
	vector<int>::iterator p = v.end(); // iterator object is p and it's value set as last

	// insert 10 elements with value of 9 at the end of the dynamic array 
	v.insert(p, 10, 9);
	// print the dynamic array
	for (i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << "\nSize of the v now: "<< v.size() << endl; // get the current size of the array
	// changing the p location 
	p = v.begin();
	p = p + 5;
	v.erase(p, p+10);
	cout << "\nAfter erase the elements are now: ";
	for (i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << "\nSize is: " << v.size() << endl;

	return 0;
}
