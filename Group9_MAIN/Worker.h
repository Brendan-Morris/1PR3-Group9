#pragma once
#include <iostream>
#include <string>
#include "WorkerPerformanceReview.h"

class Worker
{
protected:
	string m_FirstName;
	string m_LastName;
	string m_WorkerNumber;
	WorkerPerformanceReview* worker_performance_review;
public:
	Worker();
	~Worker();
	Worker(string FirstName, string LastName, string WorkerNumber, WorkerPerformanceReview* WorkerPerformanceReview);

	string GetFirstName() { return m_FirstName; };
	string GetLastName() { return m_LastName; };
	string GetWorkerNumber() { return m_WorkerNumber; };

	void SetFirstName(string FN) { m_FirstName = FN; };
	void SetLastName(string LN) { m_LastName = LN; };
	void SetWorkerNumber(string WN) { m_WorkerNumber = WN; };

	void virtual ProjectOptions();
};

// Make the text file that has all the info
// Find a way to put that into respective classes
// Make the functions needed to read the respective information 