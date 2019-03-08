#pragma once
#include <string>
#include "degree.h"
#include "student.h"
using namespace std; 


class SecurityStudent : public Student {

	

public:


	SecurityStudent();


	SecurityStudent(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int* daysInCourse, Degree degreeProgram);


	Degree getDegreeProgram();


	void setDegreeProgram(Degree degreeProgram);


	void print();


	~SecurityStudent();
	
};
