#pragma once
#include "Departments.h"
using namespace std;

class Sales : public Departments
{
private:
	double m_totalRevenue;
	double m_totalExpenses;
	double m_operatingExpenses;
	double m_profitMargin; //This is a percentage
	double m_COGS; //Stands for Cost of Goods Sold
public:
	Sales();
	Sales(const string& depName);
	~Sales();

	double GetTotalRevenue() { return m_totalRevenue; };
	double GetTotalExpenses() { return m_totalExpenses; };
	double GetOperatingExpenses() { return m_operatingExpenses; };
	double GetProfitMargin() { return m_profitMargin; };
	double GetCOGS() { return m_COGS; };

	void SetTotalRevenue(double totalRev) {m_totalRevenue = totalRev; };
	void SetTotalExpenses(double totalExp) {m_totalExpenses = totalExp; };
	void SetOperatingExpenses(double opExp) {m_operatingExpenses = opExp; };
	void SetProfitMargin(double profMarg) {m_profitMargin = profMarg; };
	void SetCOGS(double cogs) {m_COGS = cogs; };

	void PrintSalesSummary(); //Prints Sales Summary, a neatly outputted list that contains Sales private variables, projects assigned to the Sales department, and workers currently working in the Sales Department
	void EditSalesSummary(); //Prompts the user to edit one Sales private variable using a menu.

	//ASK AUSTIN IF FUNCTIONS FOR ADDING AND REMOVING SALES EMPLOYEES SHOULD BE MADE HERE
};