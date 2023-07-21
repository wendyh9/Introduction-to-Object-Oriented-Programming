// this is for task 6
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> v;
	ifstream in( "code.cpp" );
	string line;
	
	while( getline( in, line ) ){ // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v
    }
	
    string concatenate = "";
    string temp;
    for (int i = 0; i < v.size(); i++) {
        temp = v[i];
        concatenate += temp;
    }
    cout << concatenate << endl;

    in.close();
    
    return 0;
}