#include "Manager.h"
#include "Worker.h"
#include <iostream>

using namespace std;

Manager::Manager() {
	m_ManagerPassword = "";
}

Manager::~Manager() {

}

Manager::Manager(string ManPass) {
	m_ManagerPassword = ManPass;
}

void Manager::Display() {
	cout << "Successfully signed into MANAGER account" << endl;
	cout << "NAME: " << Worker::GetFirstName() << " " << Worker::GetLastName() << endl;
	cout << "EMPLOYEE NUMBER: " << Worker::GetWorkerNumber();
}