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
	/*cout << "Enter patient's full name:" <<endl;
	cin >> name;
	cout << "Enter patient's blood type:" <<endl;
	cin >> bloodType;
	cout << "Enter patient's gender:" <<endl;
	cin >> gender;*/
}

void BloodTest::annotation(){
	string member, ID, annotation;

	cout << "Hospital Member:" << endl;
	cin >> member;
	cout << "ID:" <<endl;
	cin >> ID;
	cout << "Comments:" << endl;
	cin >> annotation;
}

BloodCount::BloodCount(){
	redbloodcells = 0;
	whitebloodcells = 0;
	platelets = 0;
	hemoglobin =0;
	hematocrit =0;
	volume=0;
}

void BloodCount::bloodCountResults(){
	cout << "Please enter the total red blood cell count acquired from the test:" <<endl;
	cin >> redbloodcells;

	cout << "Please enter the total white blood cell count acquired from the test:" <<endl;
	cin >> whitebloodcells;

	cout << "Please enter the total platelet count acquired from the test:" <<endl;
	cin >> platelets;

	cout << "Please enter the total hemoglobin count acquired from the test:" <<endl;
	cin >> hemoglobin;

	cout << "Please enter the total hematocrit count acquired from the test:" <<endl;
	cin >> hematocrit;

	cout << "Please enter the mean corpuscular volume acquired from the test:" <<endl;
	cin >> volume;
}

BloodGlucose::BloodGlucose(){
	results =0;
}

void BloodGlucose::bloodGlucoseResults(){

	cout << "Please enter the plasma glucose results acquired from the test:" <<endl;
	cin >> results;

	while(results<70 ||results>127){
		cout << "Invalid value, please enter another value!"<<endl;
		cin >> results;
	}
	if (results>=70 && results<=99){
		cout << "Blood Glucose is: NORMAL" <<endl;
	}
	else if (results>=100 && results<=125){
			cout << "Blood Glucose is: PREDIABETES" <<endl;
	}
	else if (results>=126){
			cout <<"Blood Glucose is: DIABETES"<<endl;
	}
	}

Lipoprotein::Lipoprotein(){
	totalCholesterol = 0;
	hdl = 0;
	ldl = 0;
}

void Lipoprotein::lipoproteinResults(){
cout << "Please enter the total cholesterol level acquired from the test:" <<endl;
cin >> totalCholesterol;

	if(totalCholesterol<200){
		cout << "The total cholesterol level is: DESIRABLE" <<endl;
	}

	else if (totalCholesterol >=200 && totalCholesterol <=239){
		cout << "The total cholesterol level is: BOREDERLINE HIGH" <<endl;
	}

	else if (totalCholesterol >=240){
			cout << "The total cholesterol level is: HIGH" <<endl;
	}

cout << "Please enter the HDL cholesterol level acquired from the test:" <<endl;
cin >> hdl;

	if (hdl<40){
		cout << "The HDL cholesterol level indicates that the patient is AT RISK FOR HEART DISEASE" <<endl;
	}
	if (hdl>=40 && hdl<=59){
		cout << "The HDL cholesterol level indicates that the patient HDL level SHOULD BE HIGHER"<< endl;
	}
	if (hdl>=60){
		cout << "The HDL cholesterol level indicates that the patient is in GOOD CONDITION" <<endl;
	}

cout << "Please enter the LDL cholesterol level acquired from the test:" <<endl;
cin >> ldl;

	if (ldl<100){
		cout << "The LDL cholesterol level is: OPTIMAL" <<endl;
	}

	if (ldl>=100 && ldl<=129){
		cout << "The LDL cholesterol level is: NEAR OPTIMAL/ABOVE OPTIMAL" <<endl;
	}

	if (ldl>=130 && ldl<=159){
		cout << "The LDL cholesterol level is: BORDERLINE HIGH" <<endl;
	}

	if (ldl>=160 && ldl<=189){
		cout << "The LDL cholesterol level is: HIGH" <<endl;
	}

	if (ldl>=190){
		cout << "The LDL cholesterol level is: VERY HIGH" <<endl;
	}

}




