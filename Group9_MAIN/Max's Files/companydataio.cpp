#include "companydata.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

void saveCompanyData(CompanyData& data, string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        file << data.revenue << "," << data.expenses << endl; // Adjust if you need a different format
        file.close();
    }
    else {
        cout << "Error saving company data to file." << endl;
    }
}

CompanyData loadCompanyData(string& filename) {
    CompanyData data;
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        getline(file, line); // Read the first line
        stringstream ss(line);

        std::string revenueStr, expensesStr;
        getline(ss, revenueStr, ',');
        getline(ss, expensesStr, ',');

        try {
            data.revenue = stod(revenueStr);
            data.expenses = stod(expensesStr);
        }
        catch (...) {
            cout << "Error reading company data from file." << endl;
        }

        file.close();
    }
    else {
        cout << "Error loading company data from file." << endl;
    }
    return data;
}
