/*
* Using Constructor Overloading
*/
#include <iostream>

using namespace std;

class Ball{
    float x;
    string name;
public:
    Ball();
    Ball(string string1, float radius);
    Ball(float radius);
    Ball(string string1);
    void print();
    ~Ball();
};
Ball::Ball() {
    x = 10.0;
    name = "black";
}
Ball::Ball(float radius) {
    x = radius;
    name = "black";
}
Ball::Ball(string string1){
    name = string1;
    x = 10.0;
}
Ball::Ball(string string1, float radius){
    name = string1;
    x = radius;
}
void Ball::print() {
    cout << "name: " << name << "\t" << "Radius: " << x << endl;
}
Ball::~Ball() {
    cout << "Destructor loading done." << endl;
}
int main(){
    Ball ob1;
    Ball ob2(20.0);
    Ball ob3("Red");
    Ball ob4("Violet", 35);
    ob1.print();
    ob2.print();
    ob3.print();
    ob4.print();
    return 0;
}

/*
* Using Operator Overloading
*/
    #include <iostream>
using namespace std;

class OperatorOverloading {
    int x_value;
    float y_value;
  public:
    OperatorOverloading();
    OperatorOverloading(int x, float y);
    OperatorOverloading(float y);
    void print();
/* Operator overloading syntax & use of operator overloading */
    OperatorOverloading operator -(OperatorOverloading any) {
        OperatorOverloading temp;
        temp.x_value = x_value - any.x_value;
        temp.y_value = y_value - any.y_value;
        return temp;
    }
};
OperatorOverloading::OperatorOverloading() {
    x_value = 0;
    y_value = 0;
}
OperatorOverloading::OperatorOverloading(int x, float y) {
    x_value = x;
    y_value = y;
}
OperatorOverloading::OperatorOverloading(float y) {
    x_value = 10;
    y_value = y;
}
void OperatorOverloading::print() {
    cout << "X_VALUE IS: " << x_value << " & Y_VALUE IS: " << y_value << endl;
}

int main() {
    OperatorOverloading makeNewObjct;
    makeNewObjct.print();
    OperatorOverloading object2(5, 10);
    OperatorOverloading object3(5, 10);
    makeNewObjct = object2 - object3;
    object2.print();
    OperatorOverloading mk3(100);
    mk3.print();
    makeNewObjct.print();
    return 0;
}

/*b. Explain Chain function calls e.g object.function1().function2().function*) with coding example(use this pointer)*/

#include<iostream>
#include<conio.h>
using namespace std;

class Test
{

public:

	Test Display(); // Function 1
	Test Show();    // Function 2
	Test Result();  // Function 3

};

Test Test::Display()
{
	cout<<"Function 1"<<endl;
	return *this;  // Return this pointer
}

Test Test::Show()
{
	cout<<"Function 2"<<endl;
	return *this;
}

Test Test::Result()
{
	cout<<"Result 3"<<endl;
	return *this;
}

int main()
{
	Test Obj;

	//Here i have called all the three function in a sequence.

	Obj.Display().Show().Result(); //This is called Function Chaining

	getch();
}

/*C. Write a class named Point3d. This class should contain :
*Three private member variables m_x, m_x, m_z;
* A Public member function named setValues() that allows you to set values for  m_x, m_x & m_z
* A Public member function named print() that prints the point in the following format -> m_x > m_y > m_z */

#include<iostream>
#include<conio.h>
using namespace std;

class Point3d
{
    int m_x, m_y, m_z;
public:
    Point3d(); // Default constructor
    void setValues(int x, int y, int z); //
    void print();
    ~Point3d(); // Destructor
};
Point3d::Point3d() {
    m_x = 0;
    m_y = 0;
    m_z = 0;
}
void Point3d::setValues(int x, int y, int z) {
    m_x = x;
    m_y = y;
    m_z = z;
}
void Point3d::print() {
    cout << "m_x: " << m_x << "->" << m_y << "->" << m_z << endl;
}
Point3d::~Point3d() {
    cout <<"Destructor Loading finished" << endl;
}
int main()
{
	Point3d Obj;
	Point3d scndObject;
    Obj.print();
	scndObject.setValues(1,2,3);
	scndObject.print();
	getch();
}

