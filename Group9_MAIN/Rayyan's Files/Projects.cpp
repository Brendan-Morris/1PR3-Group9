#include "Projects.h"
#include <iostream>
#include <string>
#include <limits>
using namespace std;

Projects::Projects(const string& name, const string& description)
{
	m_Name = name;
	m_Description = description;
}

Projects::~Projects()
{

}

void Projects::PrintProjectDetails()
{
	cout << endl;
	cout << "Project Name: " << m_Name << endl;
	cout << "Project Description:" << endl;
	cout << endl;

	//Code for outputing description

	string description = m_Description;
	size_t pos = 0;
	const size_t maxLineLength = 85; //Max line length for paragraph

	while (pos < description.length())
	{
		//Finds end of next line
		size_t endpos = pos + maxLineLength;
		if (endpos > description.length())
		{
			endpos = description.length();
		}
		else
		{
			//Finds last space within the line length to avoid splitting words
			size_t lastSpacePos = description.rfind(' ', endpos);
			if (lastSpacePos != string::npos && lastSpacePos > pos)
			{
				endpos = lastSpacePos;
			}
		}

		//Print current line
		cout << description.substr(pos, endpos - pos) << endl;
		//Move to next line
		pos = endpos;
		//Skip leading spaces in the next line
		while (pos < description.length() && description[pos] == ' ')
		{
			pos++;
		}
	}
	cout << endl;
}

void Projects::EditProjectDetails()
{
	int option = -1; //Initialize option with invalid option

	while (option != 0)
	{
		cout << "Edit Project Details" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "1. Edit Project Name" << endl;
		cout << "2. Edit Project Description" << endl;
		cout << "Enter your option: ";
		cin >> option;

		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clears input buffer

		switch(option)
		{
			case 1:
				cout << "Enter new project name: ";
				getline(cin, m_Name);
				break;

			case 2:
				cout << "Enter new project description: ";
				getline(cin, m_Description);
				break;

			case 0:
				cout << "Exiting edit mode." << endl;
				break;
				
			default:
				cout << "Invalid choice. Please try again." << endl;
				break;
		}
	}
}