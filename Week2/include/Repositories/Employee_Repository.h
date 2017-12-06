#ifndef EMPLOYEE_REPOSITORY_H
#define EMPLOYEE_REPOSITORY_H
#include <fstream>
#include <vector>
#include <string>
#include "Employee.h"

using namespace std;


class Employee_Repository
{
    public:
        Employee_Repository();
        void add_employee(const Employee& employee);
        vector<Employee> read_employee_files();

    private:
};

#endif // EMPLOYEE_REPOSITORY_H
