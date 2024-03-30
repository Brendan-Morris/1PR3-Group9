#pragma once 
#include <iostream>
class MainMenu {
public:
	void displayManagmentView();
	void displayDefaultView();
private:
	void InternSubMenu();
	void EmployeesubMenu();
	void SupervisorSubMenu();
};
