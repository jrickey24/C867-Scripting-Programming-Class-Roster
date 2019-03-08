#pragma once
#include <string>
#include "degree.h"		
#include <iostream>
using namespace std;



class Student {

protected: 

	string studentID;

	string firstName;

	string lastName;

	string emailAdd;

	int studentAge;

	int* daysInCourse;

	Degree degreeProgram;


public:

	const static int daysInCourseArraySize = 3;

	Student();

	~Student();

	Student(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int* daysInCourse, Degree degreeProgram);

	
	string getStudentID();

	string getFirstName();

	string getLastName();
	                                               // accessors
	string getEmailAdd();

	int getStudentAge();

	int* getDaysInCourse();

	virtual Degree getDegreeProgram() = 0;





	void setStudentID(string studentID);

	void setFirstName(string firstName);

	void setLastName(string lastName);

	void setEmailAdd(string emailAdd);
	                                                    //mutators
	void setStudentAge(int studentAge);

	void setDaysInCourse(int daysInCourse[]);

	virtual void setDegreeProgram(Degree degreeProgram) = 0;

	virtual void print() = 0;
	
};
