#pragma once
#include "Worker.h"
#include <iostream>
#include <string>

class Employee : public Worker
{
private:
	std::string m_EmployeePassword;
public:
	Employee();
	~Employee();
	Employee(std::string EmpPass, std::string FirstName, std::string LastName, std::string WorkerNumber, WorkerPerformanceReview* WorkerPerformanceReview);

	void ProjectOptions();
};

