#ifndef EMPLOYEE_RECORDS_H
#define EMPLOYEE_RECORDS_H
#include "Employee.h"
#include "Employee_Repository.h"


class Employee_Records
{
    public:
        Employee_Records();
        void add_record(const Employee& employee);///tekur við upplýsingum af skjá og skrifar í textaskrá
        vector <Employee> records_for_ssn(string ssn); ///skilar vector aðeins með þeim employees records sem hafa það ssn númer sem leitað er eftir.
        double total_salary_for_year_and_ssn(int year, string ssn);

    private:
        Employee_Repository employee_repo;
};

#endif // EMPLOYEE_RECORDS_H
