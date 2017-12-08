#ifndef EMPLOYEE_REPOSITORY_H
#define EMPLOYEE_REPOSITORY_H
#include <fstream>
#include <vector>
#include <string>
#include "Employee.h"
#include <stdlib.h>

using namespace std;


class Employee_Repository
{
    public:
        Employee_Repository();
        void add_employee(const Employee& employee);///Les employee af skjá og skellir því í txt skrá.
        vector<Employee> read_employee_files(); ///Þetta er fall sem skilar vector(fylki) af employees sem það les upp úr txt skrá.

    private:
};

#endif // EMPLOYEE_REPOSITORY_H
