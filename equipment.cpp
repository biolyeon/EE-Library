/*
	File:		Equipment.cpp
	Purpose:	Implementation for functions in
				equipment.h
	Methods:	standard constructor : creates dummy data
				getters and setters for all variables

				virtual void displayStats() : to be implemented in each subclass
											prints neat list of equipment parameters
	Authors: Tom Flynn, Ryan Kent, Imrul Lyeon, Siddarth Mukundan

*/


#include "pch.h"
#include "equipment.h"


equipment::equipment()
{
	
	name = "Standard equipment piece";
	purpose = "Used for laboratory operations";
	num_ports = 1;
	count = 1;
	measures = true;
	produces = false;
	broken = false;
	
}

//getters for all variables
//there's 7 of these, so this section is long
std::string equipment::getName()
{
	return name;
}

std::string equipment::getPurpose()
{
	return purpose;
}

int equipment::getNumPorts()
{
	return num_ports;
}

int equipment::getCount()
{
	return count;
}

bool equipment::doesMeasure()
{
	return measures;
}

bool equipment::doesProduce()
{
	return produces;
}

bool equipment::isBroken()
{
	return broken;
}

//setters for all variables
//also seven of these
void equipment::setName(std::string _name)
{
	name = _name;
}

void equipment::setPurpose(std::string _purpose)
{
	purpose = _purpose;
}

void equipment::setNumPorts(int _num_ports)
{
	num_ports = _num_ports;
}

void equipment::setCount(int _count)
{
	count = _count;
}

void equipment::setMeasures(bool _measures)
{
	measures = _measures;
}

void equipment::setProduces(bool _produces)
{
	produces = _produces;
}
void equipment::setBroken(bool _broken)
{
	broken = _broken;
}

std::ostream & operator<<(std::ostream & output, equipment & object)
{
	using std::endl;

	output << "Name: " << object.getName() << endl;
	output << "Purpose: " << (object.getPurpose()) << endl;
	output << "Measures: " << (object.doesMeasure()) << endl;
	output << "Produces: " << (object.doesProduce()) << endl;
	output << "Number of Ports: " << (object.getNumPorts()) << endl;
	output << "Count present: " << (object.getCount()) << endl;
	output << "Generally broken: " << object.isBroken() << endl;
	return output;
}

//standard destructor
equipment::~equipment()
{
}
