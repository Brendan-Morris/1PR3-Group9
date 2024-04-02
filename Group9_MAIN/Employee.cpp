#include "Employee.h"
#include "Worker.h"
#include <iostream>

using namespace std;

Employee::Employee() {
	m_EmployeePassword = "";
}

Employee::~Employee() {

}

Employee::Employee(string EmpPass, string FirstName, string LastName, string WorkerNumber, double HourlyPay) : Worker(FirstName, LastName, WorkerNumber, HourlyPay) {
	m_EmployeePassword = EmpPass;
}

void Employee::ProjectOptions() {
	
}