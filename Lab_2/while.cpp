#include <iostream>
using namespace std;

int main(){
    int num;

    do {
        cout << "Enter an integer: ";
        cin >> num;

        if (num == 0) {
            break;
        }

        if (num > 0) {
            cout << "POSITIVE" << endl;
        }
        else {
            cout << "NEGATIVE" << endl;
        }

        if (num % 2 == 0) {
            cout << "EVEN" << endl << endl;
        }
        else {
            cout << "ODD" << endl << endl;
        }
    } while (num != 0);

    return 0;
}