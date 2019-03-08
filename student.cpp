#include "student.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



Student::Student() {

	this->studentID = "";

	this->firstName = "";

	this->lastName = "";

	this->emailAdd = "";

	this->studentAge = 0;

	this->daysInCourse = new int[daysInCourseArraySize];

	for (int i = 0; i < 3; ++i) this->daysInCourse[i] = 0;

}


Student::Student(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int* daysInCourse, Degree degreeProgram) {

	this->studentID = studentID;

	this->firstName = firstName;

	this->lastName = lastName;

	this->emailAdd = emailAdd;

	this->studentAge = studentAge;

	this->daysInCourse = new int[daysInCourseArraySize];

	for (int i = 0; i < 3; ++i) this->daysInCourse[i] = daysInCourse[i];

}


string Student::getStudentID() {

	return studentID; 

}


string Student::getFirstName() {

	return firstName;

}

string Student::getLastName() {

	return lastName; 

}

string Student::getEmailAdd() {

	return emailAdd; 

}

int Student::getStudentAge() {

	return studentAge; 

}

int* Student::getDaysInCourse() {

	return this-> daysInCourse;

}

void Student::setStudentID(string studentID) {

	this->studentID = studentID; 

}

void Student::setFirstName(string firstName) {

	this->firstName = firstName;

}

void Student::setLastName(string lastName) {

	this->lastName = lastName;

}

void Student::setEmailAdd(string emailAdd) {

	this->emailAdd = emailAdd;

}

void Student::setStudentAge(int studentAge) {

	this->studentAge = studentAge;

}

void Student::setDaysInCourse(int daysInCourse[]) {

	if (this->daysInCourse != nullptr) {

		delete[] this->daysInCourse;

		this->daysInCourse = nullptr;
	}

	this->daysInCourse = new int[daysInCourseArraySize];

	for (int i = 0; i < 3; ++i)

		this->daysInCourse[i] = daysInCourse[i];
}


void Student::print() {

	int *daysInCourse = getDaysInCourse();

	cout << left << "STUDENT ID: " << getStudentID() << '\t';
	cout << "FIRST NAME: " << getFirstName();
	cout << "\t LAST NAME: " << getLastName();
	cout << "\t AGE: " << getStudentAge();
	cout << "\t DAYS IN COURSE: ";
	cout << daysInCourse[0] << ",";
	cout << daysInCourse[1] << ",";
	cout << daysInCourse[2];
	cout << '\t';
	
}

Student::~Student() {
	
	if (daysInCourse != nullptr) {

        delete[] daysInCourse;

		daysInCourse = nullptr;
	}

}

	