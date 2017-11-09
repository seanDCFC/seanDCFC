#include <iostream> 
#include <vector> 
#include <string> 
#include <iomanip>
#include "Aircraft.h"
#include "FlightSystem.h"


Aircraft::Aircraft() {

}
//default constructor
Aircraft::Aircraft(std::string flightNumber, std::string airline,
	std::string aircraftType, int groundspeed,
	std::string gridReference, std::string heading) {}


//Getters and setters
void Aircraft::SetFlightNumber(std::string flightNumber) {
	flightNumber_ = flightNumber;
	}

std::string Aircraft::GetFlightNumber() {
	return flightNumber_;
}

void Aircraft::SetAirline(std::string airline) {
	airline_ = airline;
}
std::string Aircraft::GetAirline()const {
	return airline_;
}

void Aircraft::SetAircraftType(std::string aircraftType) {
	aircraftType_ = aircraftType;
}
std::string Aircraft::GetAircraftType() {
	return aircraftType_;
}

void Aircraft::SetGroundSpeed(int groundSpeed) {
	groundSpeed_ = groundSpeed;
}
int Aircraft::GetGroundSpeed()const {
	return groundSpeed_;
}

void Aircraft::SetAltitude(int altitude) {
	altitude_ = altitude;
}
int Aircraft::GetAltitude() const {
	return altitude_;
}

void Aircraft::SetGridReference(std::string gridReference) {
	gridReference_ = gridReference;
}
std::string Aircraft::GetGridReference()const {
	return gridReference_;
}

void Aircraft::SetHeading(int heading) {
	heading_ = heading;
}
int Aircraft::GetHeading()const {
	return heading_;
}

