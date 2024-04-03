#include "Worker.h"
#include <iostream>

Worker::Worker() {
	m_FirstName = "";
	m_LastName = "";
	m_WorkerNumber = "";
}

Worker::~Worker() {

}

Worker::Worker(std::string FirstName, std::string LastName, std::string WorkerNumber, WorkerPerformanceReview* WPerfRev) {
	m_FirstName = FirstName;
	m_LastName = LastName;
	m_WorkerNumber = WorkerNumber;
	worker_performance_review = WPerfRev;
}