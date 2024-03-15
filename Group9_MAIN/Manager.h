#pragma once
#include "Worker.h"
#include <string>
#include <iostream>

using namespace std;

class Manager : public Worker
{
private:
	string m_ManagerPassword;
public:
	Manager();
	~Manager();
	Manager(string ManPass);

	void SetManagerPassword(string MP) { m_ManagerPassword = MP; };

	string GetManagerPassword() { return m_ManagerPassword; };

	void Display();

};

