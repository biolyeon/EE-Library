#include "equipment.h"
#include <iostream>
#include "pch.h"
#include <string>

using namespace std;

class WaveGen :
	public equipment
{
protected:
	double max_V;
	double max_f;
	double V_prec;
	double f_prec;

public:
	WaveGen();

	WaveGen(string name, string purpose, bool measures, bool produces, int num_ports, int count, bool broken);

	~WaveGen();

	double get_max_volts();
	void set_max_voltage(double);
	
	double get_max_freq();
	void set_max_freq(double);

	double get_volt_precision();
	void set_volt_precision(double);

	double get_freq_precision();
	void set_freq_precision(double);

	friend::ostream& operator<< (ostream& out, WaveGen &object);

	virtual void displayStats();

};

