#include "Supervisor.h"
#include "Worker.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() {
	m_SupervisorPassword = "";
}

Supervisor::~Supervisor() {

}

Supervisor::Supervisor(string SupPass, string FirstName, string LastName, string WorkerNumber, WorkerPerformanceReview* WPerfRev) : Worker(FirstName, LastName, WorkerNumber, WPerfRev) {
	m_SupervisorPassword = SupPass;
	m_FirstName = FirstName;
	m_LastName = LastName;
	m_WorkerNumber = WorkerNumber;

	this->worker_performance_review = WPerfRev;
}