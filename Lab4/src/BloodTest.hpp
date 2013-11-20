/*
 * BloodTest.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: rsivahar
 */

#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_
#include <string>

using namespace std;

//Base Class
class BloodTest {
	//These variables are those that are common to all the classes, therefore they are put in the base class.
protected:
string name;
string bloodType;
string gender;

	//These are the functions that will be used in all inherited classes. Therefore, they are are created in the base class.
public:
	//In this constructor, the patient's name, blood type, and gender are asked and recorded.
	BloodTest();
	void display();
	//In this function,the administrator who performed the test/recorded the test states their position, ID number, and any comments they would like to leave.
	void annotation();
};

//This class is inherited from the BloodTest Class, and it contains all the variables and functions needed for a Blood Count test.
//A Blood Count test has various components of blood, and it is a type of Blood test.
class BloodCount: public BloodTest{
	//These are the protected member variables of the class BloodCount. They will be used by the functions in this class.
protected:
	float redbloodcells;
	float whitebloodcells;
	float platelets;
	float hemoglobin;
	float hematocrit;
	float volume;

public:
	BloodCount();
	void bloodTestResults();
};

//This class is inherited from the BloodTest Class, and it contains all the variables and functions needed for a BloodGlucose test.
//A Blood Glucose test is a type of Blood test.
class BloodGlucose: public BloodTest{
protected:
	float results;
public:
	BloodGlucose();
	void bloodGlucoseResults();
};

class Lipoprotein: public BloodTest{
protected:
	float totalCholesterol;
	float hdl;
	float ldl;

public:
	Lipoprotein();
	void lipoproteinResults();
};

#endif /* BLOODTEST_HPP_ */
