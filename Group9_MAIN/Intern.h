#pragma once
#include "Worker.h"
#include <iostream>
#include <string>

using namespace std;

class Intern : public Worker
{
private:
	string m_InternPassword;
public:
	Intern();
	~Intern();
	Intern(string InternPass, string FirstName, string LastName, string WorkerNumber, WorkerPerformanceReview* WorkerPerformanceReview);

	void ProjectOptions();
};

