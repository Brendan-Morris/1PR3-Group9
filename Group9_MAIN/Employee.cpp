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

void Employee::Display() {
	cout << "Successfully signed into EMPLOYEE account" << endl; 
	cout << "NAME: " << Worker::GetFirstName() << " " << Worker::GetLastName() << endl;
	cout << "EMPLOYEE NUMBER: " << Worker::GetWorkerNumber() << endl;
}