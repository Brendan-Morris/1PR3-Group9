#include "Manager.h"
#include "Worker.h"
#include <iostream>
#include <fstream>

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

void Manager::AddWorkers() {
    fstream WorkerFile("Workers.txt", ios::app);
    if (WorkerFile.is_open()) {
        string EmployeeInformation;
        int NumberofWorkers;
        cout << "How many workers would you like to add?"; cin >> NumberofWorkers;
        for (int i = 0; i < NumberofWorkers; i++) {
            cout << "Please put in the workers information (in this order), seperated by a space with no commas." << endl;
            cout << "First name, Last name, position, employee number" << endl;
            getline(cin, EmployeeInformation);
            WorkerFile << EmployeeInformation;
        }
    }

    else
        cout << "Could not open the file." << endl;
    
    WorkerFile.close();
}