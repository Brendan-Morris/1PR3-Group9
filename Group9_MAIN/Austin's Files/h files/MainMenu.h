#pragma once 
#include "ManagmentMenu.h"
#include "EmployeeMenu.h"
#include "InternMenu.h"
#include "SupervisorMenu.h"
#include <iostream>
using namespace std;

class MainMenu : public ManagmentMenu, InternMenu, EmployeeMenu, SupervisorMenu {
public:
	MainMenu();
	void displayDefaultView();
};