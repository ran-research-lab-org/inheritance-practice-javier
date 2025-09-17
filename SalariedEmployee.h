#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee {
    private:
        double yearlyPayment;
    
    public:

        SalariedEmployee(const std::string& name, int id, double yearlyPayment);

        double calculatePay() const override;
        double getYearlyPayment() const;
};

#endif

