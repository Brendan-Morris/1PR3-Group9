#include "Worker.h"
#include <iostream>

using namespace std;

Worker::Worker() {
	m_FirstName = "";
	m_LastName = "";
	m_WorkerNumber = "";
}

Worker::~Worker() {

}

Worker::Worker(string FirstName, string LastName, string WorkerNumber, WorkerPerformanceReview* WPerfRev) {
	m_FirstName = FirstName;
	m_LastName = LastName;
	m_WorkerNumber = WorkerNumber;
	worker_performance_review = WPerfRev;
}