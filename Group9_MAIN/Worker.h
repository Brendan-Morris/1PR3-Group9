#pragma once
#include <iostream>
#include <string>
#include "WorkerPerformanceReview.h"

class Worker
{
protected:
	std::string m_FirstName;
	std::string m_LastName;
	std::string m_WorkerNumber;
	WorkerPerformanceReview* worker_performance_review;
public:
	Worker();
	~Worker();
	Worker(std::string FirstName, std::string LastName, std::string WorkerNumber, WorkerPerformanceReview* WorkerPerformanceReview);

	std::string GetFirstName() { return m_FirstName; };
	std::string GetLastName() { return m_LastName; };
	std::string GetWorkerNumber() { return m_WorkerNumber; };

	void SetFirstName(std::string FN) { m_FirstName = FN; };
	void SetLastName(std::string LN) { m_LastName = LN; };
	void SetWorkerNumber(std::string WN) { m_WorkerNumber = WN; };

	void virtual ProjectOptions();
};

// Make the text file that has all the info
// Find a way to put that into respective classes
// Make the functions needed to read the respective information 