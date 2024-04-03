#include "Intern.h"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(string InternPass, string FirstName, string LastName, string WorkerNumber, WorkerPerformanceReview* WPerfRev) :Worker(FirstName, LastName, WorkerNumber, WPerfRev) {
	m_InternPassword = InternPass;
	m_FirstName = FirstName;
	m_LastName = LastName;
	m_WorkerNumber = WorkerNumber;
	this->worker_performance_review = WPerfRev;
}

void Intern::ProjectOptions() {

}