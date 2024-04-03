#include "Worker.h"
#include <iostream>

using namespace std;

Worker::Worker() {
	m_FirstName = "";
	m_LastName = "";
	m_WorkerNumber = "";
	m_HourlyPay = 0.00;
}

Worker::~Worker() {

}

Worker::Worker(string FirstName, string LastName, string WorkerNumber, double HourlyPay) {
	m_FirstName = FirstName;
	m_LastName = LastName;
	m_WorkerNumber = WorkerNumber;
	m_HourlyPay = HourlyPay;
}

double Worker::PayCalculator(double Hours[], double PayRate) {
	int StartDay, EndDay;
	double CalculatedPay = 0;

	cout << "From what day of the year to what day would you like to calculate?" << endl;
	cout << "Start: "; cin >> StartDay;
	cout << "End: "; cin >> EndDay;

	cout << "-----------------" << endl;

	for (int i = StartDay; i < EndDay; i++) {
		cout << "Day " << i << ": " << Hours[i] << "Hours  ---->  $" << Hours[i] * PayRate << endl;
		CalculatedPay += Hours[i] * PayRate;
	}

	return CalculatedPay;
}

void Worker::Attendance(double Hours[]) {
	int UserChoice, DayHoursChoice, StartDay, EndDay;
	double StartTime, EndTime, HoursWorked;
	cout << "Would you like to add hours (1), or view hours (2), or terminate (3)"; cin >> UserChoice;

	while (UserChoice != 3) {
		if (UserChoice == 1) {
			cout << "Please enter the day that you would like to add hours to: "; cin >> DayHoursChoice;

			while (Hours[DayHoursChoice] != 0) {
				cout << "Day " << DayHoursChoice << " has " << Hours[DayHoursChoice] << "hours. Please enter a day with no hours.";
				cin >> DayHoursChoice;
			}

			cout << "When did you start working day " << DayHoursChoice << " (24 Hour time)";
			cin >> StartTime;
			cout << "When did you end working (24 hour time) ";
			cin >> EndTime;

			HoursWorked = EndTime - StartTime;
			Hours[DayHoursChoice] = HoursWorked;

			cout << "Successfully added " << HoursWorked << " to day " << DayHoursChoice << endl;
		}

		else if (UserChoice == 2) {
			cout << "What day would you like to start seeing? "; cin >> StartDay;
			cout << "What day would you like to end seeing? "; cin >> EndDay;

			for (int i = StartDay; i < EndDay; i++) {
				cout << "Day " << i << ": " << Hours[i] << endl;
			}
		}
		cout << "Would you like to add hours (1), or view hours (2), or terminate (3)"; cin >> UserChoice;
	}
}