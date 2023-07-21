#include <iostream>
#include <bits/stdc++.h>
// #include <bitset>
using namespace std;

int getBit(int n, int index) {
    if (index == 0) {
        return n %= 10;
    }
    else if (index == 1) {
            n /= 10;
            n %= 10;
        return n;         
    }
    else if (index > 1){
        for (int i = 0; i < index; i++) {
            n /= 10;
        }
        return n % 10;        
    }
    return 0;
}

int setBit(int n, int index) {
    // use bitwise or
    return (n | (1 << (index)));
}

int clearBit(int n, int index) {
    // use bitwise and
    return (n & (~(1 << (index))));
}

int binaryFormat(int n) {    
    int remainder;
    int binary = 0;
    int product = 1;
    while (n != 0) {
        remainder = n % 2;
        binary += (remainder * product);
        n /= 2;
        product *= 10; 
    }  
    return binary;  
}

int main() {

    int n, index;

    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Enter a position: ";
    cin >> index;

    int binary = binaryFormat(n);

    cout << "Binary format of " << n << " is " << binary << endl; 
    cout << "The original bit at position " << index << " of " << n << " is " << getBit(binary, index) << endl; 
    cout << "The number " << n << " with the bit set at index " << index << " is " << binaryFormat(setBit(n, index)) << endl;
    cout << "The number " << n << " with the bit cleared at index " << index << " is " << binaryFormat(clearBit(n, index)) << endl;

    return 0;
}