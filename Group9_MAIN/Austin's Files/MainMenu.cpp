#include <iostream>
#include "MainMenu.h"
using namespace std;

//This is what you will be presented with when the program starts
int main() {
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
			menu.displayManagmentView();
		case 3:
			return 0;
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
	cout << "Selection: " << endl;
	MainMenu menu;
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
	if (selection <= 4) {

		switch (selection) {
		case 1:
			menu.displayDefaultView();
			break;
		case 2:
			menu.displayManagmentView();
		case 3:
			menu.
		}
	}
}

//This menu houses the different options managment has "1) View data" will have sub menus so they can sleect which data to view
void MainMenu::displayManagmentView() {
	cout << "-----Managment Menu-----" << endl;
	cout << "1) View Data" << endl;
	cout << "2) Edit Data" << endl;
	cout << "3) Close Program " << endl;
	cout << "Selection: ";
}

void MainMenu::InternSubMenu() {
	cout << "-----Intern Menu-----" << endl;
	cout << "1) Account Info" << endl;
	cout << "2) Enter Hours" << endl;
	cout << "3) View Paycheck"
}

void MainMenu::EmployeesubMenu() {
	cout << "-----Employee Menu-----" << endl;
}

void MainMenu::SupervisorSubMenu() {
	cout << "-----Supervisor Menu-----" << endl;
	cout << "1) View " << endl;
}


