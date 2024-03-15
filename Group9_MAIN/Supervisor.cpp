#include "Supervisor.h"
#include "Worker.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() {
	m_SupervisorPassword = "";
}

Supervisor::~Supervisor() {

}

Supervisor::Supervisor(string SupPass) {
	m_SupervisorPassword = SupPass;
}

void Supervisor::Display() {
	cout << "Successfully signed into SUPERVISOR account" << endl;
	cout << "NAME: " << Worker::GetFirstName() << " " << Worker::GetLastName() << endl;
	cout << "EMPLOYEE NUMBER: " << Worker::GetWorkerNumber();
}