
#pragma once
#include <iostream>
#include <string.h>
#include <string>
#include "equipment.h"

using std::string;

class multimeter: public equipment{
public:
	
	/*declare friend functions*/
	friend::ostream& operator<< (ostream& out, multimeter &object);

	/*make the setters and getters for the protected data in the base class*/
	/*void setNumber(int number);					//set number in the base class
	void setPorts(int ports);					//set ports in the base class
	void setBroken(bool broker);				//set broken in the base class
	void setTakesInputs(bool takesInputs);		//set TakesInputs in the base class
	void setOutputs(bool outputs);				//set outputs in the base class
	void setPurpose(string purpose);			//set purpose in the base class
	void setName(string nambe);					//set name in the base class
	
	int  getNumber();							//get number in the base class
	int  getPorts();							//get ports in the base class
	bool getBroken();							//get broken in the base class
	bool getTakesInputs();						//get TakesInputs in the base class
	bool getOutputs();							//get outputs in the base class
	string getPurpose();						//get purpose in the base class
	string getName();	*/						//get name in the base class
	//I don't think I need these because I can use the setters and getters from the base class
	
	/*make the setters and getters specific for the multimeter class*/
	void setMaxVolts(double voltage);	
	void setMaxCurrent(double current);
	void setVoltagePrecision(double precision);
	void setCurrentPrecision(double precision);
	void setMaxResistance(double ohms);
	void setResistancePrecision(double ohms);
	
	double getMaxVolts();	
	double getMaxCurrent();
	double getVoltagePrecision();
	double getCurrentPrecision();
	double getMaxResistance();
	double getResistancePrecision();
	
	/*make the virtual function to display the stats*/
	virtual void displayStats();
	
	/*make the constructor (no default)*/
	multimeter(double mVoltage, double mCurrent, double voltagePrec, double currentPrec, double maxOhms, double ohmsPrec);
	
	
private:
	/*declare all of the variables privately*/
	double maxVoltage;				//store the value of the max voltage
	double maxCurrent;				//store the value of the max current
	double VoltagePrecision;		//store the value of the precision of the volt meter
	double CurrentPrecision;		//store the value of the precision of the current meter (I don't think this is a thing)
	double MaxResistance;			//store the value of the max resistance the device can measure
	double ResistancePrecision;	//store the value of the precision of the ohmmeter
};