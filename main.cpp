#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

// Reads CSV: ID,Name,Type,PayPerHour,WorkedHours,YearlyPayment
void readFile(const string& filename, vector<HourlyEmployee>& hourlyEmployees, vector<SalariedEmployee>& salariedEmployees) {
    ifstream file(filename);
    string line;

    // Read file with employees information
    while (getline(file, line)) {
        stringstream ss(line);
        string name, type, token;
        int id;
        double payPerHour = 0, workedHours = 0, yearlyPayment = 0;

        getline(ss, token, ','); id = stoi(token);
        getline(ss, name, ',');
        getline(ss, type, ',');
        getline(ss, token, ','); payPerHour = stod(token);
        getline(ss, token, ','); workedHours = stod(token);
        getline(ss, token, ','); yearlyPayment = stod(token);

        if (type == "Hourly") {
            hourlyEmployees.emplace_back(name, id, payPerHour, workedHours);
        } else if (type == "Salaried") {
            salariedEmployees.emplace_back(name, id, yearlyPayment);
        }
    }
}

int main() {
    
    /* TODO: Define two vectors: HourlyEmployee and SalariedEmployee */
    vector<HourlyEmployee> hourlyEmp {};
    vector<SalariedEmployee> salariedEmp {};
    // TODO: Add vectors to readFile call, hourly first
    readFile("employee_info.csv", hourlyEmp, salariedEmp);
    double result = 0;

    // TODO: Print the results
    // Remember that you can use the range based for loop
    // Display the results of each type of employee
    for (auto &val : hourlyEmp) {
        cout << val.getType() << endl;
    }

    for (auto &val : salariedEmp) {
        cout << val.getType() << endl;
    }
    return 0;
}
