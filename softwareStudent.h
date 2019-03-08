#pragma once
#include <string>
#include "degree.h"
#include "student.h"
using namespace std; 


class SoftwareStudent : public Student {


public:


	SoftwareStudent();


	SoftwareStudent(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int* daysInCourse, Degree degreeProgram);


	Degree getDegreeProgram();


	void setDegreeProgram(Degree degreeProgram);


	void print();


	~SoftwareStudent();

};

