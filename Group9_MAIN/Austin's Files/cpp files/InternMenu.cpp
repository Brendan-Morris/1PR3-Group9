#include <iostream>
#include "ManagmentMenu.h"
#include "EmployeeMenu.h"
#include "InternMenu.h"
#include "SupervisorMenu.h"
#include "MainMenu.h"
#include "Projects.h"
using namespace std;
InternMenu Mmenu;
MainMenu Menu;
Projects P;

void InternMenu::InternSubMenu() {
	cout << "-----Intern Menu-----" << endl;
	cout << "1) View Projects" << endl;
	cout << "2) View Payroll" << endl;
	cout << "3) Return" << endl;
	cout << "Selection: ";

	int selection = 0;
	for (int i = 0; i < 1;) {
		cin >> selection;
		if (selection > 0 && selection < 4) {
			i++;
		}
		else {
			cout << "Invalid Entry" << endl << "Selection: ";
		}
	}
	if (selection <= 3) {

		switch (selection) {
		case 1:
			Mmenu.ViewProjectsIntern();
			break;
		case 2:
			Mmenu.PayrollDataIntern();
		case 3:
			Mmenu.CloseIntern();
			break;
		}
	}
}

void InternMenu::ViewProjectsIntern() {
	P.PrintProjectDetails();
}

void InternMenu::PayrollDataIntern() {
	
}

void InternMenu::CloseIntern() {
	Menu.displayDefaultView();
}