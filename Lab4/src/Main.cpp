//============================================================================
// Name        : Lab4.cpp
// Author      : Rathai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "BloodTest.hpp"

int main() {

string name, bloodType;
int choice, testchoice, displaychoice;
BloodCount test;
BloodGlucose test1;
Lipoprotein test2;

cout << "Electronic Chart Management System" <<endl;
cout <<"--------------------------------------" <<endl;
cout << "Please enter the patient's data" <<endl;
cout << "Enter patient's name:" <<endl;
cin >> name;
cout << "Enter patient's blood type:" <<endl;
cin >> bloodType;

while(1){
	cout << "Please choose from the following options" <<endl;
	cout << "To add a test\t\t\t\t\t1"<<endl;
	cout << "To add an annotation\t\t\t\t2"<<endl;
	cout << "To generate the reports\t\t\t\t3" <<endl;
	cin >> choice;

	switch(choice){
	case 1:
		cout << "What type of test would you like to add:" <<endl;
		cout << "Blood Count Test\t\t\t\t1" <<endl;
		cout << "Blood Glucose Test\t\t\t\t2" <<endl;
		cout << "Lipoprotein Test\t\t\t\t3" <<endl;
		cin >>testchoice;

		if (testchoice == 1){
			test.bloodTestResults();
			test.annotation();
		}

		else if (testchoice == 2){
			test1.bloodGlucoseResults();
			test1.annotation();
		}

		else if (testchoice == 3){
			test2.lipoproteinResults();
			test2.annotation();
		}
		break;

	case 2:
		break;

	case 3:
		cout << "Which test would you like to display:" <<endl;
		cout << "Blood Count Test\t\t\t\t1" <<endl;
		cout << "Blood Glucose Test\t\t\t\t2" <<endl;
		cout << "Lipoprotein Test\t\t\t\t3" <<endl;
		cin >>displaychoice;

		if(displaychoice==1){
			test.bloodCountDisplay();
		}

		else if(displaychoice==2){
			test1.bloodGlucoseDisplay();
		}

		else if(displaychoice==3){
			test2.lipoproteinDisplay();
		}
		break;
	}
}
}
