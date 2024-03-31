#include <iostream>
#include "DefaultMenu.h"
using namespace std;

DefaultMenu::DefaultMenu() {

}

void DefaultMenu::InternSubMenu() {
	cout << "-----Intern Menu-----" << endl;
	cout << "1) Account Info" << endl;
	cout << "2) Enter Hours" << endl;
	cout << "3) View Paycheck" << endl;
}

void DefaultMenu::EmployeeSubMenu() {

}

void DefaultMenu::SupervisorSubMenu() {
	cout << "-----Supervisor Menu-----" << endl;
	cout << "1) View " << endl;
}