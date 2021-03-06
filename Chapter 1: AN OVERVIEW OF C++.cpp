/*
*------------------------------------------------------------------------------------------------------------------------------
* P:16_Examples: 4  -> Below program prompts the user for an integer value, floating-point value, and a string. It then uses one
* input statement to read all three values.
*------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main()
{
    int i;
    float j;
    char s[80];

    cout << "Enter an integer, float & string: ";
    cin >> i >> j >> s;
    cout << "Heres your data Integer: " << i << " Float: " << j << " String: " << s;

    return 0;
}

/*
*------------------------------------------------------------------------------------------------------------------------------
* P:18_Exercises: 1  -> Write a program that inputs the number of hours than an employee work and the employee's wage. Then
* display the employee's pay. (Be sure to prompt for input)
*------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    double workHour;
    int wage, total, grossPay;

    cout << "Enter the Work Hour & wage: ";
    cin >> workHour >> wage;

    total = workHour * 52; // 52 Number of weeks in a year
    cout << "Your Gross pay is: " << (double)wage/total << "\n";


    return 0;
}

/*
*------------------------------------------------------------------------------------------------------------------------------
* P:18_Exercises: 2  -> Write a program that converts feet to inches. Prompt the user for feet and display the equivalent number
* of inches. Have your program repeat this process until the user enters 0 for the number of feet.
*------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    double feet;

    while(feet){
        cout << "Enter the feet: ";
        cin >> feet;
        cout << "The inch value of " << feet << " is " << feet*12 << " inches.\n";
    }
    return 0;
}

/*
*------------------------------------------------------------------------------------------------------------------------------
* P:18_Exercises: 2  -> Write below C program into C++ standard format.
* 
*------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, d, min;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    min = a > b ? b : a;
    
    for(d = 2; d < min; d++){
     if(((a%d)==0) && ((b%d) == 0)) break;
        if(d==min){
            cout << "No Common denominators.\n";
            return 0;
        }
    }
    
    cout << "The lowest common denominator is " << d;
    
    return 0;
}

/*
*------------------------------------------------------------------------------------------------------------------------------
* P:23_Examples: 1  -> As a simple first example, this program demonstrates myClass, described in this book, It sets the value
* of a objects for ob1 and ob2 and then diplays a's value for each object.
*------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;


class myClass{
    // as this is not mentioned under be public so this variable will be private
    int a;
public:
    void set_a(int num);
    int get_a();
};
// this is member function
void myClass::set_a(int num){
    a = num;
}
// also this is a return type member function
int myClass::get_a(){
    return a;
}

/*
*------------------------------------------------------------------------------------------------------------------------------
* P:26_Examples: 4 -> As a simple first example, this program demonstrates myClass, described in this book, It sets the value
* of a objects for ob1 and ob2 and then diplays a's value for each object.
*------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;


class stack{
    char stck[10];
    int tos;
public:
    void init();
    void push(char ch);
    char pop();
};
void stack::init(){
    tos = 0;
}
void stack::push(char ch){
    if(tos == 10){
        cout << "Stack is Full !";
        return;
    }
    stck[tos] = ch;
    tos++;
}
char stack::pop(){
    if(tos == 0){
        cout << "Stack is Full !";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    // making two objects from myClass
    stack s1, s2;

    s1.init();
    s2.init();

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    for(int i = 0; i < 3; i++) cout << "S1 POP : " << s1.pop() << "\n";
    for(int i = 0; i < 3; i++) cout << "S2 POP : " << s2.pop() << "\n";

    return 0;
}

int main()
{
    // making two objects from myClass
    myClass ob1, ob2;
    ob1.set_a(10);
    ob2.set_a(90);

    cout << ob1.get_a() << "\n" << ob2.get_a() << "\n";

    return 0;
}

/*
*------------------------------------------------------------------------------------------------------------------------------
* P:26_Examples: 4 -> Create a class called card that maintains a library card catalog entry. Have the Class store a book's title, author
* and number of copies available. keep the variables private & there should be member function to call that with show() function
* and store() function for entry the data into it.
*------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
using namespace std;

class card
{
    string bookTitle, authorName;
    int copyOfBooks;
public:
    void store(string title, string name, int numOfBooks);
    void show();
};
void card::store(string title, string name, int numOfBooks){
    bookTitle = title;
    authorName = name;
    copyOfBooks = numOfBooks;
}
void card::show(){
    cout << "Book Title: " << bookTitle << "\t" << "Author Name: " << authorName << "\t" << "Books Available: " << copyOfBooks << "\n";
}
int main()
{
    card book1, book2, book3;

    book1.store("Test Book 1", "Ruhul", 10);
    book2.store("Test Book 2", "Jibon", 21);
    book3.store("Test Book 3", "Moyna", 100);
    book1.show();
    book2.show();
    book3.show();

    return 0;
}
