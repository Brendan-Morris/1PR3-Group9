#pragma once
#include "Worker.h"
#include "companydata.h"
#include <string>
#include <iostream>

using namespace std;

class Manager : public Worker
{
protected:
	string m_ManagerPassword;
	CompanyData companyData;
	bool isLoggedIn;

public:
	Manager();
	~Manager();
	Manager(string ManPass, string FirstName, string LastName, string WorkerNumber, WorkerPerformanceReview* WorkerPerformaceReview);

	void SetManagerPassword(string MP) { m_ManagerPassword = MP; };

	string GetManagerPassword() { return m_ManagerPassword; };

	void setCompanyData(CompanyData& data) { companyData = data; }
	void displayCompanyOverview();

	void saveCompanyDataToDisk(const string& filename = "2024_company_data.txt");

	bool attemptLogin(const string& enteredPassword) {
		if (enteredPassword == m_ManagerPassword) {
			isLoggedIn = true;
			return true;
		}
		else {
			return false;
		}
	}

	void AddWorkers();
};

