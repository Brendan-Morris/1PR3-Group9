#include <iostream>

#include "Worker.h"
#include "Manager.h"
#include "Supervisor.h"
#include "Employee.h"

using namespace std;

void LoginPage(int size) {
	string tmp_FirstName;
	string tmp_LastName;
	string tmp_EmployeeNumber;
	string tmp_Password;

	cout << "Please enter your FIRST name: ";
	cin >> tmp_FirstName;

	cout << "Please enter your LAST name: ";
	cin >> tmp_LastName;

	cout << "Please enter your employee number: ";
	cin >> tmp_EmployeeNumber;

	// Using these to find the employee's information in the array
	// Making the password come after the program finds the employee
	// If no employee is found, the option to enter a password won't come and the program will give an error

}

int main() {

	string tmp_FirstName;
	string tmp_LastName;
	string tmp_WorkerNumber;
	string tmp_WorkerPassword;
	double tmp_Pay;
	string tmp_Position;

	int size = 0;

	cout << "Booting up...." << endl;
	cout << "How many employees are in the system?";
	cin >> size;

	int* EmployeeArray = new int[size];

	for (int i = 0; i < size; i++) { //Create every employee in the program through the array

		cout << "------Enter employee " << (i + 1) << "Information-----" << endl;
		cout << "First Name: "; cin >> tmp_FirstName;
		cout << "Last Name: "; cin >> tmp_LastName;
		cout << "Employee Number: "; cin >> tmp_WorkerNumber;
		cout << "Hourly Pay: "; cin >> tmp_Pay;
		cout << "Position (Manager, Supervisor, Employee): "; cin >> tmp_Position;

		//Each if statement will create an object for the respective class
		//Each one must pass the following in this order: string password, string FirstName, string LastName, string WorkerNumber, double HourlyPay

		if (tmp_Position == "Manager") {

		}

		if (tmp_Position == "Supervisor") {

		}

		if (tmp_Position == "Employee") {

		}
	}

	LoginPage(size); // Have to pass the DMA Array to the other function to check for login information
}