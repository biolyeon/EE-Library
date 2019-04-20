#pragma once
#include "pch.h"
#include <iostream>
#include <string.h>
#include <iostream>
#include <string>
#include "equipment.h"
#include "oscilloscope.h"

using std::string;
using std::endl;
using std::ostream;


/*overload the << operator*/
ostream& operator<< (ostream& out, oscilloscope &object) {
	out << "Name: " << object.getName() << endl;
	out << "Purpose: " << (object.getPurpose()) << endl;
	out << "Measures: " << (object.doesMeasure()) << endl;
	out << "Produces: " << (object.doesProduce()) << endl;
	out << "Number of Ports: " << (object.getNumPorts()) << endl;
	out << "Count present: " << (object.getCount()) << endl;
	out << "Generally broken: " << object.isBroken() << endl;	
	return out;
}

/*make the setters*/
void oscilloscope::setChannels(int setChannels){
	channels = setChannels;			//set the value of the channels to the value that was read in
}

void oscilloscope::setPrecision(double setPrecision){
	precision = setPrecision;	//set the value of the precision to whatever was read in
}

void oscilloscope::setMemory(int setMemory){
	memory = setMemory;			//set the value of the memory to whatever was read in
}

/*make the getters*/
int oscilloscope::getChannels(){
	return channels;		//get the number of channels for the user
}	

double oscilloscope::getPrecision(){
	return precision;		//get the device precision for the user
}

int oscilloscope::getMemory(){
	return memory;			//get the devices memory for the user
}

oscilloscope::oscilloscope(int setChannels, double setPrecision, int setMemory)
	//equipment("Model_Name", "Used to measure AC signals", num_ports, count, true, false, false)
{
	name = "Model_Name";
	purpose = "Used to measure AC signals";
	num_ports = 1;
	count = 1;
	measures = 1;
	produces = 0;
	broken = false;
	channels = setChannels;		//set the channels to the value read in
	precision = setPrecision;	//set the precision to the value read in
	memory = setMemory;			//set the memory to the value read in
	
	/*use setters and getts to get set the Model_Name, number of ports, and the quantity. The setters/getters come from the base*/
}