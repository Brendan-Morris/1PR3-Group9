#pragma once
#include "Worker.h"
#include <iostream>
#include <string>

using namespace std;

class Employee : public Worker
{
private:
	string m_EmployeePassword;
public:
	Employee();
	~Employee();
	Employee(string EmpPass, string FirstName, string LastName, string WorkerNumber, double HourlyPay);

	void SetEmployeePassword(string EP) { m_EmployeePassword = EP; };

	string GetEmployeePassword() { return m_EmployeePassword; };
};

