/*
*------------------------------------------------------------------------------------------------------------------------------
* Just a simple constructor & destructor
*------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;
class understandConstructorDestructor{
    int a;
public:
    understandConstructorDestructor(); // this is construction as this have no return type
    ~understandConstructorDestructor(); // this is destructor
    void show(); // this is a member function of the understandConstructorDestructor Class
};

understandConstructorDestructor::understandConstructorDestructor(){
    cout << "This is a Constructor Called......." << endl;
    a = 10;
}
understandConstructorDestructor::~understandConstructorDestructor(){
    cout << "This is destructor Called....." << endl;
}
void understandConstructorDestructor::show(){
    cout << a << endl;
}
int main()
{
    understandConstructorDestructor object_1;
    object_1.show();
    return 0;
}
/*
* P:46_Examples : 1 -> Here is a stack() program that do push & pop with characters assigned in main.
* But with the use of constructor(with the initialization of variable) & destructor to see the use of them.
*/
#include <iostream>
#define SIZE 10
using namespace std;

class stack
{
    char stck[SIZE];
    int tos;
public:
    stack(); // Constructor
    ~stack();
    void push(char ch);
    char pop();
};
stack::stack() // Constructor Call
{
    cout << "Initiating Stack Constructor. " << endl;
    tos = 0;
}
stack::~stack() // Destructor Call
{
    cout << "Destructing Class." << endl;
}
void stack::push(char ch)
{
    if(tos == SIZE) {
        cout << "Stack is full." << endl;
        return;
    }
    else {
        stck[tos] = ch;
        tos++;
    }

}
char stack::pop()
{
    if(tos == 0) {
        cout << "Stack is empty !" << endl;
        return 0;
    }
    else {
        tos--;
        return stck[tos];
    }
}
int main()
{
    stack ob1, ob2; // Creating two object of class so 2 constructor & destructor will happen
    ob1.push('a');
    ob2.push('x');
    ob1.push('b');
    ob2.push('y');
    ob1.push('c');
    ob2.push('z');

    for(int i = 0; i < 3; i++) cout << "POP ob1 = " << ob1.pop() << endl;
    for(int i = 0; i < 3; i++) cout << "POP ob2 = " << ob2.pop() << endl;
    return 0;
}

/*
* P:48_Examples : 2 -> Here is a program for better & advance approach to the precedence example. It uses
* pointer, constructor( with initialization of variables) , destructor with the help 
* of the HEAP MEMORY & free the memory at destructor
*/
#include <iostream>
#include <cstring>
#include <cstdlib> // for using malloc func of c rather we can use new int ?
using namespace std;
#define SIZE 255

class strtype{

    char *p;
    int len;
public:
    strtype(); /// is a constructor
    ~strtype(); /// is a destructor
    void set(char *ptr);
    void show();
};
/// Constructing class with HEAP Memory & initialization variables
strtype::strtype() {
    p =(char *) malloc(SIZE); /// getting Dynamic memory on HEAP also known as HEAP MEMORY like new char(SIZE)
    if(!p) { // or we can write p == 0
        cout << "Allocating memory failed !" << endl;
        exit(1);
    }
    else {
        *p = '\0';
        len = 0;
    }
}
/// destructing the HEAP memory allocated from Constructor
strtype::~strtype() {
    cout << "Deallocating memory. " << endl;
    free(p);
}

void strtype::set(char *ptr) {
    if(strlen(p) >= SIZE) {
        cout << "Strings are to big !" << endl;
        exit(1);
    }
    else {
        strcpy(p, ptr);
        len = strlen(p);
    }
}

void strtype::show() {
    cout << p << " - length: " << len  << endl;
}
int main()
{
    strtype s1 , s2; /// Making two objects from class strtype

    s1.set("This is a test case");
    s2.set("I Love to do programming.");

    s1.show();
    s2.show();

    return 0;
}

/*
* Constructor & Destructor with parameters
*/

#include <iostream>

using namespace std;

#define SIZE 100

class stack {

    int tos;
    char stck[SIZE];
    char who; // identify the stack
public:
    stack(char c); /// constructor with parameters
    void push(char ch);
    char pop();
};

stack::stack(char c) {
    who = c;
    tos = 10;
    cout << "Constructing stack : " << who << endl;
}
void stack::push(char ch) {
    if(tos == SIZE) {
        cout << "Stack : " << who << " is full !" << endl;
        return;
    }
    else {
        stck[tos] = ch;
        tos++;
    }
}
char stack::pop()
{
    if(tos == 0) {
        cout << "Stack : " << who << " is empty !";
        return 0;
    }
    else {
        tos--;
        return stck[tos];
    }
}

int main()
{
    stack s1('A'), s2('B'); 
/* because we had taken the constructor with parameters. Also this type of object naming is important such for debugging purpose*/
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    
    for(int i = 0; i < 5; i++) cout << "POP S1: " << s1.pop() << endl;
    for(int i = 0; i < 5; i++) cout << "POP S2: " << s2.pop() << endl;
    
    return 0;
}

/*
* Constructor & Destructor with parameters 
*/

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class strtype
{
    char *p; int len;
public:
    strtype(char *ptr); // Constructor with parameter
    ~strtype();
    void show();
};

strtype::strtype(char *ptr) /// initializing constructors with variable initiation & parameter
{
    len = strlen(ptr);
    p = (char*) malloc(len + 1);
    if(!p) {
        cout << "Memory allocation error !" << endl;
        exit(1);
    }
    else {
        strcpy(p, ptr);
    }
}
strtype::~strtype()
{
    cout <<"deallocating memory ...." << endl;
    free(p);
}
void strtype::show()
{
    cout << p << " - length of the string: " << len << endl;
}
int main()
{
    strtype s1("I Love to do programming"), s2("Do you understand me ?");

    s1.show();
    s2.show();

    return 0;
}




