#pragma once
#include <string>
using namespace std;

class Projects
{
protected:
	string m_Name;

public:
	Projects();
	Projects(const string& m_name);
	string GetName() const;
};