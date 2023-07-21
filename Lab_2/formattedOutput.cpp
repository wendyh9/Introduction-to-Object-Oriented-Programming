#include <iostream>
using namespace std;

int main() {
    int num;
    int remainder;
    int binary = 0;
    int product = 1;

    do {
        cout << "Enter an integer: ";
        cin >> num;   
        if (num < 0) {
            break;
        }
        cout << "Hexadecimal format: 0x" << hex << uppercase << num  << nouppercase << dec << endl;
        while (num != 0) {
            remainder = num % 2;
            binary += (remainder * product);
            num /= 2;
            product *= 10; 
        }
        cout << "Binary format: " << binary << endl;     
    } while (num < 0);

    return 0;
}