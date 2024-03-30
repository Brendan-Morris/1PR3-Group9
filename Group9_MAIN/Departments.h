//Departments aggegrates Projects. Each Departments will have a project. Workers will later aggegrate Departments. Workers will HAVE A department.


#pragma once
#include <iostream>
#include <string>
#include "Project.h"

class Departments
{
//Private variables for Departments
protected:
	string m_DepName;
	Projects* m_Projects; //This pointer is for a dynamically allocated array of projects. This is done so a department can have multiple projects.
	int m_NumProjects;

public:
	Departments();
	Departments(const string& depName);
	~Departments();

	string GetName() const;
	Projects* GetProject() const;
	void AddProject(const Projects& project); //Function for adding project
	int GetNumProjects() const;
};