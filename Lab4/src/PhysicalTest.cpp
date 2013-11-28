/*
 * PhysicalTest.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: rsivahar
 */
#include <iostream>
#include <fstream>
#include "PhysicalTest.hpp"

using namespace std;

std::ofstream output1("PatientReport.txt", std::ios_base::out|ios::app);
PhysicalTest::PhysicalTest() {
}

void PhysicalTest::annotation1(){
	cout << "Hospital Member:" << endl;
	cin >> person;

	cout << "ID:" <<endl;
	cin >> id1;

	cout << "Comments:" << endl;
	cin >> comment1;

}

void PhysicalTest::docannotation(){
	string doctor1, doctorscomment1;

	cout << "Please enter your name" <<endl;
	cin >> doctor1;
	cout << "Please enter your comment:" <<endl;
	cin >> doctorscomment1;
	output1 << "Name: " <<doctor1 <<"\t\t\tComment: " << doctorscomment1 <<endl;
}

VitalSigns::VitalSigns(){
    pulseRate = 0;
    systolic = 0;;
    diastolic = 0;
    temperature = 0;
    respirationRate = 0;

}

void VitalSigns::vitalSignsTest(){
cout << "Enter the pulse rate:" << endl;
cin >> pulseRate;


if(pulseRate < 60){
cout << "Bradycarida"<<endl;
pulsedisplay="BRADYCARIDA";
}
else if (pulseRate >= 60 and pulseRate <= 80){
cout << "Normal"<<endl;
pulsedisplay="NORMAL";
}

else if (pulseRate > 100){
cout << "Tachyardia"<<endl;
pulsedisplay="TACHYARDIA";
}

cout << "Enter the systolic blood pressure:" << endl;
cin >> systolic;
cout << "Enter the diastolic blood pressure:" << endl;
cin >> diastolic;

if(systolic <= 90 and diastolic <= 60 ){
cout << "Low blood pressure" << endl;
bloodpressuredisplay = "LOW BLOOD PRESSURE";
}
else if (systolic > 90 and systolic <=120 and diastolic >60 and diastolic <=80){
cout <<"Ideal blood pressure"<<endl;
bloodpressuredisplay = "IDEAL BLOOD PRESSURE";
}
else if (systolic >120 and systolic <= 140 and diastolic >80 and diastolic <=90){
cout <<"Pre-high blood pressure"<<endl;
bloodpressuredisplay="PRE-HIGH BLOOD PRESSURE";
}
else if (systolic >140 and systolic <=190 and diastolic >90 and diastolic <= 100){
cout << "High blood pressure"<<endl;
bloodpressuredisplay="HIGH BLOOD PRESSURE";
}

cout << "Enter the temperature:" << endl;
cin >> temperature;

if(temperature >37.5 ){
cout << "Fever"<<endl;
temperaturedisplay= "FEVER";
}
else if (temperature <= 37.5 and temperature >= 36.5){
cout << "Normal"<<endl;
temperaturedisplay ="NORMAL";
}
else if (temperature <35.0){
cout << "Hypothermia"<<endl;
temperaturedisplay="HYPOTHERMIA";
}

cout << "Enter the respiration rate:" << endl;
cin >> respirationRate;

if(respirationRate < 18.5){
cout << "Bradypnea"<< endl;
respirationdisplay="BRADYPNEA";
}
else if(respirationRate >= 18.5 and respirationRate <=24.9){
cout << "Normal"<< endl;
respirationdisplay="NORMAL";
}

else if (respirationRate > 24.9){
cout <<"Tachypnea"<< endl;
respirationdisplay ="TACHYPNEA";
}
}

UrineTest::UrineTest(){
   pHvalue=0;
}


void UrineTest::urineTestResults(){


cout << "Enter the pH value:" << endl;
cin >> pHvalue;

if (pHvalue>=4.6 and pHvalue <=8.0){
cout << "Normal" <<endl;
pHvaluedisplay = "NORMAL";
}
else{
cout << "Abnormal" <<endl;
pHvaluedisplay = "ABNORMAL";
}

cout << "For the following tests, please enter N/n if test is negative, and P/p if test is positive." <<endl;
cout << "Enter the protein result:" << endl;
cin >> Protein;

if (Protein == "N" || Protein == "n"){
cout << "Normal"<<endl;
Proteindisplay = "NORMAL";
}
else {
cout << "Abnormal"<<endl;
Proteindisplay = "ABNORMAL";
}

cout << "Enter the sugar result:" << endl;
cin >> Sugar;

if (Sugar == "N" || Sugar == "n"){
cout << "Normal"<<endl;
Sugardisplay ="NORMAL";
}
else {
cout << "Abnormal"<<endl;
Sugardisplay ="ABNORMAL";
}
cout << "Enter the nitrite result:" << endl;
cin >> Nitrite;

if (Nitrite == "N" || Nitrite == "n"){
cout << "Normal"<<endl;
Nitritedisplay ="NORMAL";
}
else {
cout << "Abnormal"<<endl;
Nitritedisplay ="ABNORMAL";
}

cout << "Enter the ketone result:" << endl;
cin >> Ketone;

if (Ketone == "N" || Ketone == "n"){
cout << "Normal"<<endl;
Ketonedisplay = "NORMAL";
}
else {
cout << "Abnormal"<<endl;
Ketonedisplay = "ABNORMAL";
}

cout << "Enter the bilirubin result:" << endl;
cin >> Bilirubin;

if (Bilirubin == "Negative" || Bilirubin == "n"){
cout << "Normal"<<endl;
Bilirubindisplay = "NORMAL";
}
else {
cout << "Abnormal"<<endl;
Bilirubindisplay = "ABNORMAL";
}
cout << "Enter the urobilinogen result:" << endl;
cin >> Urobilinogen;

if (Urobilinogen == "N" || Urobilinogen == "n"){
cout << "Normal"<<endl;
Urobilinogendisplay = "NORMAL";
}
else {
cout << "Abnormal"<<endl;
Urobilinogendisplay = "ABNORMAL";
}

cout << "Enter the red blood cells result:" << endl;
cin >> RedBloodCells;

if (RedBloodCells == "N" || RedBloodCells == "n"){
cout << "Normal"<<endl;
RBCdisplay = "NORMAL";
}
else {
cout << "Abnormal"<<endl;
RBCdisplay = "ABNORMAL";
}

cout << "Enter the white blood cells result:" << endl;
cin >> WhiteBloodCells;

if (WhiteBloodCells == "N" || WhiteBloodCells == "n"){
cout << "Normal"<<endl;
WBCdiplay = "NORMAL";
}
else {
cout << "Abnormal"<<endl;
WBCdiplay = "ABNORMAL";
}
}

void UrineCulture::cultureResults(){

cout << "Enter the size:" << endl;
cin >> size;

cout << "Enter the color:" << endl;
cin >> color;

cout << "Enter the form:" << endl;
cin >> form;

cout << "Please enter N/n if result is normal, and A/a if result is abnormal:"<< endl;
cin >> result;
if (result == "N" || result == "n"){
cout << "Normal"<<endl;
resultdisplay = "NORMAL";
}
else if (result == "A" || result == "a"){
cout << "Abnormal" <<endl;
resultdisplay = "ABNORMAL";
}
}

void UrineCulture::cultureDisplay(){

   output1 << "---------------URINE CULTURE TEST RESULTS---------------"<<endl;
   output1 << "Urine Culture Component\t\tCondition" <<endl;
   output1 << "Size\t\t\t\t"<<size<<"\t\t"<<endl;
   output1 << "Color\t\t\t\t"<<color<<"\t\t"<<endl;
   output1 << "Form\t\t\t\t"<<form<<"\t\t"<<endl;
   output1 << "Result\t\t\t\t"<<resultdisplay<<"\t\t"<<endl;
   output1 << "--------------------------------------------------------"<<endl;
   output1 <<"Hospital Member:" << person <<endl;
   output1 << "ID:" << id1 <<endl;
   output1 << "Comment:" << comment1 <<endl;
   output1 << "--------------------------------------------------------"<<endl;
}

void UrineTest::urineTestDisplay(){

   output1 << "------------------URINE TEST RESULTS-------------------"<<endl;
   output1 << "Urine Component\t\tValue\t\tCondition" <<endl;
   output1 << "pH\t\t\t"<<pHvalue<<"\t\t"<<pHvaluedisplay<<endl;
   output1 << "Protein\t\t\t"<<Protein<<"\t"<<Proteindisplay<<endl;
   output1 << "Sugar\t\t\t"<<Sugar<<"\t"<<Sugardisplay<<endl;
   output1 << "Nitrite\t\t\t"<<Nitrite<<"\t"<<Nitritedisplay<<endl;
   output1 << "Ketone\t\t\t"<<Ketone<<"\t"<<Ketonedisplay<<endl;
   output1 << "Bilirubin\t\t"<<Bilirubin<<"\t"<<Bilirubindisplay<<endl;
   output1 << "Urobilinogen\t\t"<<Urobilinogen<<"\t"<<Urobilinogendisplay<<endl;
   output1 << "RedBloodCells\t\t"<<RedBloodCells<<"\t"<<RBCdisplay<<endl;
   output1 << "WhiteBloodCells\t\t"<<WhiteBloodCells<<"\t"<<WBCdiplay<<endl;
   output1 << "--------------------------------------------------------"<<endl;
   output1 <<"Hospital Member:" << person <<endl;
   output1 << "ID:" << id1 <<endl;
   output1 << "Comment:" << comment1 <<endl;
   output1 << "--------------------------------------------------------"<<endl;

}

void VitalSigns::vitalSignsDisplay(){
   output1 << "------------------VITAL SIGNS RESULTS-------------------"<<endl;
   output1 << "Vital Signs Component\t\tValue\t\tCondition" <<endl;
   output1 << "Pulse Rate\t\t\t"<<pulseRate<<"\t\t"<<pulsedisplay<<endl;
   output1 << "Blood Pressure:"<<"\t\t\t\t\t"<<bloodpressuredisplay<<endl;
   output1 << "Systolic Pressure\t\t"<<systolic<<endl;
   output1 << "Diastolic Pressure\t\t"<<diastolic<<endl;
   output1 << "Temperaturedisplay\t\t"<<temperature<<"\t\t"<<temperaturedisplay<<endl;
   output1 << "Respiration Rate\t\t"<<respirationRate<<"\t\t"<<respirationdisplay<<endl;
   output1 << "--------------------------------------------------------"<<endl;
   output1 <<"Hospital Member:" << person <<endl;
   output1 << "ID:" << id1 <<endl;
   output1 << "Comment:" << comment1 <<endl;
   output1 << "--------------------------------------------------------"<<endl;
}
