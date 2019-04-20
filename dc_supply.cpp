#include "pch.h"
#include "dc_supply.h"
using std::string;
using std::endl;

//standard constructor
//should not be used
dc_supply::dc_supply()
{
	name = "Standard DC Supply";
	purpose = "Provides voltage or current at output terminals";
	measures = false;
	produces = true;
	count = 1;
	broken = false;
	max_voltage = 0;
	precision = 0.0;
}
//mostly explicit constructor
//takes all members of base equipment class as arguments 
//dc_supply specific variables should be set MANUALLY using mutator functions
dc_supply::dc_supply(string _name, string _purpose, bool _measures, bool _produces, int _num_ports, int _count, bool _broken)
{
	name = _name;
	purpose = _purpose;
	measures = _measures;
	produces = _produces;
	num_ports = _num_ports;
	count = _count;
	broken = _broken;
	max_voltage = 0;
	precision = 0.0;
}

//exhaustive constructor
//takes ALL members as arguments
//somewhat cumbersome
dc_supply::dc_supply(string _name, string _purpose, bool _measures, bool _produces, int _num_ports, int _count, bool _broken, int _max_voltage, double _precision)
{
	name = _name;
	purpose = _purpose;
	measures = _measures;
	produces = _produces;
	num_ports = _num_ports;
	count = _count;
	broken = _broken;
	max_voltage = _max_voltage;
	precision = _precision;
}

//max_voltage getter
int dc_supply::getMaxVoltage()
{
	return max_voltage;
}

//precision getter
double dc_supply::getPrecision()
{
	return precision;
}

//max_voltage setter
//technically this could be vulnerable to some kind of attack
void dc_supply::setMaxVoltage(int mv)
{
	max_voltage = mv;
}

//precision setter
//see above
void dc_supply::setPrecision(double p)
{
	precision = p;
}

//overloaded ostream operator
//hopefully will prevent this class from being considered abstract
std::ostream & operator<<(std::ostream & output, dc_supply & object)
{

	output << "Name: " << object.getName() << endl;
	output << "Purpose: " << (object.getPurpose()) << endl;
	output << "Measures: " << (object.doesMeasure()) << endl;
	output << "Produces: " << (object.doesProduce()) << endl;
	output << "Number of Ports: " << (object.getNumPorts()) << endl;
	output << "Count present: " << (object.getCount()) << endl;
	output << "Generally broken: " << object.isBroken() << endl;
	return output;
}

//virtual function from before
//might even work for an equipment pointer
void dc_supply::displayStats()
{
	std::cout << *this;
	std::cout << "Maximum voltage: " << this->max_voltage << std::endl;
	std::cout << "Precision: " << this->precision << std::endl;
}

//standard destructor
//nothing is dynamically sized, so this is trivial
dc_supply::~dc_supply()
{
}
