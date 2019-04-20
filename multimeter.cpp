#pragma once
#include <iostream>
#include <string.h>
#include <iostream>
#include <string>
#include "equipment.h"
#include "multimeter.h"

using namespace std;

/*overload the output operator*/
ostream& operator<< (ostream& out, multimeter &object) {
	out << "Name: " << object.getName() << endl;
	out << "Purpose: " << (object.getPurpose()) << endl;
	out << "Measures: " << (object.doesMeasure()) << endl;
	out << "Produces: " << (object.doesProduce()) << endl;
	out << "Number of Ports: " << (object.getNumPorts()) << endl;
	out << "Count present: " << (object.getCount()) << endl;
	out << "Generally broken: " << object.isBroken() << endl;	
	return out;
}

/*make the setters for the class multimeter*/
void multimeter::setMaxVolts(double voltage){
	maxVoltage = voltage;	//set maxVoltage equal to the value being read in
}

void multimeter::setMaxCurrent(double current){
	maxCurrent = current;	//set the max current to the value being read in
}

void multimeter::setVoltagePrecision(double precision){
	VoltagePrecision = precision;	//set the voltage precision to the value read in
}

void multimeter::setCurrentPrecision(double precision){
	CurrentPrecision = precision;	//set the current precision to the precision being read in
}

void multimeter::setMaxResistance(double ohms){
	MaxResistance = ohms;			//set the max resistance equal to the value being read in
}

void multimeter::setResistancePrecision(double ohms){
	ResistancePrecision = ohms;		//set the resistance precision to the value of ohms being read in
}

/*make the getters for the class multimeter*/
double multimeter::getMaxVolts(){
	return maxVoltage;	//get maxVoltage equal to the value being read in
}

double multimeter::getMaxCurrent(){
	return maxCurrent;	//get the max current to the value being read in
}

double multimeter::getVoltagePrecision(){
	return VoltagePrecision;	//get the voltage precision to the value read in
}

double multimeter::getCurrentPrecision(){
	return CurrentPrecision;	//get the current precision to the precision being read in
}

double multimeter::getMaxResistance(){
	return MaxResistance;			//get the max resistance equal to the value being read in
}

double multimeter::getResistancePrecision(){
	return ResistancePrecision;		//get the resistance precision to the value of ohms being read in
}

/*make the constructors for the class*/
multimeter::multimeter(double mVoltage, double mCurrent, double voltagePrec, double currentPrec, double maxOhms, double ohmsPrec)
{ 
	/*^call the constructor of equipment for the class*/
	name = "Model_Name";
	purpose = "Used for laboratory operations";
	num_ports = 1;
	count = 1;
	measures = true;
	produces = false;
	broken = false;

	maxVoltage = mVoltage;				//set the max voltage to the value inputted
	maxCurrent = mCurrent;				//set the max current to the value inputted
	VoltagePrecision = voltagePrec;		//set the voltage precision to the value inputted
	CurrentPrecision = currentPrec;		//set the current precision to the value inputted
	MaxResistance = maxOhms;			//set the max resistance value to the resistance inputted
	ResistancePrecision = ohmsPrec;		//set the resistance precision to the value inputted

	/*use setters and getts to get set the Model_Name, number of ports, and the quantity. The setters/getters come from the base*/
}

void multimeter::displayStats() {
	cout << *this;
	cout << "Max Voltage: " << this -> maxVoltage << endl;
	cout << "Max Current: " << this -> maxCurrent << endl;
	cout << "Votlage Precision: " << this -> VoltagePrecision << endl;
	cout << "Current Precision: " << this -> CurrentPrecision << endl;
	cout << "Max Resistance: " << this -> MaxResistance << endl;
	cout << "Resistance Precision: " << this -> ResistancePrecision << endl;
}
