#include "Supervisor.h"
#include "Worker.h"
#include <iostream>
#include <string>

Supervisor::Supervisor() {
	m_SupervisorPassword = "";
}

Supervisor::~Supervisor() {

}

Supervisor::Supervisor(std::string SupPass, std::string FirstName, std::string LastName, std::string WorkerNumber, WorkerPerformanceReview* WPerfRev) : Worker(FirstName, LastName, WorkerNumber, WPerfRev) {
	m_SupervisorPassword = SupPass;
	m_FirstName = FirstName;
	m_LastName = LastName;
	m_WorkerNumber = WorkerNumber;

	this->worker_performance_review = WPerfRev;
}