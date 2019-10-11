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
