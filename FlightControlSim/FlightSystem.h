#pragma once

#include <iostream> 
#include <vector> 
#include <string> 
#include <iomanip>
#include "Aircraft.h"

class FlightSystem {
private:
	std::vector<Aircraft> aircraftList_;
	std::vector<Aircraft> a;
public:
	void AddAircraft(std::string flightNumber, std::string airline,
		std::string aircraftType, int groundspeed, int altitude,
		std::string gridReference, int heading);

	std::vector<Aircraft> ListAllAircraft();
	std::vector<Aircraft> ListAllCrusingAircraft();
	int numbAircraftInSector();
	void RemoveAircraft(std::string flightNumber);
	void ChangeHeading(std::string flightNumber, int heading);
	int GetHeading(std::string flightNumber);
	void ChangeAltitude(std::string flightNumber, int altitude);
	int GetAltitude(std::string flightNumber);


};
