#include <iostream>
#include "MainMenu.h"
using namespace std;
ManagmentMenu Mmenu;
MainMenu menu;
//This is what you will be presented with when the program starts
MainMenu::MainMenu() {
	MainMenu menu;
	int selection = 0;
	cout << "-----Employee Managment Software-----" << endl;
	cout << "1) Default View" << endl;
	cout << "2) Managment View" << endl;
	cout << "3) Close Program " << endl;
	cout << "Selection: ";
	for (int i = 0; i < 1;) {
		cin >> selection;
		if (selection > 0 && selection < 4) {
			i++;
		}
		else {
			cout << "Invalid Entry" << endl << "Selection: ";
		}
	}
	if (selection <= 4) {

		switch (selection) {
		case 1:
			menu.displayDefaultView();
			break;
		case 2:
		//	menu.getlogin 
			//menu.displayManagmentView();
			break;
		case 3:
			cout << "-----Task Ended-----" << endl;
			break;
		}
	}

}
//You can select which type of employee you are which then leads to a login interface that will ask for a login code
void MainMenu::displayDefaultView() {
	cout << "-----Default View-----" << endl;
	cout << "Select Login:" << endl;
	cout << "1)Intern" << endl;
	cout << "2)Employee" << endl;
	cout << "3)Supervisor" << endl;
	cout << "4)Managment" << endl;
	cout << "5)Return" << endl;
	cout << "Selection: " << endl;
	MainMenu Dmenu;
	int selection = 0;
	for (int i = 0; i < 1;) {
		cin >> selection;
		if (selection > 0 && selection < 5) {
			i++;
		}
		else {
			cout << "Invalid Entry" << endl << "Selection: ";
		}
	}
	if (selection <= 4) {

		switch (selection) {
		case 1:
			Dmenu.InternSubMenu();
			break;
		case 2:
			Dmenu.EmployeeSubMenu();
			break;
		case 3:
			Dmenu.SupervisorSubMenu();
			break;
		case 4:
			Mmenu.
			MainMenu();
		}
	}
}
	





