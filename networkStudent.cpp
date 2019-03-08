#include "networkStudent.h"
#include <iostream>
using namespace std;


NetworkStudent::NetworkStudent():Student() {

	setDegreeProgram(NETWORK);

}


NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int* daysInCourse, Degree degreeProgram) 
	:Student(studentID, firstName, lastName, emailAdd, studentAge, daysInCourse, degreeProgram)
{


	setDegreeProgram(NETWORK);


}


Degree NetworkStudent::getDegreeProgram() {


	return NETWORK;

}



void NetworkStudent::setDegreeProgram(Degree degreeProgram) {


	this->degreeProgram = NETWORK;

}



void NetworkStudent::print() {


	this->Student::print();

	cout << "NETWORK" << '\n';

}



NetworkStudent::~NetworkStudent() {

	Student::~Student();

	delete this;

}