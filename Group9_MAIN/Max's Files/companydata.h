#pragma once
#include "companydata.h"

void saveCompanyData(const CompanyData& data, const string& filename);
CompanyData loadCompanyData(const string& filename);

struct CompanyData {
    double revenue;
    double expenses;

    // Potentially add more fields:
    double profit;
    int numEmployees;
    // 
};
