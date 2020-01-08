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
