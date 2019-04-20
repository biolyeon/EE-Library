#include "equipment.h"
#include <iostream>
#include "pch.h"
#include <string>

using namespace std;

class NetworkAn :
	public equipment
{

protected:
	bool freq_low;
	bool freq_high;

public:
	NetworkAn();

	NetworkAn(string name, string purpose, bool measures, bool produces, int num_ports, int count, bool broken);

	~NetworkAn();

	bool get_low_freq();
	void set_low_freq(bool);

	bool get_high_freq();
	void set_high_freq(bool);

	friend::ostream& operator<< (ostream& out, NetworkAn &object);

	virtual void displayStats();

};

