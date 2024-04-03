#pragma once
#include "worker.h"
#include  "WorkerPerformanceReview.h"
#include "employee.h"
#include "manager.h"
#include <fstream>
#include <supervisor.h>

void generateReport(Worker& worker, string& filename, WorkerPerformanceReview& WPerfRev) {
    ofstream reportFile(filename);

    if (reportFile.is_open()) {
        reportFile << "Employee Report\n";
        reportFile << "---------------\n";
        reportFile << "Name: " << worker.GetFirstName() << " " << worker.GetLastName() << endl;
        reportFile << "Employee Number: " << worker.GetWorkerNumber() << endl;
        reportFile << "Position: ";

        // Determine position dynamically (more on this later)
        if (dynamic_cast<const Manager*>(&worker)) {
            reportFile << "Manager" << endl;
        }
        else if (dynamic_cast<Supervisor*>(&worker)) {
            reportFile << "Supervisor" << endl;
        }
        else {
            reportFile << "Employee" << endl;
        }

        reportFile << "Hourly Pay: $" <<  WPerfRev.GetPayRate() << endl;
        reportFile.close();

        cout << "Report generated successfully: " << filename << endl;
    }
    else {
        cout << "Error creating report file." << endl;
    }
}
