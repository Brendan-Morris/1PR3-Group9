#include "Manager.h"
#include "Worker.h"
#include <iostream>

using namespace std;

Manager::Manager() {
	m_ManagerPassword = "";
}

Manager::~Manager() {

}

Manager::Manager(string ManPass, string FirstName, string LastName, string WorkerNumber, double HourlyPay) : Worker(FirstName, LastName, WorkerNumber, HourlyPay) {
	m_ManagerPassword = ManPass;
}

void Manager::Display() {
	cout << "Successfully signed into MANAGER account" << endl;
	cout << "NAME: " << Worker::GetFirstName() << " " << Worker::GetLastName() << endl;
	cout << "EMPLOYEE NUMBER: " << Worker::GetWorkerNumber();
}