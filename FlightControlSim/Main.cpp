#include <iostream> 
#include <vector> 
#include <string> 
#include <limits>
#include "Aircraft.h"
#include "FlightSystem.h"


using namespace std;

int main() {
	Aircraft a;
	FlightSystem f;
	char input;
	while (true)
	{
		cout << "If you want to add an aircraft press 1" << endl;
		cout << "To list all aircrafts press 2" << endl;
		cout << "To remove an aircraft press 3" << endl;
		cout << "To change flght heading press 4" << endl;
		cout << "To change altitude press 5" << endl;
		cout << "To list all aircrafts in your sector press 6" << endl;
		cout << "To display all aircraft in your sector at crusing altitude press 7" << endl;
		cin >> input;

		if (input == '1') {
			string flightNumber;
			cout << "What is the flight number?" << endl;
			getline(cin, flightNumber);
			a.SetFlightNumber(flightNumber);
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			
			

			string airline;
			cout << "What is the airline?" << endl;
			getline(cin, airline);
			a.SetAirline(airline);
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

			int altitude;
			cout << "What is the altitude?" << endl;
			cin >> altitude;
			a.SetAltitude(altitude);
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			

			int groundSpeed;
			cout << "What is the speed?" << endl;
			cin >> groundSpeed;
			a.SetGroundSpeed(groundSpeed);
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

			string gridReference;
			cout << "What is the grid reference?" << endl;
			getline(cin, gridReference);
			a.SetGridReference(gridReference);
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			

			int heading;
			cout << "What is the heading?" << endl;
			cin >> heading;
			a.SetHeading(heading);
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
		 if (input == '2') {
			 
			}
		}
		return 0;
	}
}
