#include "pch.h"
#include "equipment.h"
#include "WaveGen.h"
#include <string>

using namespace std;


WaveGen::WaveGen()
{
	name = "Waveform Generator";
	purpose = "Supply a voltage under either a DC or AC signal out";
	num_ports = 2;
	count = 20;
	measures = false;
	produces = true;
	broken = false;
	max_V = 0;
	max_f = 0;
	V_prec = 0.0;
	f_prec = 0.0;

}

WaveGen::WaveGen(string _name, string _purpose, bool _measures, bool _produces, int _num_ports, int _count, bool _broken)
{
	name = _name;
	purpose = _purpose;
	measures = _measures;
	produces = _produces;
	num_ports = _num_ports;
	count = _count;
	broken = _broken;
	max_V = 0;
	max_f = 0;
	V_prec = 0.0;
	f_prec = 0.0;

}


WaveGen::~WaveGen()
{
}


double WaveGen::get_max_volts() {

	return max_V;					

}

void WaveGen::set_max_voltage(double voltage) {

	max_V = voltage;

}

double WaveGen::get_max_freq() {

	return max_f;

}

void WaveGen::set_max_freq(double frequency) {

	max_f = frequency;

}

double WaveGen::get_volt_precision() {

	return V_prec;

}

void WaveGen::set_volt_precision(double voltP) {

	V_prec = voltP;

}

double WaveGen::get_freq_precision() {

	return f_prec;

}

void WaveGen::set_freq_precision(double freqP) {

	f_prec = freqP;

}

ostream& operator<<(std::ostream& output, WaveGen& object)
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

void WaveGen::displayStats()
{
	cout << *this;
	cout << "Maximum voltage: " << this->max_V << endl;
	cout << "Maximum frequency: " << this->max_f << endl;

	cout << "Precision: " << this->V_prec << endl;
	cout << "Precision: " << this->f_prec << endl;

}