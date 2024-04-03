//Departments aggegrates Projects. Each Departments will have a project. Workers will later aggegrate Departments. Workers will HAVE A department.
#pragma once
#include <iostream>
#include <string>
#include "Projects.h"
#include "Worker.h"

class Departments
{
//Private variables for Departments
protected:
	string m_DepName;
	Projects* m_Projects; //This pointer is for a dynamically allocated array of projects. This is done so a department can have multiple projects without specifying a value in the array.
	int m_NumProjects;
	Worker* m_Workers; //This pointer is for a dynamically allocated array of workers who work in the apartment. This is done so a department can have as many workers as it needs.
	int m_NumWorkers;

public:
	Departments();
	Departments(const string& depName);
	~Departments();

	string GetDepName() const { return m_DepName; };
	Projects* GetProject() const { return m_Projects; };
	int GetNumProjects() const { return m_NumProjects; };
	int GetNumWorkers() const { return m_NumWorkers; };

	void AddProject(const Projects& project); //Function for adding project
	void RemoveProject(const string& projectName);
	void AddWorker(const Worker& worker); //Function for adding worker to department
	void RemoveWorker(const string& workerName); //Function for removing worker to department
};
