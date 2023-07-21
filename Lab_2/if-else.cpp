#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num == 0){
        cout << "NEITHER POSITIVE NOR NEGATIVE" << endl;
    }

    if (num > 0) {
        cout << "POSITIVE" << endl;
    }
    else if (num < 0) {
        cout << "NEGATIVE" << endl;
    }

    if (num % 2 == 0) {
        cout << "EVEN" << endl;
    }
    else {
        cout << "ODD" << endl;
    }

    return 0;
}