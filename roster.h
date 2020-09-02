#pragma once
#include <string>
#include <iostream>
#include "student.h"
#include "degree.h"
using namespace std;



const string studentData[] =

{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,Jane,Doe,jdoe@wgu.edu,29,20,22,20,SOFTWARE" };


static const unsigned int STUDENTS_IN_ROSTER = sizeof(studentData)/sizeof(studentData[0]);

static const unsigned int PARSED_ELEMENTS = 9;



class Roster {


public:


	Roster();


	void add(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);


	void printAll(); 


	void printAverageDaysInCourse(string studentID);


	void printInvalidEmails();


	void printByDegreeProgram(Degree degreeProgram);


	void remove(string studentID);


	Student *classRosterArray[STUDENTS_IN_ROSTER] = { nullptr, nullptr, nullptr, nullptr, nullptr };
	

	~Roster();

};



