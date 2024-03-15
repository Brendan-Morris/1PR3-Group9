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
	Supervisor(string SupPass);

	void SetSupervisorPassword(string SP) { m_SupervisorPassword = SP; };

	string GetSupervisorPassword() { return m_SupervisorPassword; };

	void Display();
};

