/*
 *
 * BloodTest.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: Toshiba
 */
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "BloodTest.hpp"

using namespace std;

std::ofstream output("PatientReport.txt", std::ios_base::out|ios::app); //This allows certain functions to output the results to a text document. 

//Constructor of base class
BloodTest::BloodTest() {
}

//This function, from the base class, asks the user (suspected to be a nurse) to enter their details.  
void BloodTest::annotation(){
	cout << "Hospital Member:" << endl;
	cin >> member;

	cout << "ID:" <<endl;
	cin >> ID;

	cout << "Comments:" << endl;
	cin >> comment;

}

//This fucntion, from the base class, asks the doctor to enter their details into the system. 
void BloodTest::doctorsannotation(){
	string doctor, doctorscomment;

	cout << "Please enter your name" <<endl;
	cin >> doctor;
	cout << "Please enter your comment:" <<endl;
	cin >> doctorscomment;
	output << "Name: " <<doctor <<"\t\t\tComment: " << doctorscomment <<endl;
}

//This is the constructor for the BloodCount class
BloodCount::BloodCount(){
	redbloodcells = 0;
	whitebloodcells = 0;
	platelets = 0;
	hemoglobin =0;
	hematocrit =0;
	volume=0;
}

//This is a function from the BloodCount class, that asks the user to input the results from a blood count test. 
//It then checks whether the result entered is normal or not, and displays the outcome. 
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

//This function is from the BloodCount class and displays the results as a organized chart when the user wants to generate a report of the results.
void BloodCount::bloodCountDisplay(){
	output << "---------------BLOOD COUNT TEST RESULTS---------------"<<endl;
	output << "Blood Component\t\tValue\t\t\tCondition" <<endl;
	output << "Red Blood Cells\t\t"<<redbloodcells<<"\t\t"<<rbcDisplay<<endl;
	output << "White Blood Cells\t"<<whitebloodcells<<"\t\t"<<wbcDisplay<<endl;
	output << "Platelets\t\t"<<platelets<<"\t\t"<<pDisplay<<endl;
	output << "Hemoglobin\t\t"<<hemoglobin<<"\t\t"<<hemoDisplay<<endl;
	output << "Hematocrit\t\t"<<hematocrit<<"\t\t"<<hDisplay<<endl;
	output << "Mean Corpuscular Volume\t"<<volume<<"\t\t"<<vDisplay<<endl;
	output <<"Hospital Member:" << member <<endl;
	output << "ID:" << ID <<endl;
	output << "Comment:" << comment <<endl;
	output << "--------------------------------------------------------"<<endl;

}

//This is the constructor for the BloodGlucose class. 
BloodGlucose::BloodGlucose(){
results =0;
}

//This function in the BloodGlucose class asks the user to enter the results from a blood glucose test.
//It then displays the condition of the entered amount to the user. 
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

//This function displays the results of the function above in an organized chart when the user wants to generate a report of the results.
void BloodGlucose::bloodGlucoseDisplay(){
	output << "----------------BLOOD GLUCOSE TEST RESULTS----------------"<<endl;
	output <<"Blood Glucose Level\t\tCondition" <<endl;
	output << results << "\t\t\t\t"<<condition <<endl;
	output << "----------------------------------------------------------"<<endl;
	output <<"Hospital Member:" << member <<endl;
	output << "ID:" << ID <<endl;
	output << "Comment:" << comment <<endl;
	output << "--------------------------------------------------------"<<endl;
}

//This is the constructor for the Lipoprotein class. 
Lipoprotein::Lipoprotein(){
	totalCholesterol = 0;
	hdl = 0;
	ldl = 0;
}

//This is a function from the Lipoprotein class, that asks the user to input the results from a blood lipoprotein test. 
//It then checks whether the result entered is normal or not, and displays the outcome. 
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

//This function displays the results entered in a liprotein test in an organized chart when the user wants to generate a report of the results. 
void Lipoprotein::lipoproteinDisplay(){
	output << "--------------------- LIPOPROTEIN TEST RESULTS ---------------------" <<endl;
	output << "Lipoprotein\t\tValue\t\tCondition" <<endl;
	output << "Total Cholesterol\t"<<totalCholesterol<<"\t\t"<<totalDisplay<<endl;
	output << "HDL\t\t\t"<<hdl<<"\t\t"<<hdlDisplay<<endl;
	output << "LDL\t\t\t"<<ldl<<"\t\t"<<ldlDisplay<<endl;
	output << "---------------------------------------------- ---------------------" <<endl;
	output <<"Hospital Member:" << member <<endl;
	output << "ID:" << ID <<endl;
	output << "Comment:" << comment <<endl;
	output << "--------------------------------------------------------"<<endl;
}
