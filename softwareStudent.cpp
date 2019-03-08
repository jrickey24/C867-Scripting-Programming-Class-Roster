#include "softwareStudent.h"
#include <iostream> 
using namespace std;


SoftwareStudent::SoftwareStudent():Student() {

	setDegreeProgram(SOFTWARE);

}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int* daysInCourse, Degree degreeProgram)
 :Student(studentID, firstName, lastName, emailAdd, studentAge, daysInCourse, degreeProgram)
{

	setDegreeProgram(SOFTWARE);

}

Degree SoftwareStudent::getDegreeProgram() {

	return SOFTWARE;

}

void SoftwareStudent::setDegreeProgram(Degree degreeProgram) {

	this->degreeProgram = SOFTWARE;

}


void SoftwareStudent::print() {


	this->Student::print();

	cout << "SOFTWARE" << '\n';

}


SoftwareStudent::~SoftwareStudent() {

	Student::~Student();

	delete this;

};