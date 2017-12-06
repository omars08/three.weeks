#ifndef EMPLOYEE_RECORDS_H
#define EMPLOYEE_RECORDS_H
#include "Employee.h"
#include "Employee_Repository.h"


class Employee_Records
{
    public:
        Employee_Records();
        void add_record(const Employee& employee);

    private:
        Employee_Repository employee_repo;
};

#endif // EMPLOYEE_RECORDS_H
