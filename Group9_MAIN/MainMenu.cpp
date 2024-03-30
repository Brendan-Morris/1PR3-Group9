#include <iostream>
#include "MainMenu.h"
using namespace std;

//This is what you will be presented with when the program starts
int main() {
	cout << "-----Employee Managment Software Demo-----" << endl;
	cout << "1) Default View" << endl;
	cout << "2) Managment View" << endl;

}

void MainMenu::displayManagmentView() {
	cout << "-----Managment Menu-----" << endl;
}
void MainMenu::displayDefaultView() {

}
void MainMenu::InternSubMenu() {
	cout << "-----Intern Menu-----" << endl;
}
void MainMenu::EmployeesubMenu() {
	cout << "-----Employee Menu-----" << endl;
}
void MainMenu::SupervisorSubMenu() {
	cout << "-----Supervisor Menu-----" << endl;
	cout << "1) View " << endl;
}


