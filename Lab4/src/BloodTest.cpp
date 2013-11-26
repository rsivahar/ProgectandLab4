/*
 *
 * BloodTest.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: Toshiba
 */
#include <iostream>
#include <stdlib.h>
#include "BloodTest.hpp"

using namespace std;

BloodTest::BloodTest() {
}

void BloodTest::annotation(){
	string member;
	string ID;
	string comment;

	cout << "Hospital Member:" << endl;
	cin >> member;

	cout << "ID:" <<endl;
	cin >> ID;

	cout << "Comments:" << endl;
	cin >> comment;
}

BloodCount::BloodCount(){
	redbloodcells = 0;
	whitebloodcells = 0;
	platelets = 0;
	hemoglobin =0;
	hematocrit =0;
	volume=0;
}

void BloodCount::bloodTestResults(){

cout <<"Enter the gender of the patient:" <<endl;
cin >> gender;

cout << "Please enter the total red blood cell count acquired from the test:" <<endl;
cin >> redbloodcells;

if ((gender == "Female") || (gender == "female") || (gender == "F") || (gender == "F")){
	if (redbloodcells >= 4000000 && redbloodcells <=5000000){
		cout << "Red Blood Cell count is NORMAL" <<endl;
		rbcDisplay = "NORMAL";
	}
	else {
		cout << "Red Blood Cell count is NOT NORMAL" <<endl;
		rbcDisplay = "NOT NORMAL";
	}
}

else if ((gender == "Male") || (gender == "male") || (gender == "M") || (gender == "m")){
	if (redbloodcells >= 500000710 && redbloodcells <=6000000){
		cout << "Red Blood Cell count is NORMAL" <<endl;
		rbcDisplay = "NORMAL";
	}
	else {
		cout << "Red Blood Cell count is NOT NORMAL" <<endl;
		rbcDisplay = "NOT NORMAL";
	}
}

cout << "Please enter the total white blood cell count acquired from the test:" <<endl;
cin >> whitebloodcells;

if(whitebloodcells >=4500 && whitebloodcells <= 10000 ){
	cout << "White Blood Cell count is NORMAL" <<endl;
	wbcDisplay = "NORMAL";
}

else {
	cout << "White Blood Cell count is NOT NORMAL" <<endl;
	wbcDisplay = "NOT NORMAL";
}

cout << "Please enter the total platelet count acquired from the test:" <<endl;
cin >> platelets;

if(platelets >= 140000 && platelets <= 450000 ){
	cout << "Platelet count is NORMAL" <<endl;
	pDisplay = "NORMAL";
}

else {
	cout << "Platelet count is NOT NORMAL" <<endl;
	pDisplay = "NOT NORMAL";
}

cout << "Please enter the total hemoglobin count acquired from the test:" <<endl;
cin >> hemoglobin;

if ((gender == "Female") || (gender == "female") || (gender == "F") || (gender == "F")){
	if (hemoglobin >= 12 && hemoglobin <=15){
		cout << "Hemoglobin count is NORMAL" <<endl;
		hemoDisplay = "NORMAL";
	}
	else {
		cout << "Hemoglobin count is NOT NORMAL" <<endl;
		hemoDisplay = "NOT NORMAL";
	}
}

else if ((gender == "Male") || (gender == "male") || (gender == "M") || (gender == "m")){
	if (hemoglobin >= 14 && hemoglobin <= 17){
		cout << "Hemoglobin count is NORMAL" <<endl;
		hemoDisplay = "NORMAL";
	}
	else {
		cout << "Hemoglobin count is NOT NORMAL" <<endl;
		hemoDisplay = "NOT NORMAL";
	}
}

cout << "Please enter the total hematocrit count acquired from the test:" <<endl;
cin >> hematocrit;

if ((gender == "Female") || (gender == "female") || (gender == "F") || (gender == "F")){
	if (hematocrit >= 12 && hematocrit <=15){
		cout << "Hematocrit count is NORMAL" <<endl;
		hDisplay = "NORMAL";
	}
	else {
		cout << "Hematocrit count is NOT NORMAL" <<endl;
		hDisplay = "NOT NORMAL";
	}
}

else if ((gender == "Male") || (gender == "male") || (gender == "M") || (gender == "m")){
	if (hematocrit >= 14 && hematocrit <= 17){
		cout << "Hematocrit count is NORMAL" <<endl;
		hDisplay = "NORMAL";
	}
	else {
		cout << "Hematocrit count is NOT NORMAL" <<endl;
		hDisplay = "NOT NORMAL";
	}
}

cout << "Please enter the mean corpuscular volume acquired from the test:" <<endl;
cin >> volume;

if(volume >= 80 && volume <= 95 ){
	cout << "Mean Corpuscular Volume is NORMAL" <<endl;
	vDisplay = "NORMAL";
}
else {
	cout << "Mean Corpuscular Volume is NOT NORMAL" <<endl;
	vDisplay = "NOT NORMAL";
}
}

void BloodCount::bloodCountDisplay(){
	cout << "----------------BLOOD COUNT TEST RESULTS----------------"<<endl;
	cout << "Blood Component\t\tValue\t\tCondition" <<endl;
	cout << "Red Blood Cells\t\t"<<redbloodcells<<"\t\t"<<rbcDisplay<<endl;
	cout << "White Blood Cells\t"<<whitebloodcells<<"\t\t"<<wbcDisplay<<endl;
	cout << "Platelets\t\t"<<platelets<<"\t\t"<<pDisplay<<endl;
	cout << "Hemoglobin\t\t"<<hemoglobin<<"\t\t"<<hemoDisplay<<endl;
	cout << "Hematocrit\t\t"<<hematocrit<<"\t\t"<<hDisplay<<endl;
	cout << "Mean Corpuscular Volume\t"<<volume<<"\t\t"<<vDisplay<<endl;
	cout << "--------------------------------------------------------"<<endl;
}

BloodGlucose::BloodGlucose(){
results =0;
}

string BloodGlucose::bloodGlucoseResults(){
cout << "Please enter the blood glucose results:" <<endl;
cin >> results;

while(results<70 ||results>127){
	cout << "Invalid value, please enter another value!"<<endl;
	cin >> results;
}

if (results>=70 && results<=99){
	condition = "Normal";
}

else if (results>=100 && results<=125){
	condition = "Prediabetes";
}

else if (results>=126){
	condition = "Diabetes";
}
cout <<condition <<endl;

return condition;
}

void BloodGlucose::bloodGlucoseDisplay(){
	cout << "----------------BLOOD GLUCOSE TEST RESULTS----------------"<<endl;
	cout <<"Blood Glucose Level\t\tCondition" <<endl;
	cout << results << "\t\t\t\t"<<condition <<endl;
	cout << "----------------------------------------------------------"<<endl;
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
	totalDisplay = "DESIRABLE";
}
if (totalCholesterol >=200 && totalCholesterol <=239){
	cout << "The total cholesterol level is: BORDERLINE HIGH" <<endl;
	totalDisplay = "BORDERLINE HIGH";
}
if (totalCholesterol >=240){
	cout << "The total cholesterol level is: HIGH" <<endl;
	totalDisplay = "HIGH";
}

cout << "Please enter the HDL cholesterol level acquired from the test:" <<endl;
cin >> hdl;

if (hdl<40){
	cout << "The HDL cholesterol level indicates that the patient is AT RISK FOR HEART DISEASE" <<endl;
	hdlDisplay = "AT RISK FOR HEART DISEASE";
}
if (hdl>=40 && hdl<=59){
	cout << "The HDL cholesterol level indicates that the patient HDL level SHOULD BE HIGHER"<< endl;
	hdlDisplay = "SHOULD BE HIGHER";
}
if (hdl>=60){
	cout << "The HDL cholesterol level indicates that the patient is in GOOD CONDITION" <<endl;
	hdlDisplay = "GOOD CONDITION";
}

cout << "Please enter the LDL cholesterol level acquired from the test:" <<endl;
cin >> ldl;

if (ldl<100){
	cout << "The LDL cholesterol level is: OPTIMAL" <<endl;
	ldlDisplay = "OPTIMAL";
}
if (ldl>=100 && ldl<=129){
	cout << "The LDL cholesterol level is: NEAR OPTIMAL/ABOVE OPTIMAL" <<endl;
	ldlDisplay = "NEAR OPTIMAL/ABOVE OPTIMAL";
}
if (ldl>=130 && ldl<=159){
	cout << "The LDL cholesterol level is: BORDERLINE HIGH" <<endl;
	ldlDisplay = "BORDERLINE HIGH";
}
if (ldl>=160 && ldl<=189){
	cout << "The LDL cholesterol level is: HIGH" <<endl;
	ldlDisplay = "HIGH";
}
if (ldl>=190){
	cout << "The LDL cholesterol level is: VERY HIGH" <<endl;
	ldlDisplay = "VERY HIGH";
}
}

void Lipoprotein::lipoproteinDisplay(){
	cout << "--------------------- LIPOPROTEIN TEST RESULTS ---------------------" <<endl;
	cout << "Lipoprotein\t\tValue\t\tCondition" <<endl;
	cout << "Total Cholesterol\t"<<totalCholesterol<<"\t\t"<<totalDisplay<<endl;
	cout << "HDL\t\t\t"<<hdl<<"\t\t"<<hdlDisplay<<endl;
	cout << "LDL\t\t\t"<<ldl<<"\t\t"<<ldlDisplay<<endl;
	cout << "---------------------------------------------- ---------------------" <<endl;
}
