/*
 * PhysicalTest.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: rsivahar
 */

#ifndef PHYSICALTEST_HPP_
#define PHYSICALTEST_HPP_
#include <fstream>
#include <string>

using namespace std;

class PhysicalTest {
protected:

public:
	string person;
	string id1;
	string comment1;
    PhysicalTest();
    void annotation1();
};

class VitalSigns : public PhysicalTest{
protected:
    int pulseRate;
    int systolic;
    int diastolic;
    float temperature;
    int respirationRate;
    string pulsedisplay, bloodpressuredisplay, temperaturedisplay, respirationdisplay;
public:
    VitalSigns();
    void vitalSignsTest();
    void vitalSignsDisplay();
};

class UrineTest : public PhysicalTest{
protected:
    float pHvalue;
string Protein;
string Sugar;
string Nitrite;
string Ketone;
string Bilirubin;
string Urobilinogen;
string RedBloodCells;
string WhiteBloodCells;
string pHvaluedisplay, Proteindisplay, Sugardisplay, Nitritedisplay, Ketonedisplay, Bilirubindisplay, Urobilinogendisplay, RBCdisplay, WBCdiplay;
public:
UrineTest();
void urineTestResults();
void urineTestDisplay();
};

class UrineCulture : public PhysicalTest{
protected:
    string size;
    string color;
    string form;
    string result;
    string resultdisplay;
public:
    void cultureResults();
    void cultureDisplay();
};

#endif /* PHYSICALTEST_HPP_ */
