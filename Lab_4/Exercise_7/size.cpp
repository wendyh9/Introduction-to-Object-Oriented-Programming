#include <iostream>
using namespace std;

struct Struct1{
    char a;
    double d;
};

struct Struct2{
    char a;
    char b;
    double d;    
};

struct Struct3{
    char a;
    char b;
    char c;
    double d;   
};

struct Struct4{
    char a;
    char b;
    char c;
    char e;
    double d;   
};

struct Struct5{};

struct Struct6{
    char a;
    int b;
    char c;
};

struct Struct7{
    char a;
    char b;
    int c;
};

int main() {
    cout << "A struct containing 1 char and 1 double is " << sizeof(Struct1) << " byte(s)" << endl;
    cout << "A struct containing 2 chars and 1 double is " << sizeof(Struct2) << " byte(s)" << endl;
    cout << "A struct containing 3 chars and 1 double is " << sizeof(Struct3) << " byte(s)" << endl;
    cout << "A struct containing 4 chars and 1 double is " << sizeof(Struct4) << " byte(s)" << endl;
    cout << "An empty struct is " << sizeof(Struct5) << " byte(s)" << endl;
    cout << "A struct containing 1 char, followed by 1 int and then 1 char is " << sizeof(Struct6) << " byte(s)" << endl;
    cout << "A struct containing 2 chars followed by 1 int is " << sizeof(Struct7) << " byte(s)" << endl;
    return 0;
}