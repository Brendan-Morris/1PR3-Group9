#pragma once
#include "Departments.h"
using namespace std;

class Marketing : public Departments
{
private:
	double m_marketingBudget;
	double m_numMarketingCampaigns;
	double m_advertisingCosts;
	double m_marketResearchExpenditure;
	double m_conversionRate;
public:
	Marketing();
	Marketing(const string& depName);
	~Marketing();

	double GetMarketingBudget() { return m_marketingBudget; };
	double GetNumMarketingCampaigns() { return m_numMarketingCampaigns; };
	double GetAdvertisingCosts() { return m_advertisingCosts; };
	double GetMarketResearchExpenditure() { return m_marketResearchExpenditure; };
	double GetConversionRate() { return m_conversionRate; };

	void SetMarketingBudget(double markBudg) { m_marketingBudget = markBudg; };
	void SetNumMarketingCampaigns(double numMarkCamp) { m_numMarketingCampaigns = numMarkCamp; };
	void SetAdvertisingCosts(double adCosts) { m_advertisingCosts = adCosts; };
	void SetMarketResearchExpenditure(double marketRE) { m_marketResearchExpenditure = marketRE; };
	void SetConversionRate(double convRate) { m_conversionRate = convRate; };

	void PrintMarketingSummaryManagement(); //Prints Marketing Summary, a neatly outputted list that contains Marketing private variables, projects assigned to the Marketing department, and workers currently working in the Marketing Department
	void EditMarketingSummary(); //Prompts the user to edit one Marketing private variable using a menu.

	//ASK AUSTIN IF FUNCTIONS FOR ADDING AND REMOVING MARKETING EMPLOYEES SHOULD BE MADE HERE
};