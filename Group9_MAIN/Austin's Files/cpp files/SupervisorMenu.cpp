#include <iostream>
#include "ManagmentMenu.h"
#include "EmployeeMenu.h"
#include "InternMenu.h"
#include "SupervisorMenu.h"
#include "MainMenu.h"
using namespace std;
SupervisorMenu Mmenu;
MainMenu Menu;


void SupervisorMenu::SupervisorSubMenu() {
	cout << "-----Supervisor Menu-----" << endl;
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
			Mmenu.ViewDataSupervisor();
			break;
		case 2:
			Mmenu.EditDataSupervisor();
			break;
		case 3:
			Mmenu.CloseSupervisor();
			break;
		}
	}
}

void SupervisorMenu::ViewDataSupervisor() {
	//view functions required here<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}

void SupervisorMenu::EditDataSupervisor() {
	//view functions required here<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}

void SupervisorMenu::CloseSupervisor() {
	Menu.displayDefaultView();
}