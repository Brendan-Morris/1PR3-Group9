#pragma once
#include "Worker.h"
#include <string>
#include <iostream>

using namespace std;

class Supervisor : public Worker
{
private:
	string m_SupervisorPassword;
public:
	Supervisor();
	~Supervisor();
	Supervisor(string SupPass, string FirstName, string LastName, string WorkerNumber, WorkerPerformanceReview* WorkerPerformanceReview);

	void ProjectOptions();
};

