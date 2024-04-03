#include <iostream>
#include "ManagmentMenu.h"
#include "EmployeeMenu.h"
#include "InternMenu.h"
#include "SupervisorMenu.h"
#include "MainMenu.h"
using namespace std;
EmployeeMenu Mmenu;
MainMenu Menu;


void EmployeeMenu::EmployeeSubMenu() {
	cout << "-----Employee Menu-----" << endl;
	cout << "1) View Data" << endl;
	cout << "2) Edit Data" << endl;
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
			Mmenu.ViewDataEmployee();
			break;
		case 2:
			Mmenu.EditDataEmployee();
			break;
		case 3:
			Mmenu.CloseEmployee();
			break;
		}
	}
}

void EmployeeMenu::ViewDataEmployee() {
	//view functions required here<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}

void EmployeeMenu::EditDataEmployee() {
	//view functions required here<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}

void EmployeeMenu::CloseEmployee() {
	Menu.displayDefaultView();
}