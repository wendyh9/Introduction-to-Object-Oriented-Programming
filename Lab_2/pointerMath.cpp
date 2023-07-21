#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    int* ptr1 = &num1; 
    int* ptr2 = &num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << *ptr1 + *ptr2 << endl;
    cout << num1 << " - " << num2 << " = " << *ptr1 - *ptr2 << endl;
    cout << num1 << " * " << num2 << " = " << *ptr1 * *ptr2 << endl;
    cout << num1 << " / " << num2 << " = " << (float)*ptr1 / *ptr2 << endl;

    return 0;
}