#pragma once
#include "Worker.h"
#include <iostream>

class Intern : public Worker
{
private:
	std::string m_InternPassword;
public:
	Intern();
	~Intern();
	Intern(std::string InternPass, std::string FirstName, std::string LastName, std::string WorkerNumber, WorkerPerformanceReview* WorkerPerformanceReview);

	void ProjectOptions();
};

