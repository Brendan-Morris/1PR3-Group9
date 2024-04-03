#include "Intern.h"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(std::string InternPass, std::string FirstName, std::string LastName, std::string WorkerNumber, WorkerPerformanceReview* WPerfRev) :Worker(FirstName, LastName, WorkerNumber, WPerfRev) {
	m_InternPassword = InternPass;
	m_FirstName = FirstName;
	m_LastName = LastName;
	m_WorkerNumber = WorkerNumber;
	this->worker_performance_review = WPerfRev;
}

void Intern::ProjectOptions() {

}