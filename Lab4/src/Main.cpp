/*
 * Main.cpp
 *
 *  Created on: Nov 20, 2013
 *      Author: rsivahar
 */
#include <iostream>
#include "BloodTest.hpp"

using namespace std;

int main()
{

string name, gender, bloodtype;

cout << "Please enter full name of patient:" <<endl;
cin >> name;

cout << "Enter the gender of patient:" <<endl;
cin >> gender;

cout << "Enter blood type of patient:" <<endl;
cin >> bloodtype;

BloodCount test;
test.bloodCountResults();
test.annotation();

BloodGlucose test1;
test1.bloodGlucoseResults();
test1.annotation();


return 0;
}



