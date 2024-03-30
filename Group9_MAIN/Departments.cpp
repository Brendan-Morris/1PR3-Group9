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

string Departments::GetName() const
{
	return m_DepName;
}

Projects* Departments::GetProject() const
{
	return m_Projects;
}

int Departments::GetNumProjects() const
{
	return m_NumProjects;
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
