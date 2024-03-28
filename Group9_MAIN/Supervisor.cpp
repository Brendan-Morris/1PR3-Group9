#include "Supervisor.h"
#include "Worker.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() {
	m_SupervisorPassword = "";
}

Supervisor::~Supervisor() {

}

Supervisor::Supervisor(string SupPass, string FirstName, string LastName, string WorkerNumber, double HourlyPay) : Worker(FirstName, LastName, WorkerNumber, HourlyPay) {
	m_SupervisorPassword = SupPass;
}