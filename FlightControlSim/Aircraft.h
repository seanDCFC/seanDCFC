#pragma once

#include <iostream> 
#include <vector> 
#include <string> 
#include <iomanip>



class Aircraft {
private:
	std::string flightNumber_;
	std::string airline_;
	std::string aircraftType_;
	int groundSpeed_;
	int altitude_;
	std::string gridReference_;
	int heading_;

public:
	Aircraft();

	Aircraft(std::string flightNumber, std::string airline, 
		std::string aircraftType, int groundspeed, 
		std::string gridReference, std::string heading);

	void SetFlightNumber(std::string flightNumber);
	std::string GetFlightNumber();

	void SetAirline(std::string airline);
	std::string GetAirline()const;

	void SetAircraftType(std::string aircraftType);
	std::string GetAircraftType();

	void SetGroundSpeed(int groundSpeed);
	int GetGroundSpeed()const;

	void SetAltitude(int altitude);
	int GetAltitude() const;

	void SetGridReference(std::string gridReference);
	std::string GetGridReference()const;

	void SetHeading(int Heading);
	int GetHeading()const;

};