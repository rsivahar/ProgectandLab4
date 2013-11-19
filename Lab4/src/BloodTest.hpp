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

class BloodTest {
protected:
string name;
string bloodType;
string gender;

public:
	BloodTest();
	void display();
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

public:
	BloodCount();
	void bloodTestResults();
};

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
