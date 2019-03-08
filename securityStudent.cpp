#include "securityStudent.h"
#include <iostream>
using namespace std;



SecurityStudent::SecurityStudent():Student() {

	setDegreeProgram(SECURITY);

}


SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int* daysInCourse, Degree degreeProgram) 
 :Student(studentID, firstName, lastName, emailAdd, studentAge, daysInCourse, degreeProgram) 
{

	setDegreeProgram(SECURITY);

}


Degree SecurityStudent::getDegreeProgram() {


	return SECURITY;

}


void SecurityStudent::setDegreeProgram(Degree degreeProgram) {

	this->degreeProgram = SECURITY;
}


void SecurityStudent::print() {


	this->Student::print();

	cout << "SECURITY" << '\n';

}


SecurityStudent::~SecurityStudent() {

	Student::~Student();

	delete this;

}