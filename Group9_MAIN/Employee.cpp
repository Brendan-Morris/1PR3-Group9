#include "Employee.h"
#include "Worker.h"
#include <iostream>



Employee::Employee() {
	m_EmployeePassword = "";
}

Employee::~Employee() {

}

Employee::Employee(std::string EmpPass, std::string FirstName, std::string LastName, std::string WorkerNumber, WorkerPerformanceReview* WPerfRev) : Worker(FirstName, LastName, WorkerNumber, WPerfRev) {
	m_EmployeePassword = EmpPass;
}

void Employee::ProjectOptions() {
	
}