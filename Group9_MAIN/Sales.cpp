#include "Sales.h"
#include <iostream>
#include <iomanip>

Sales::Sales()
{
	double m_totalRevenue = 0.0;
	double m_totalExpenses = 0.0;
	double m_operatingExpenses = 0.0;
	double m_profitMargin = 0.0;
	double m_COGS = 0.0;
}

Sales::Sales(const string& depName)
{
	Departments(depName);
	m_totalRevenue = 0.0;
	m_totalExpenses = 0.0;
	m_operatingExpenses = 0.0;
	m_profitMargin = 0.0;
	m_COGS = 0.0;
}

Sales::~Sales()
{

}

//Function to print Sales Summary
void Sales::PrintSalesSummary()
{
	//Print Sales Information
	cout << "---------------------------------------------------------" << endl;
	cout << "DEPARTMENT SUMMARY: " << GetDepName() << endl;
	cout << endl;
	cout << "TOTAL REVENUE: $" << fixed << setprecision(2) << m_totalRevenue << endl;
	cout << "TOTAL EXPENSES: $" << fixed << setprecision(2) << m_totalExpenses << endl;
	cout << "OPERATING EXPENSES: $" << fixed << setprecision(2) << m_operatingExpenses << endl;
	cout << "PROFIT MARGIN: " << fixed << setprecision(2) << m_profitMargin << "%" << endl;
	cout << "COST OF GOODS SOLD (COGS): $" << fixed << setprecision(2) << m_COGS << endl;
	cout << "---------------------------------------------------------" << endl;
	//Print Projects currently assigned to Sales Department
	cout << GetDepName() << "DEPARTMENT PROJECTS:" << endl;
	for (int i = 0; i < GetNumProjects(); i++)
	{
		GetProject()[i].PrintProjectDetails();
	}
	cout << "---------------------------------------------------------" << endl;
	//Print all workers assigned to Sales Department
	cout << "Workers: " << endl;
	for (int i = 0; i < GetNumWorkers(); i++)
	{
		cout << m_Workers[i].GetFirstName() << " " << m_Workers[i].GetLastName() << endl;
		cout << "----------------------------" << endl;
		cout << "Employee Number: " << m_Workers[i].GetWorkerNumber() << endl;
		//cout << "Hourly Pay: " << m_Workers[i].GetWorkerNumber() << endl; (i left this as a comment, as im not sure hourly pay should only be viewed by managers.
		double hours;
		for (int j = 0; j < 365; j++)
		{
			hours += m_Workers[i].GetHoursWorked(j);
		}
		cout << "Hours Worked: " << hours << endl;
		cout << endl;
	}
	cout << "---------------------------------------------------------" << endl;
}

//Function to edit Sales Summary
void Sales::EditSalesSummary()
{
	int option;
	double newDoubleValue; //All changeable variables are double

	cout << "Edit Sales Summary" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "1. Edit Total Revenue" << endl;
	cout << "2. Edit Total Expenses" << endl;
	cout << "3. Edit Operating Expenses" << endl;
	cout << "4. Edit Profit Margin" << endl;
	cout << "5. Edit COGS" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> option;

	//Switch with different cases for each option the user can pick. Each case changes a different variable, option determines which one is executed
	switch (option)
	{
	case 1:
		cout << "Enter the new value for Total Revenue: $";
		cin >> newDoubleValue;
		SetTotalRevenue(newDoubleValue);
		break;
	case 2:
		cout << "Enter the new value for Total Expenses: ";
		cin >> newDoubleValue;
		SetTotalExpenses(newDoubleValue);
		break;
	case 3:
		cout << "Enter the new value for Operating Expenses: $";
		cin >> newDoubleValue;
		SetOperatingExpenses(newDoubleValue);
		break;
	case 4:
		cout << "Enter the new value for Profit Margin (%); ";
		cin >> newDoubleValue;
		SetProfitMargin(newDoubleValue);
		break;
	case 5:
		cout << "Enter the new value for COGS: $ ";
		cin >> newDoubleValue;
		SetCOGS(newDoubleValue);
		break;
		//Error Message in case option isnt between 1-5.
	default:
		cout << "Invalid choice!" << endl;
		break;
	}
}