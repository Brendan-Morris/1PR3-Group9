#include "Manager.h"
#include "Worker.h"
#include <iostream>

using namespace std;

Manager::Manager() {
	m_ManagerPassword = "";
}

Manager::~Manager() {

}

Manager::Manager(string ManPass, string FirstName, string LastName, string WorkerNumber, double HourlyPay) : Worker(FirstName, LastName, WorkerNumber, HourlyPay) {
	m_ManagerPassword = ManPass;
}

void Manager::displayCompanyOverview() {
    cout << "\nCompany Overview (Manager Access)\n";
    cout << "--------------------------------\n";
    cout << "Revenue: $" << companyData.revenue << endl;
    cout << "Expenses: $" << companyData.expenses << endl;
}

void Manager::setCompanyData(CompanyData& data) {
    companyData = data;
}

void Manager::displayCompanyOverview() {
    cout << "\nCompany Overview (Manager Access)\n";
    cout << "--------------------------------\n";
    cout << "Revenue: $" << companyData.revenue << endl;
    cout << "Expenses: $" << companyData.expenses << endl;
    cout << "Profit: $" << (companyData.revenue - companyData.expenses) << endl; // Simple profit calculation
    // ... display other metrics ...
}

void Manager::saveCompanyDataToDisk(const string& filename) {
    saveCompanyData(companyData, filename);
}

