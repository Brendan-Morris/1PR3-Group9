#include "WorkerPerformanceReview.h"
#include <iostream>


WorkerPerformanceReview::WorkerPerformanceReview() {
	for (int i = 0; i < 365; i++) {
		m_Hours[i] = 0.00;
	}
	m_PayRate = 0.00;
	m_SupervisorComment = " ";
}
WorkerPerformanceReview::~WorkerPerformanceReview() {

}

WorkerPerformanceReview::WorkerPerformanceReview(double Pay, std::string SupComment) { 
	// Didn't Include the hours here because each day needs to be manually entered through the Attendance Function
	m_SupervisorComment = SupComment;
	m_PayRate = Pay;
}

double WorkerPerformanceReview::PayCalculator(double Hours[], double PayRate) {
	int StartDay, EndDay;
	double CalculatedPay = 0;

	std::cout << "From what day of the year to what day would you like to calculate?" << std::endl;
	std::cout << "Start: "; std::cin >> StartDay;
	std::cout << "End: "; std::cin >> EndDay;

	std::cout << "-----------------" << std::endl;

	for (int i = StartDay; i < EndDay; i++) {
		std::cout << "Day " << i << ": " << Hours[i] << "Hours  ---->  $" << Hours[i] * PayRate << std::endl;
		CalculatedPay += Hours[i] * PayRate;
	}

	return CalculatedPay;
}

void WorkerPerformanceReview::Attendance(double Hours[]) {
	int UserChoice, DayHoursChoice, StartDay, EndDay;
	double StartTime, EndTime, HoursWorked;
	std::cout << "Would you like to add hours (1), or view hours (2), or terminate (3)"; std::cin >> UserChoice;

	while (UserChoice != 3) {
		if (UserChoice == 1) {
			std::cout << "Please enter the day that you would like to add hours to: "; std::cin >> DayHoursChoice;

			while (Hours[DayHoursChoice] != 0) {
				std::cout << "Day " << DayHoursChoice << " has " << Hours[DayHoursChoice] << "hours. Please enter a day with no hours.";
				std::cin >> DayHoursChoice;
			}

			std::cout << "When did you start working day " << DayHoursChoice << " (24 Hour time)";
			std::cin >> StartTime;
			std::cout << "When did you end working (24 hour time) ";
			std::cin >> EndTime;

			HoursWorked = EndTime - StartTime;
			Hours[DayHoursChoice] = HoursWorked;

			std::cout << "Successfully added " << HoursWorked << " to day " << DayHoursChoice << std::endl;
		}

		else if (UserChoice == 2) {
			std::cout << "What day would you like to start seeing? "; std::cin >> StartDay;
			std::cout << "What day would you like to end seeing? "; std::cin >> EndDay;

			for (int i = StartDay; i < EndDay; i++) {
				std::cout << "Day " << i << ": " << Hours[i] << std::endl;
			}
		}
		std::cout << "Would you like to add hours (1), or view hours (2), or terminate (3)"; std::cin >> UserChoice;
	}
}