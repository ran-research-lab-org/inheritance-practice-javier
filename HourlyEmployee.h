#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
    private:
        double payPerHour;
        double workedHours;

    public:
        HourlyEmployee();
        HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours);

        double calculatePay() const override;

        double getPayPerHour();
        double getWorkedHours();
};

#endif

