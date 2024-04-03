#include <iostream>
#include <string>
#include "MainMenu.h"
#include "Credentials.h"
using namespace std;
EmployeeCredentials Cred;
MainMenu menu;
//This is what you will be presented with when the program starts
MainMenu::MainMenu() {
	MainMenu menu;
	int selection = 0;
	cout << "-----Employee Managment Software-----" << endl;
	cout << "1) Login" << endl;
	cout << "2) Close Program " << endl;
	cout << "Selection: ";
	for (int i = 0; i < 1;) {
		cin >> selection;
		if (selection > 0 && selection < 3) {
			i++;
		}
		else {
			cout << "Invalid Entry" << endl << "Selection: ";
		}
	}
	if (selection <= 2) {

		switch (selection) {
		case 1:
			menu.displayDefaultView();
			break;
		case 2:
			cout << "-----Task Ended-----" << endl;
			break;
		}
	}

}

void MainMenu::displayDefaultView() {
	cout << "-----Default View-----" << endl;
	cout << "Select Login:" << endl;
	cout << "1)Intern" << endl;
	cout << "2)Employee" << endl;
	cout << "3)Supervisor" << endl;
	cout << "4)Managment" << endl;
	cout << "5)Return" << endl;
	cout << "Selection: " << endl;
	
	int selection = 0;
	for (int i = 0; i < 1;) {
		cin >> selection;
		if (selection > 0 && selection < 6) {
			i++;
		}
		else {
			cout << "Invalid Entry" << endl << "Selection: ";
		}
	}
	if (selection <= 5) {
		string username;
		string password;
		switch (selection) {
		case 1:
			cout << "Username: ";
			cin >> username;
			cout << "Password: ";
			cin >> password;
			
			if (attemptLogin(username, password, "intern")) {
				menu.InternSubMenu();
			}
			else {
				cout << "Login failed. Invalid username or password." << endl;
			}
			break;
		case 2:
			menu.EmployeeSubMenu();
			break;
		case 3:
			menu.SupervisorSubMenu();
			break;
		case 4:
			menu.ManagmentSubMenu();

			
		}
	}
}
	





