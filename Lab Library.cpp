// Lab Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	int choice;
	int abort = 0;
	string equip;
	int lab;

	cout << "---------------------------------" << endl;
	cout << "  Welcome to the EE LAB LIBRARY  " << endl;
	cout << "---------------------------------" << endl;
	
	cout << endl;
	
	while (abort == 0) {
		cout << "Which do you want to do?" << endl;
		cout << " (1) Manual Equipment Search" << endl << " (2) Browse Lab Rooms" << endl;

		cin >> choice;
		switch (choice) {

		case 1:
			while (abort == 0) {
				cout << "Type Equipment: ";
				cin >> equip;
				//Equip object stuff
				cout << "Do you want to continue? (0=Yes, 1=No)  ";
				cin >> abort;
			}
			break;
		
		case 2:
			while (abort == 0) {
				//Display every lab type and labrooms
				cout << "---------------------------------" << endl;
				cout << "			Labs				  " << endl;
				cout << "---------------------------------" << endl;

				cout << endl;

				cout << "General Labs:" << endl;
				cout << "(3170)" << endl << "(3200)" << endl << "(3280)" << endl;

				cout << "Robotics Labs:" << endl;
				//REST OF THE LABS

				cout << "Select Lab Room: ";
				cin >> lab;

				//Function using labroom as argument for calling information
				//Return from function now

				cout << "Do you want to continue? (0=Yes, 1=No)  ";
				cin >> abort;
			}

			break;

		}



		abort == 0;

		cout << "Do you want to end program? (0 = No, 1 = Yes)  ";
		cin >> abort;

	}

}


