#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours) 
:Employee(name, id, "Hourly") {
    
    this->payPerHour = payPerHour;
    this->workedHours = workedHours;
}

/*TODO: calculate Payment */

double HourlyEmployee::calculatePay() const { return payPerHour * workedHours; }

/*GETTERS*/

double HourlyEmployee::getPayPerHour() { return payPerHour; }
double HourlyEmployee::getWorkedHours() { return workedHours; }





