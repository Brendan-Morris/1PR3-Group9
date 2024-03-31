#pragma once 
#include "DefaultMenu.h"
#include "ManagmentMenu.h"
#include <iostream>
using namespace std;

class MainMenu : public DefaultMenu, ManagmentMenu {
public:
	MainMenu();
	void displayDefaultView();
};
