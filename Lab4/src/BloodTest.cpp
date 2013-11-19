/*
 * BloodTest.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: rsivahar
 */
#include <iostream>
#include "BloodTest.hpp"
using namespace std;

BloodTest::BloodTest() {
	// TODO Auto-generated constructor stub
	cout << "Enter patient's name:" <<endl;
	cin >> name; cout <<endl;

	cout << "Enter patient's blood type:" <<endl;
	cin >> bloodType; cout <<endl;

	cout << "Enter patient's gender:" <<endl;
	cin >> gender; cout <<endl;
}

void BloodTest::annotation(){
	string member, ID, annotation;

	cout << "Hospital Member:" << endl;
	cin >> member; cout <<endl;

	cout << "ID:" <<endl;
	cin >> ID; cout <<endl;

	cout << "Comments:" << endl;
	cin >> annotation; cout <<endl;
}

void BloodCount::bloodTestResults(){

}
