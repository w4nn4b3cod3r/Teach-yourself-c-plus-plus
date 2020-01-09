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
