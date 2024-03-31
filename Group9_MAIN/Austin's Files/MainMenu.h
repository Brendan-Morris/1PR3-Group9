#pragma once 
#include "EmployeeMenu.h"
#include "ManagmentMenu.h"
#include <iostream>
using namespace std;

class MainMenu : public EmployeeMenu, ManagmentMenu {
public:
	void displayManagmentView();
	void displayDefaultView();
	void InternSubMenu();
	void EmployeeSubMenu();
	void SupervisorSubMenu();
};
