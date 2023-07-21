#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int radius;
    cout << "Enter the radius of a circle: ";
    cin >> radius;
    float area = pow(radius, 2) * M_PI;
    cout << "Area of your circle: " << area << endl;
    return 0;
}
