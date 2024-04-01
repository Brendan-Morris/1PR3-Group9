#include <iostream>
#include "DefaultMenu.h"
using namespace std;

DefaultMenu::DefaultMenu() {
	cout << "-----General Login Menu-----" << endl;
	cout << "1) Intern Login" << endl;
	cout << "2) Employee Login" << endl;
	cout << "3) Supervisor Login" << endl;
	cout << "Selection: ";
}

void DefaultMenu::InternSubMenu() {
	cout << "-----Intern Menu-----" << endl;
	cout << "1) Account Info" << endl;
	cout << "2) Personal Payroll" << endl;
	cout << "3) View Projects" << endl;
	cout << "Selection: ";
	DefaultMenu Dmenu;
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

			break;
		case 2:

			break;
		case 3:

			break;
		}
	}
}


void DefaultMenu::EmployeeSubMenu() {
	cout << "-----Employee Menu-----" << endl;
	cout << "1) View/Edit Projects" << endl;
	cout << "2) Personal Payroll" << endl;
	cout << "3) View Paycheck" << endl;
	cout << "Selection: ";
	DefaultMenu Dmenu;
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
			Dmenu.ViewEditProjects();
			break;
		case 2:

			break;
		case 3:

			break;
		}
	}
}

void DefaultMenu::SupervisorSubMenu() {
	cout << "-----Supervisor Menu-----" << endl;
	cout << "1) View/Edit Projects " << endl;
	cout << "2) View Personal Payroll " << endl;
	cout << "3) View Reports" << endl;
	cout << "Selection: ";
	DefaultMenu Dmenu;
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
			Dmenu.ViewEditProjects();
			break;
		case 2:

			break;
		case 3:

			break;
		}
	}
}

void DefaultMenu::ViewEditProjects() {


}