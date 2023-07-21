#include <iostream>

using namespace std;
// need to pass pointer by reference (using & operator)
void initialize_pint(int*& pnum, int n) {
	pnum = &n;
}

int main( int argc, const char * argv[] )
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	int* pnum;
	initialize_pint(pnum, num);

	cout << *pnum << endl;

	return 0;
}