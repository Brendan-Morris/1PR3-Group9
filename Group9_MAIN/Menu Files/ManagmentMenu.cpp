#include <iostream>
#include "ManagmentMenu.h"
#include "MainMenu.h"
using namespace std;
ManagmentMenu Mmenu;
MainMenu Menu;

ManagmentMenu::ManagmentMenu() {
	Mmenu.displayManagmentView();
}

//This menu houses the different options managment has "1) View data" will have sub menus so they can select which data to view
void ManagmentMenu::displayManagmentView() {
	cout << "-----Managment Menu-----" << endl;
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
			Mmenu.ViewDataManagment();
			break;
		case 2:
			Mmenu.EditDataManagment();
			break;
		case 3:
			Mmenu.CloseManagment();
			break;
		}
	}
}

void ManagmentMenu::ViewDataManagment() {
//view functions required here<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}

void ManagmentMenu::EditDataManagment() {
	//view functions required here<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}

void ManagmentMenu::CloseManagment() {
	Menu.displayDefaultView();
}