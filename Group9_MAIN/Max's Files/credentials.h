#pragma once 
#include <string>

struct EmployeeCredentials {
    std::string username;
    std::string password;
};

// Sample Credentials (Illustrative)
const int MAX_INTERNS = 3;  // Define constants for array sizes
EmployeeCredentials interns[MAX_INTERNS] = {
    { "intern1", "pass123" },
    { "intern2", "anotherpass" },
    // ...
};

// ... Similar arrays for employees and supervisors ...

bool attemptLogin(const std::string& username, const std::string& password, const EmployeeCredentials credentials[], int size) {
    for (int i = 0; i < size; i++) {
        if (credentials[i].username == username && credentials[i].password == password) {
            return true;
        }
    }
    return false;
}

