#include "Project.h"

using namespace std;

Projects::Projects(const string& name)
{
	m_Name = name;
}

string Projects::GetName() const
{
	return m_Name;
}