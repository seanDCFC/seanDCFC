#include <iostream> 
#include <vector> 
#include <string> 
#include "Aircraft.h"
#include "FlightSystem.h"


void FlightSystem::AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType,
	int groundSpeed, int altitude, std::string gridReference, int heading) {

	Aircraft a(std::string flightNumber, std::string airline, std::string aircraftType,
		int groundSpeed, int altitude, std::string gridReference, int heading);
	bool isFound = false;
	for (int i = 0; i < aircraftList_.size(); i++) {

		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {

			isFound = true;
		}
	}
	if (isFound == true) {
		std::cout << "Flight " << flightNumber << "already in the system" << std::endl;
	}
	else{
		aircraftList_.push_back(Aircraft());

	}
}

std::vector<Aircraft> FlightSystem::ListAllAircraft()
{
	return aircraftList_;
		
}

std::vector<Aircraft> FlightSystem::ListAllCrusingAircraft()
{
	return std::vector<Aircraft>();
}

int FlightSystem::numbAircraftInSector()
{
	return 0;
}

void FlightSystem::RemoveAircraft(std::string flightNumber)
{
}

void FlightSystem::ChangeHeading(std::string flightNumber, int heading)
{
}

int FlightSystem::GetHeading(std::string flightNumber)
{
	return 0;
}

void FlightSystem::ChangeAltitude(std::string flightNumber, int altitude)
{
}

int FlightSystem::GetAltitude(std::string flightNumber)
{
	return 0;
}
