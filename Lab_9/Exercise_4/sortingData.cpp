#include <iostream>
#include <string>
#include <cctype>

#include "Data.h"
#include "Circle.h"
#include "Participant.h"

using namespace std;

int main( int argc, const char* argv[] )
{
	Data myData;
	char action;
	int radius;
	string name;
	int age;
	double score;


	cout << "Here are the possible actions: " << endl;
	cout << "'q' or 'Q' - break out of the loop and end the program" << endl;
	cout << "'c' or 'C' - add a new Circle to Data (let the user also decide on the radius of the circle)" << endl;
	cout << "'t' or 'T' - add a new Participant to Data (let the user also decide on the participant's information)" << endl;
	cout << "'s' or 'S' - sort the Data" << endl;
	cout << "'p' or 'P' - print the Data" << endl << endl;

	do{
		cin >> action;
		
		switch((char)tolower(action)){
			case 'c':
				cin >> radius;
				
				myData.add( new Circle(radius) ); 
				cout << "Circle added" << endl;
				break;
			
			case 't':
				cin >> name;
				cin >> age;
				cin >> score;

				myData.add( new Participant( name, age, score ) );
				cout << "Participant added" << endl;
				break;

			case 's':
				myData.sort();
				cout << "Data sorted" << endl;
				break;

			case 'p':
				myData.print();
				break;
		}
		
	} while((char)tolower(action) != 'q');

	return 0;
}