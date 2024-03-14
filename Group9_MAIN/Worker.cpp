#include "Worker.h"
#include <iostream>
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

//rAYYAN mukhi
