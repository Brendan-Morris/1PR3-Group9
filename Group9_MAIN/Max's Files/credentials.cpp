#include "Credentials.h"
#include <fstream>
#include <sstream>

bool attemptLogin(const std::string& username, const std::string& password, const std::string& role) {
    std::string filename = role + "_credentials.txt";
    std::ifstream file(filename);

    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::stringstream ss(line);
            std::string storedUsername, storedPassword;
            getline(ss, storedUsername, ','); 
            getline(ss, storedPassword, ',');

            if (storedUsername == username && storedPassword == password) {
                return true;
            }
        }
    }
    return false; 
}
