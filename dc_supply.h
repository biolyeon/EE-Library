#pragma once
#include "equipment.h"
#include <iostream>
#include <string>
using std::string;
class dc_supply :
	public equipment
{
private:
	int max_voltage;
	double precision;
public:
	//default constructor
	//ALL members will need to be set by setters
	dc_supply();

	//nearly exhaustive constructor
	//uses all members of equipment as arguments
	//dc_supply members will need to be set by setters
	dc_supply(string name, string purpose, bool measures, bool produces, int num_ports, int count, bool broken);

	//exhaustive constructor
	//ALL members are initialized to argument values
	//cumbersome; 9 arguments is so many
	dc_supply(string name, string purpose, bool measures, bool produces, int num_ports, int count, bool broken, int max_voltage, double precision);

	//getters for dc_supply members
	int getMaxVoltage();
	double getPrecision();

	//setters for dc_suply members
	void setMaxVoltage(int mv);
	void setPrecision(double p);
	

	//overloaded ostream operator
	//used for ease of printing
	//hopefully will prevent this class from being considered abstract
	friend std::ostream& operator<< (std::ostream& output, dc_supply &object);

	void displayStats();

	//default destructor
	~dc_supply();
};

