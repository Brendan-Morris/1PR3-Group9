#pragma once 
#include "EmployeeMenu.h"
#include <iostream>
using namespace std;

class MainMenu : public EmployeeMenu, public ManagmentMenu {
public:
	void displayManagmentView();
	void displayDefaultView();
	void InternSubMenu();
	void EmployeesubMenu();
	void SupervisorSubMenu();
};
