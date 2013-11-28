//============================================================================
// Name        : Lab4.cpp
// Author      : Rathai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BloodTest.hpp"
#include "PhysicalTest.hpp"

using namespace std;

int main() {

std::ofstream output2("example.txt", std::ios_base::out|ios::app);
string name, bloodType;
int choice, testchoice, displaychoice;
BloodCount test;
BloodGlucose test1;
Lipoprotein test2;
VitalSigns test3;
UrineTest test4;
UrineCulture test5;

cout << "Electronic Chart Management System" <<endl;
cout <<"--------------------------------------" <<endl;
cout << "Please enter the patient's data" <<endl;
cout << "Enter patient's name:" <<endl;
cin >> name;
cout << "Enter patient's blood type:" <<endl;
cin >> bloodType;

output2 << "Patient's name: " << name << "\t\t";
output2 << "Blood Type: " << bloodType << endl;

while(1){
	cout << "Please choose from the following options" <<endl;
	cout << "To add a test\t\t\t\t\t1"<<endl;
	cout << "To generate the reports\t\t\t\t2" <<endl;
	cin >> choice;

	switch(choice){
	case 1:
		cout << "What type of test would you like to add:" <<endl;
		cout << "Blood Count Test\t\t\t\t1" <<endl;
		cout << "Blood Glucose Test\t\t\t\t2" <<endl;
		cout << "Lipoprotein Test\t\t\t\t3" <<endl;
		cout << "Vital Signs\t\t\t\t\t4" <<endl;
		cout << "Urine Test\t\t\t\t\t5" <<endl;
		cout << "Urine Culture Test\t\t\t\t6" <<endl;
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

		else if (testchoice == 4){
			test3.vitalSignsTest();
			test3.annotation1();
		}

		else if (testchoice == 5){
			test4.urineTestResults();
			test4.annotation1();
		}

		else if (testchoice == 6){
			test5.cultureResults();
			test5.annotation1();
		}
		break;

	case 2:
		cout << "Which test would you like to display:" <<endl;
		cout << "Blood Count Test\t\t\t\t1" <<endl;
		cout << "Blood Glucose Test\t\t\t\t2" <<endl;
		cout << "Lipoprotein Test\t\t\t\t3" <<endl;
		cout << "Vital Signs\t\t\t\t\t4" <<endl;
		cout << "Urine Test\t\t\t\t\t5" <<endl;
		cout << "Urine Culture Test\t\t\t\t6" <<endl;
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

		else if(displaychoice==4){
			test3.vitalSignsDisplay();
		}

		else if(displaychoice==5){
			test4.urineTestDisplay();
		}

		else if(displaychoice==6){
			test5.cultureDisplay();
		}
		break;
	}
}
}
