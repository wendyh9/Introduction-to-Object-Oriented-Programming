#include <iostream>
#include <vector>
#include "Vec.h"
#include "Rect.h"
using namespace std;

int main() {
    int i;
    vector<Rect> rect_vector;
    float x, y, width, height;
    Rect rect;
    float c1, c2;
    Vec vec;

    do {
        if (rect_vector.size() == 0) {
            cout << "Type 4 floats to define a rectangle: ";  
        }
        else {
            cout << "Type 4 floats to define the next rectangle: ";
        }

        cin >> x;
        cin >> y;
        cin >> width;
        cin >> height;

        if (x < 0 && y < 0 && width < 0 && height < 0) {
            break;
        }

        rect = Rect(x, y, width, height);        
        
        rect_vector.push_back(rect);

    } while (rect.x > 0 || rect.y > 0 || rect.width > 0 || rect.height > 0);

    cout << endl;

    do {
        cout << "Type 2 floats to define a point: ";
        cin >> c1;
        cin >> c2;

        if (c1 == -99.0f && c2 == -99.0f) {
            cout << "Finished!" << endl;
            break;
        }

        vec = Vec(c1, c2);

        for (i = 0; i < rect_vector.size(); i++){
            if (rect_vector[i].contains(vec)) {
               cout << "The point is INSIDE of rectangle " << i << endl;
            }
            else {
                cout << "The point is OUTSIDE of rectangle " << i << endl;
            }
        }
        cout << endl;
    } while (c1 != -99.0f && c2 != -99.0f);

    return 0;
}
