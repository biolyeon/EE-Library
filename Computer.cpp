#include "pch.h"
#include "Computer.h"
//MAKE SETTERS

Computer::Computer()
{

	name = "Computer";
	purpose = "Runs software";
	num_ports = 4;
	count = 20;
	measures = false;
	produces = false;
	broken = false;

}

Computer::Computer(string _name, string _purpose, bool _measures, bool _produces, int _num_ports, int _count, bool _broken)
{
	name = _name;
	purpose = _purpose;
	measures = _measures;
	produces = _produces;
	num_ports = _num_ports;
	count = _count;
	broken = _broken;
	RES = "0x0";
	RAM = 0;
	MEM = 0;
	OS = "Windows";

}


Computer::~Computer()
{
}

string Computer::resolution() {

	return "1920x1080";

}

void Computer::newRES(string nRES) {

	RES = nRES;

}

double Computer::ram() {

	return RAM;

}

void Computer::newRAM(double nRAM) {

	RAM = nRAM;

}

double Computer::storage() {

	return MEM;

}

void Computer::newSpace(double nMEM) {

	MEM = nMEM;

}

bool Computer::software() {

	return true;

}

void Computer::hasSoftware(bool _SW) {

	SW = _SW;

}

string Computer::operating_system() {

	return "Windows 10";

}

void Computer::newOS(string nOS) {

	OS = nOS;

}

ostream& operator<< (ostream& out, Computer &object) {

	out << "Name: " << object.getName() << endl;
	out << "Purpose: " << (object.getPurpose()) << endl;
	out << "Measures: " << (object.doesMeasure()) << endl;
	out << "Produces: " << (object.doesProduce()) << endl;
	out << "Number of Ports: " << (object.getNumPorts()) << endl;
	out << "Count present: " << (object.getCount()) << endl;
	out << "Generally broken: " << object.isBroken() << endl;
	return out;

}

void Computer::displayStats() {

	cout << *this;
	cout << "PC Resolution: " << this -> RES << endl;
	cout << "PC RAM Capacity: " << this -> RAM << "GB" << endl;

	cout << "Storage Capactiy: " << this -> MEM << "GB" << endl;
	cout << "Software Included? " << this -> SW << endl;
	cout << "Operating System: " << this -> OS << endl;

}