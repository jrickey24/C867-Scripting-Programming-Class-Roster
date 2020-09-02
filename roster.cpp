#include <stdio.h>
#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>
#include "roster.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"
using namespace std;



Roster::Roster() {}



void Roster::add(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram) {


	int daysInCourse[3] =

	{ daysInCourse1, daysInCourse2, daysInCourse3 };

	

	Student *thisStudent = nullptr;

	


	switch (degreeProgram) {


	 case NETWORK:

			thisStudent = new NetworkStudent(studentID, firstName, lastName, emailAdd, studentAge, daysInCourse, degreeProgram);

			break;

	 case SECURITY:

		thisStudent = new SecurityStudent(studentID, firstName, lastName, emailAdd, studentAge, daysInCourse, degreeProgram);

			break;

	 case SOFTWARE:

		thisStudent = new SoftwareStudent(studentID, firstName, lastName, emailAdd, studentAge, daysInCourse, degreeProgram);

			break;
	}
        	for (int i = 0; i < 5; ++i) {

				if (classRosterArray[i] == nullptr) {

					classRosterArray[i] = thisStudent;

					break;
				}
			}	
}

	

void Roster::printAll() {


	cout << "Displaying Entire Class Roster: " << '\n';


	for (int i = 0; i < 5; ++i) {

		if (classRosterArray[i] != nullptr) {

			classRosterArray[i]->print();		  
		}

	}

	cout << '\n';
}


void Roster::printInvalidEmails() {

	string emailAdd;

	cout << "Searching for invalid email addresses:" << endl; 


	for (int i = 0; i < 5; ++i) {

		bool invalid = false;

		emailAdd = classRosterArray[i]->getEmailAdd();


		if (emailAdd.find(' ') != string::npos) {

			invalid = true;

		}

		else if (emailAdd.find('@') == string::npos) {

			invalid = true;

		}

		else if (emailAdd.find('.') == string::npos) {


			invalid = true;

		}

		if (invalid) {

			cout << "Invalid email address found: " << emailAdd << '\t';
			cout << "Associated with Student ID: " << this->classRosterArray[i]->getStudentID();
			cout << endl;
		}
		
	}
}


void Roster::printAverageDaysInCourse(string studentID) {


	for (int i = 0; i < 5; ++i) {     

		if ((*classRosterArray[i]).getStudentID() == studentID) {


			double average =
				  ((classRosterArray[i]->getDaysInCourse())[0]
				+  (classRosterArray[i]->getDaysInCourse())[1]
				+  (classRosterArray[i]->getDaysInCourse())[2])
				/ 3.0;
			
		cout << "Student " << studentID << ": Completes a course every  " << average << " days." << '\n';

		}
	}
}

void Roster::printByDegreeProgram(Degree degreeProgram) {

	cout << '\n';
	cout << "Students listed by degree program: SOFTWARE:" << endl;

	for (int i = 0; i < 5; ++i) {

		if (degreeProgram == this->classRosterArray[i]->getDegreeProgram()) {

			classRosterArray[i]->print();

		
		}	
	}	
}

void Roster::remove(string studentID) {


	bool studentDeleted = false; 

	cout << '\n' << "Searching Class Roster for Student associated with Student ID: " << studentID << '\n';
	


	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {


		if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID) {

			classRosterArray[i] = nullptr; 

			studentDeleted = true;

			cout << "Student with associated Student ID: " << studentID << " found." << endl;
			cout << "Removing Student from Class Roster.";
			cout << endl;

			break;
		}
	}

	if (studentDeleted == false) {

		cout << "Requested Student not found in Class Roster." << '\n';
	}

}




int main() {


	cout << "C867-Scripting & Programming Applications \t" << "\t Written in C++  StudentID: 12345  Jane Doe" << endl;
	cout << endl;
	


	Roster classRoster;

	Degree degreeProgram;

	

	string output, col[PARSED_ELEMENTS];


	for (int i = 0; i < STUDENTS_IN_ROSTER; ++i) {


		istringstream input(studentData[i]);


		for (int j = 0; j < PARSED_ELEMENTS; ++j) {


			getline(input, output, ',');

			col[j] = output;

		}


		switch (col[8][4]) {


		case 'O' :

			degreeProgram = NETWORK;
			
			break; 


		case 'R' :

			degreeProgram = SECURITY; 

			break; 


		case 'W' :

			degreeProgram = SOFTWARE; 

			break;


		default :

			cout << "Invalid degree program." << endl; 

			break; 

		}


	classRoster.add(col[0], col[1], col[2], col[3], stoi(col[4]), stoi(col[5]), stoi(col[6]), stoi(col[7]), degreeProgram);


	}

	classRoster.printAll();

	classRoster.printInvalidEmails();


	cout << '\n';
	cout << "Computing the average number of days taken to complete each course:" << '\n';
	
	for (int i = 0; i < 5; i++) {

		string StudentID = classRoster.classRosterArray[i]->getStudentID();

		classRoster.printAverageDaysInCourse(StudentID);
	}

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.remove("A3");



	system("pause");

	return 0;

}

Roster::~Roster() {}



