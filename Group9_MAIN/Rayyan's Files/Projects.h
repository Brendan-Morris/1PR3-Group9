#pragma once
#include <string>
#include <iostream>
#include <limits>
using namespace std;

class Projects
{
protected:
	string m_Name;
	string m_Description;
public:
	Projects();
	Projects(const string& m_name, const string& m_Description);
	~Projects();

	string GetProjectName() const { return m_Name; };
	string GetDescription() const { return m_Description; };
	void PrintProjectDetails(); //This function only prints out the name and description of the project in a neat matter
	void EditProjectDetails(); //This function prints out a menu and prompts the user to change the name or description of a project
};