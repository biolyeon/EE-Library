#include "pch.h"
#include "NetworkAn.h"


NetworkAn::NetworkAn()
{
		name = "Network Analyzer";
		purpose = "Uses high or low frequencies to measure and analyze circuits with impedance. Low frequency deals with bode plots of circuits (mostly transistors), while high deals with coax cables.";
		num_ports = 2;
		count = 20;
		measures = false;
		produces = true;
		broken = false;
		freq_low = false;
		freq_high = false;

}

NetworkAn::NetworkAn(string _name, string _purpose, bool _measures, bool _produces, int _num_ports, int _count, bool _broken)
{
	name = _name;
	purpose = _purpose;
	measures = _measures;
	produces = _produces;
	num_ports = _num_ports;
	count = _count;
	broken = _broken;
	freq_low = false;
	freq_high = false;

}


NetworkAn::~NetworkAn()
{
}


bool NetworkAn::get_low_freq() {

	return freq_low;

}

void NetworkAn::set_low_freq(bool low) {

	freq_low = low;

}

bool NetworkAn::get_high_freq() {

	return freq_high;

}

void NetworkAn::set_high_freq(bool high) {

	freq_high = high;

}

ostream& operator<< (ostream& out, NetworkAn &object) {

	out << "Name: " << object.getName() << endl;
	out << "Purpose: " << (object.getPurpose()) << endl;
	out << "Measures: " << (object.doesMeasure()) << endl;
	out << "Produces: " << (object.doesProduce()) << endl;
	out << "Number of Ports: " << (object.getNumPorts()) << endl;
	out << "Count present: " << (object.getCount()) << endl;
	out << "Generally broken: " << object.isBroken() << endl;
	return out;

}

void NetworkAn::displayStats() {

	cout << *this;
	cout << "Low Frequency Enable: " << this->freq_low << endl;
	cout << "High Frequency Enable: " << this->freq_high << endl;

}