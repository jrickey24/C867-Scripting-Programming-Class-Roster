#pragma once
#include <string>
#include "degree.h"
#include "student.h"
using namespace std; 



class NetworkStudent : public Student {


public:


	NetworkStudent();


	NetworkStudent(string studentID, string firstName, string lastName, string emailAdd, int studentAge, int* daysInCourse, Degree degreeProgram);


	Degree getDegreeProgram();


	void setDegreeProgram(Degree degreeProgram);


	void print();


	~NetworkStudent();

};