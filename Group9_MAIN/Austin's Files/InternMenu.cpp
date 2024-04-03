#include <iostream>
#include "ManagmentMenu.h"
#include "EmployeeMenu.h"
#include "InternMenu.h"
#include "SupervisorMenu.h"
#include "MainMenu.h"
using namespace std;
InternMenu Mmenu;
MainMenu Menu;


void InternMenu::InternSubMenu() {
	cout << "-----Intern Menu-----" << endl;
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
			Mmenu.ViewDataIntern();
			break;
		case 2:
			Mmenu.EditDataIntern();
			break;
		case 3:
			Mmenu.CloseIntern();
			break;
		}
	}
}

void InternMenu::ViewDataIntern() {
	//view functions required here<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}

void InternMenu::EditDataIntern() {
	//view functions required here<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}

void InternMenu::CloseIntern() {
	Menu.displayDefaultView();
}