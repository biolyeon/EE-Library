#pragma once
#include <iostream>
#include <string.h>
#include <iostream>
#include <string>
#include "equipment.h"

using std::string;

class oscilloscope: public equipment{
public:
	/*declare friend functions*/
	friend std::ostream& operator<< (std::ostream& out, oscilloscope &object);
	
	/*make the setters*/
	void setChannels(int setChannels);		//set the value of the channels
	void setPrecision(double setPrecision);	//set the value of the precision of the device
	void setMemory(int setMemory);			//set the value of the memory of the device
	
	/*make the getters*/
	int getChannels();						//get the number of channels
	double getPrecision();					//get the precision of the device
	int getMemory();						//get the amount of memory for the device
	
	/*make the virtual function to display the stats*/
	virtual void displayStats();
	
	/*make the constructor*/
	oscilloscope(int setChannels, double setPrecision, int setMemory); //there will be values in here, just not yet
	
private:
	/*make the private variables*/
	int channels;
	double precision;
	int memory;

};