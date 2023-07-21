#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int num;
    vector<int> num_vect;
    vector<int>::iterator itr;
    int sum = 0, num_count = 0;
    
    do {
        cout << "Enter an integer: ";
        cin >> num;
        if (num > 0){
            num_vect.push_back(num);
        }
        
        else if (num < 0) {
            // perhaps use find() to get index and itr can reflect this value

            // while abs(num) is found in num_vect
            while(count(num_vect.begin(), num_vect.end(), abs(num))){
                itr = find(num_vect.begin(), num_vect.end(), abs(num));
                num_vect.erase(itr);
            }
        }

    } while(num != 0);

    num_count = num_vect.size();

    for (int i = 0; i < num_count; i++) {
        sum += num_vect.at(i);
    }

    cout << num_count << " " << sum << endl;

    return 0;
}