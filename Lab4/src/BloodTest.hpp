/*
 * BloodTest.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: rsivahar
 */

#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_
#include <string>
#include <ctime>

using namespace std;

//Base Class
class BloodTest{
protected:
	string gender;

public:
	string member;
	string ID;
	string comment;
    BloodTest();
    void annotation();
};

class BloodCount: public BloodTest{
protected:
	float redbloodcells;
	float whitebloodcells;
	float platelets;
	float hemoglobin;
	float hematocrit;
	float volume;
	string rbcDisplay,wbcDisplay, pDisplay, hemoDisplay, hDisplay,vDisplay;

public:
	BloodCount();
	void bloodTestResults();
	void bloodCountDisplay();
};

class BloodGlucose: public BloodTest{
protected:
	float results;
	string condition;
public:
	BloodGlucose();
	string bloodGlucoseResults();
	void bloodGlucoseDisplay();
};

class Lipoprotein: public BloodTest{
protected:
	float totalCholesterol;
	float hdl;
	float ldl;
	string totalDisplay,hdlDisplay,ldlDisplay;

public:
	Lipoprotein();
	void lipoproteinResults();
	void lipoproteinDisplay();
};

#endif /* BLOODTEST_HPP_ */
