#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
protected:
	string m_FirstName;
	string m_LastName;
	string m_WorkerNumber;
	double m_HourlyPay;
	double m_Hours[365];
public:
	Worker();
	~Worker();
	Worker(string FirstName, string LastName, string WorkerNumber, double HourlyPay);

	string GetFirstName() { return m_FirstName; };
	string GetLastName() { return m_LastName; };
	string GetWorkerNumber() { return m_WorkerNumber; };
	double GetHourlyPay() { return m_HourlyPay; };
	double GetHoursWorked(const int i) { return m_Hours[i]; };

	void SetFirstName(string FN) { m_FirstName = FN; };
	void SetLastName(string LN) { m_LastName = LN; };
	void SetWorkerNumber(string WN) { m_WorkerNumber = WN; };
	void SetHourlyPay(double HP) { m_HourlyPay = HP; };
	void SetHoursWorked(double Hours, const int i) { m_Hours[i] = Hours; };

	void virtual Display();
};