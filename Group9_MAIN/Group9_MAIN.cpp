#include <iostream>
#include <string>

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

	cout << "Please enter your EMPLOYEE NUMBER: ";
	cin >> tmp_EmployeeNumber;

	// Using these to find the employee's information in the array
	// The password screen comes after the program finds the employee in the system
	// If no employee is found, the option to enter a password won't come and the program will give an error
}

void BootupPage(int size) { // This function is only to fill the array of objects, it must return that array, everything else is not important

	// Each tmp variable is used in the for loop to create each object, then overridden every loop

	string tmp_FirstName;
	string tmp_LastName;
	string tmp_WorkerNumber;
	string tmp_WorkerPassword;
	string tmp_WorkerPasswordChecker;
	double tmp_Pay;
	string tmp_Position;

	int* EmployeeArray = new int[size];

	for (int i = 0; i < size; i++) {

		cout << "------Enter employee " << (i + 1) << "Information-----" << endl;
		cout << "First Name: "; cin >> tmp_FirstName;
		cout << "Last Name: "; cin >> tmp_LastName;
		cout << "Employee Number: "; cin >> tmp_WorkerNumber;
		cout << "Hourly Pay: "; cin >> tmp_Pay;
		cout << "Position (Manager, Supervisor, Employee): "; cin >> tmp_Position;

		//Each if statement will create an object for the respective class
		// Password creator comes after the position is determined
	
		// All three of these if statements are the same, just used to create each of the different positions
		
		// Each constructor must pass the following in this order: string password, string FirstName, string LastName, string WorkerNumber, double HourlyPay

		if (tmp_Position == "Manager") {
			cout << "Please enter the password you would like to use for the account for: " << tmp_FirstName << " " << tmp_LastName << ":"; cin >> tmp_WorkerPassword;
			cout << "Please confirm your password: "; cin >> tmp_WorkerPasswordChecker;

			while (tmp_WorkerPassword != tmp_WorkerPasswordChecker) {
				cout << "ERROR: Passwords do not match. Please enter your password: "; cin >> tmp_WorkerPassword;
				cout << "Please confirm your password: "; cin >> tmp_WorkerPasswordChecker;
			}

			Manager EmployeeArray[i](tmp_WorkerPassword, tmp_FirstName, tmp_LastName, tmp_WorkerNumber, tmp_Pay);

		}

		if (tmp_Position == "Supervisor") {
			cout << "Please enter the password you would like to use for the account for: " << tmp_FirstName << " " << tmp_LastName << ":"; cin >> tmp_WorkerPassword;
			cout << "Please confirm your password: "; cin >> tmp_WorkerPasswordChecker;

			while (tmp_WorkerPassword != tmp_WorkerPasswordChecker) {
				cout << "ERROR: Passwords do not match. Please enter your password: "; cin >> tmp_WorkerPassword;
				cout << "Please confirm your password: "; cin >> tmp_WorkerPasswordChecker;
			}

			Supervisor EmployeeArray[i](tmp_WorkerPassword, tmp_FirstName, tmp_LastName, tmp_WorkerNumber, tmp_Pay);
		}

		if (tmp_Position == "Employee") {
			cout << "Please enter the password you would like to use for the account for: " << tmp_FirstName << " " << tmp_LastName << ":"; cin >> tmp_WorkerPassword;
			cout << "Please confirm your password: "; cin >> tmp_WorkerPasswordChecker;

			while (tmp_WorkerPassword != tmp_WorkerPasswordChecker) {
				cout << "ERROR: Passwords do not match. Please enter your password: "; cin >> tmp_WorkerPassword;
				cout << "Please confirm your password: "; cin >> tmp_WorkerPasswordChecker;
			}

			Employee EmployeeArray[i](tmp_WorkerPassword, tmp_FirstName, tmp_LastName, tmp_WorkerNumber, tmp_Pay);
		}
	}
}

int main() {

	int size = 0;

	cout << "Booting up...." << endl;
	cout << "How many employees are in the system?"; cin >> size;

	BootupPage(size); // Return the array that is created in this function to pass into LoginPage()

	LoginPage(size); // Have to also pass the DMA array that was returned from BootupPage() to check for login information
}



