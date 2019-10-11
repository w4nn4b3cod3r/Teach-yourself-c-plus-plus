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
