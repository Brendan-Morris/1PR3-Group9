#include "Departments.h"
#include <string>

using namespace std;

Departments::Departments(const string& depName)
{
	depName = m_DepName;
	m_Projects = nullptr;
	m_NumProjects = 0;
}

Departments::~Departments()
{
	delete[] m_Projects;
}

//Function for adding a project to a department
void Departments::AddProject(const Projects& project)
{
	//Creates new array with space for one more project
	Projects* newProjects = new Projects[m_NumProjects + 1];

	//Copies existing projects to newProject
	for (int i = 0; i < m_NumProjects; i++)
	{
		newProjects[i] = m_Projects[i];
	}

	//Adds new Project
	newProjects[m_NumProjects++] = project;

	//Deletes old projects array
	delete[] m_Projects;

	//Updates projects pointer to point to the new array
	m_Projects = newProjects;
}

void Departments::AddWorker(const Worker& worker)
{
	//Creates new array with space for one more worker
	Worker* newWorkers = new Worker[m_NumWorkers + 1];
	for (int i = 0; i < m_NumWorkers; i++) //Copies existing workers to new array
	{
		newWorkers[i] = m_Workers[i];
	}
	newWorkers[m_NumWorkers++] = worker; //Adds the new worker
	delete[] m_Workers; //Deletes old workers array
	m_Workers = newWorkers; //Updates worker pointer to point to the new array
}

void Departments::RemoveWorker(const string& workerName)
{
	int indexToRemove = -1;
	//Finds the index of the worker to remove
	for (int i = 0; i < m_NumWorkers; i++)
	{
		string name = m_Workers[i].GetFirstName() + " " + m_Workers[i].GetLastName(); //Created name using Worker.h methods to compare to workerName
		if (name == workerName)
		{
			indexToRemove = i;
			break;
		}
	}
	//If worker found, removes worker from array
	if (indexToRemove != -1)
	{
		Worker* newWorkers = new Worker[m_NumWorkers - 1];
		int j = 0;
		for (int i = 0; i < m_NumWorkers; i++)
		{
			if (i != indexToRemove)
			{
				newWorkers[j++] = m_Workers[i];
			}
		}
		delete[] m_Workers;
		m_Workers = newWorkers;
		m_NumWorkers--;
	}
}