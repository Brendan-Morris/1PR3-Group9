#pragma once
#include "Worker.h"
#include <string>
#include <iostream>

class Supervisor : public Worker
{
private:
	std::string m_SupervisorPassword;
public:
	Supervisor();
	~Supervisor();
	Supervisor(std::string SupPass, std::string FirstName, std::string LastName, std::string WorkerNumber, WorkerPerformanceReview* WorkerPerformanceReview);

	void ProjectOptions();
};

