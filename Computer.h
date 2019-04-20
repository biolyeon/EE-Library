#include "equipment.h"
#include <iostream>
#include "pch.h"
#include <string>

using namespace std;

class Computer :
	public equipment
{

protected:

	string RES;
	double RAM;
	double MEM;
	bool SW;
	string OS;

public:
	Computer();
	Computer(string _name, string _purpose, bool _measures, bool _produces, int _num_ports, int _count, bool _broken);
	~Computer();

	string resolution();
	void newRES(string);

	double ram();
	void newRAM(double);

	double storage();
	void newSpace(double);

	bool software();
	void hasSoftware(bool);

	string operating_system();
	void newOS(string);

	friend::ostream& operator<< (ostream& out, Computer &object);

	virtual void displayStats();

};

