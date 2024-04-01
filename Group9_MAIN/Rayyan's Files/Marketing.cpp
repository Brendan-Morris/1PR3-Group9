#include "Marketing.h"
#include <iostream>
#include <iomanip>

Marketing::Marketing()
{
	double m_marketingBudget = 0.0;
	double m_numMarketingCampaigns = 0.0;
	double m_advertisingCosts = 0.0;
	double m_marketResearchExpenditure = 0.0;
	double m_conversionRate = 0.0;
}

Marketing::Marketing(const string& depName)
{
	Departments(depName);
	m_marketingBudget = 0.0;
	m_numMarketingCampaigns = 0.0;
	m_advertisingCosts = 0.0;
	m_marketResearchExpenditure = 0.0;
	m_conversionRate = 0.0;
}

Marketing::~Marketing()
{

}

//Function to print Marketing Summary
void Marketing::PrintMarketingSummary()
{
	//Print Marketing Information
	cout << "---------------------------------------------------------" << endl;
	cout << "DEPARTMENT SUMMARY: " << GetDepName() << endl;
	cout << endl;
	cout << "MARKETING BUDGET: $" << fixed << setprecision(2) << m_marketingBudget << endl;
	cout << "NUMBER OF MARKETING CAMPAIGNS: " << fixed << setprecision(2) << m_numMarketingCampaigns << endl;
	cout << "ADVERTISING COSTS: $" << fixed << setprecision(2) << m_advertisingCosts << endl;
	cout << "MARKET RESEARCH EXPENDITURE: $" << fixed << setprecision(2) << m_marketResearchExpenditure << endl;
	cout << "CONVERSION RATE: $" << fixed << setprecision(2) << m_conversionRate << "%" << endl;
	cout << "---------------------------------------------------------" << endl;
	//Print Projects currently assigned to Marketing Department
	cout << GetDepName() << "DEPARTMENT PROJECTS:" << endl;
	for (int i = 0; i < GetNumProjects(); i++)
	{
		GetProject()[i].PrintProjectDetails();
	}
	cout << "---------------------------------------------------------" << endl;
	//Print all workers assigned to Marketing Department
	cout << "Workers: " << endl;
	for (int i = 0; i < GetNumWorkers(); i++)
	{
		cout << m_Workers[i].GetFirstName() << " " << m_Workers[i].GetLastName() << endl;
		cout << "----------------------------" << endl;
		cout << "Employee Number: " << m_Workers[i].GetWorkerNumber() << endl;
		//cout << "Hourly Pay: " << m_Workers[i].GetWorkerNumber() << endl; (again, i left this as a comment, as im not sure hourly pay should only be viewed by managers.
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

// Function to edit Marketing Summary
void Marketing::EditMarketingSummary()
{
	int option;
	double newDoubleValue; //All changeable variables are double
	
	cout << "Edit Marketing Summary" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "1. Marketing Budget" << endl;
	cout << "2. Edit Number of Marketing Campaigns" << endl;
	cout << "3. Edit Advertising Costs" << endl;
	cout << "4. Edit Market Research Expenditure" << endl;
	cout << "5. Edit Conversion Rate" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> option;

	//Switch with different cases for each option the user can pick. Each case changes a different variable, option determines which one is executed
	switch (option)
	{
	case 1:
		cout << "Enter the new value for Marketing Budget: $";
		cin >> newDoubleValue;
		SetMarketingBudget(newDoubleValue);
		break;
	case 2:
		cout << "Enter the new value for Number of Marketing Campaigns: ";
		cin >> newDoubleValue;
		SetNumMarketingCampaigns(newDoubleValue);
		break;
	case 3:
		cout << "Enter the new value for Advertising Costs: $";
		cin >> newDoubleValue;
		SetAdvertisingCosts(newDoubleValue);
		break;
	case 4:
		cout << "Enter the new value for Market Research Expenditure: $";
		cin >> newDoubleValue;
		SetMarketResearchExpenditure(newDoubleValue);
		break;
	case 5:
		cout << "Enter the new value for Conversion Rate (%): ";
		cin >> newDoubleValue;
		SetConversionRate(newDoubleValue);
		break;
	//Error Message in case option isnt between 1-5.
	default:
		cout << "Invalid choice!" << endl;
		break;
	}
}