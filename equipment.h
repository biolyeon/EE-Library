/*
	File:		Equipment.h
	Purpose:	Base class for other types of equipment
				instantiated
	Members:	name, purpose: string
				number of ports, count in lab: int
				broken, measures, produces: bool
	Methods:	getters, setters
				virtual void displayStats() : to be implemented in each subclass
											prints neat list of equipment parameters
	Authors: Tom Flynn, Ryan Kent, Imrul Lyeon, Siddarth Mukundan						
*/



#pragma once
#include <iostream>
#include <string.h>
#include <iostream>
#include <string>
class equipment
{
protected:

	//model name of device
	std::string name;
	
	//function of device; e.g. a DC supply output a DC voltage
	std::string purpose;

	//does this device measure the conditions in an experiment?
	bool measures;

	//does this device provide a signal to assist in an experiment?
	bool produces;

	//how many connections does this device support?
	int num_ports;

	//how many instances of this device are present?
	int count;

	//is this device generally operational?
	bool broken;
	
	
public:
	
	//standard constructor
	equipment();

	//getters for all variables
	std::string getName();
	std::string getPurpose();
	int getNumPorts();
	int getCount();
	bool doesMeasure();
	bool doesProduce();
	bool isBroken();
	
	//setters for all variables
	void setName(std::string _name);
	void setPurpose(std::string _purpose);
	void setNumPorts(int _num_ports);
	void setCount(int _count);
	void setMeasures(bool _measures);
	void setProduces(bool _produces);
	void setBroken(bool _proken);


	//overloaded ostream operator
	//used for implementation in child classes
	//also for use with virtual displayStats function in child classes
	friend std::ostream& operator<< (std::ostream& output, equipment &object);
	
	
	//standard destructor
	~equipment();

	//provides summary of equipment statistics;
	//to be implemented in eachsubclass
	virtual void displayStats() = 0;
};

