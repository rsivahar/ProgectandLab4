//============================================================================
// Name        : Lab4.cpp
// Author      : Rathai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


//THIS IS A SAMPLE OF HOW THE CHART SYSTEM CAN BE STRUCTURED. ONLY NURSES ARE ALLOWED TO ENTER TEST RESULTS AND GENERATE THE REPORT.
//DOCTORS CAN ONLY ADD AN ANNOTATION AFTER REVIEWING A RESULT. 
#include <iostream>
#include "BloodTest.hpp"
#include "PhysicalTest.hpp"

using namespace std;

int main() {

std::ofstream output2("PatientReport.txt", std::ios_base::out|ios::app);

string name, bloodType;
int choice, testchoice, displaychoice, docChoice;
BloodCount test; BloodGlucose test1; Lipoprotein test2;
VitalSigns test3; UrineTest test4; UrineCulture test5;
char addcomment;


cout << "Electronic Chart Management System" <<endl;
cout <<"--------------------------------------" <<endl;
cout << "Please enter the patient's data" <<endl;
cout << "Enter patient's name:" <<endl;
cin >> name;
cout << "Enter patient's blood type:" <<endl;
cin >> bloodType;

output2 << "Patient's name: " << name << "\t\t";
output2 << "Blood Type: " << bloodType << endl;

while(int loop=1){
	cout << "Please choose from the following options" <<endl;
	cout << "To add a test\t\t\t\t\t1"<<endl;
	cout << "To add an annotation\t\t\t\t2" <<endl;
	cout << "To generate the reports\t\t\t\t3" <<endl;
	cin >> choice;

	switch(choice){
	case 1:
		cout << "What type of test would you like to add:" <<endl;
		cout << "Blood Count Test\t\t\t\t1" <<endl;
		cout << "Blood Glucose Test\t\t\t\t2" <<endl;
		cout << "Lipoprotein Test\t\t\t\t3" <<endl;
		cout << "Vital Signs\t\t\t\t\t4" <<endl;
		cout << "Urine Test\t\t\t\t\t5" <<endl;
		cout << "Urine Culture Test\t\t\t\t6" <<endl;
		cin >>testchoice;

		if (testchoice == 1){
			test.bloodTestResults();
			cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
			cin >> addcomment;
			if (addcomment == 'Y' || addcomment == 'y'){
				test.annotation();
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
			else if (addcomment == 'N' || addcomment =='n'){
				loop=1;
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
		}

		else if (testchoice == 2){
			test1.bloodGlucoseResults();
			cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
			cin >> addcomment;
			if (addcomment == 'Y' || addcomment == 'y'){
				test1.annotation();
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
			else if (addcomment == 'N' || addcomment =='n'){
				loop=1;
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
		}

		else if (testchoice == 3){
			test2.lipoproteinResults();
			cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
			cin >> addcomment;
			if (addcomment == 'Y' || addcomment == 'y'){
				test2.annotation();
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
			else if (addcomment == 'N' || addcomment =='n'){
				loop=1;
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
		}

		else if (testchoice == 4){
			test3.vitalSignsTest();
			cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
			cin >> addcomment;
			if (addcomment == 'Y' || addcomment == 'y'){
				test3.annotation1();
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
			else if (addcomment == 'N' || addcomment =='n'){
				loop=1;
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
		}

		else if (testchoice == 5){
			test4.urineTestResults();
			cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
			cin >> addcomment;
			if (addcomment == 'Y' || addcomment == 'y'){
				test4.annotation1();
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
			else if (addcomment == 'N' || addcomment =='n'){
				loop=1;
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
		}

		else if (testchoice == 6){
			test5.cultureResults();
			cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
			cin >> addcomment;
			if (addcomment == 'Y' || addcomment == 'y'){
				test5.annotation1();
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
			else if (addcomment == 'N' || addcomment =='n'){
				loop=1;
				cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
			}
		}
		break;

	case 2:
		cout << "*********************************************************" <<endl;
		cout << "You must be a doctor to be able to add an annotation here." <<endl;
		cout << "Please enter 1 if you are entering an annotation for Blood Tests" <<endl;
		cout <<	"Please enter 2 if you are entering an annotation for Physical Tests:" <<endl;
		cin >> docChoice;

		if(docChoice==1){
			BloodTest addAnnotation;
			addAnnotation.doctorsannotation();
		}

		else if (docChoice ==2){
			PhysicalTest addAnnotation1;
			addAnnotation1.docannotation();
		}
		break;

	case 3:
		cout << "Which test would you like to display:" <<endl;
		cout << "Blood Count Test\t\t\t\t1" <<endl;
		cout << "Blood Glucose Test\t\t\t\t2" <<endl;
		cout << "Lipoprotein Test\t\t\t\t3" <<endl;
		cout << "Vital Signs\t\t\t\t\t4" <<endl;
		cout << "Urine Test\t\t\t\t\t5" <<endl;
		cout << "Urine Culture Test\t\t\t\t6" <<endl;
		cin >>displaychoice;

		if(displaychoice==1){
			test.bloodCountDisplay();
		}

		else if(displaychoice==2){
			test1.bloodGlucoseDisplay();
		}

		else if(displaychoice==3){
			test2.lipoproteinDisplay();
		}

		else if(displaychoice==4){
			test3.vitalSignsDisplay();
		}

		else if(displaychoice==5){
			test4.urineTestDisplay();
		}

		else if(displaychoice==6){
			test5.cultureDisplay();
		}
		break;
	}
}
}
