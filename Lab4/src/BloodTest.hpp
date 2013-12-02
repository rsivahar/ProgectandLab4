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

//Base Class: This class has variables and functions that are common between all classes that inherit from this one. 
class BloodTest{
protected:
	string gender;
public:
	string member;
	string ID;
	string comment;
    BloodTest(); //This is the constructor for the base class.
    void annotation();//This function allows nurses to add annotations after a test has been added into the system.
    void doctorsannotation();//This function allows doctors to add an annotation after reviewing test results. 
};

//This class is for a Blood Count Test. It inherits from the base class above. 
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
	BloodCount(); //This is the constructor for this class. 
	void bloodTestResults(); //This function asks the user to input the individual test results into the system so that they can be recorded. It then states whether the result is normal or not. 
	void bloodCountDisplay();//This function displays all the results that were entered into the system from the function above. 
};

//This class is for a Blood Glucose Test. It inherits from the base class above.
class BloodGlucose: public BloodTest{
protected:
	float results;
	string condition;
public:
	BloodGlucose();//This is the constructor for this class.
	string bloodGlucoseResults(); //This function asks the user to input the test result into the system so that they can be recorded. It then states whether the result is normal or not.
	void bloodGlucoseDisplay();//This function displays the result that was entered into the system from the function above.
};

//This class is for a Lipoprotein Blood Test. It inherits from the base class above. 
class Lipoprotein: public BloodTest{
protected:
	float totalCholesterol;
	float hdl;
	float ldl;
	string totalDisplay,hdlDisplay,ldlDisplay;

public:
	Lipoprotein();//This is the constructor for this class.
	void lipoproteinResults();//This function asks the user to input the individual test results into the system so that they can be recorded. It then states whether the result is normal or not.
	void lipoproteinDisplay();//This function displays the results that were entered into the system from the function above.
};
};

#endif /* BLOODTEST_HPP_ */
