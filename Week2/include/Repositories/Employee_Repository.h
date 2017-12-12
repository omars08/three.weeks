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
        void add_employee(const Employee& employee);///Les employee af skj� og skellir �v� � txt skr�.
        vector<Employee> read_employee_files(); ///�etta er fall sem skilar vector(fylki) af employees sem �a� les upp �r txt skr�.

    private:
};

#endif // EMPLOYEE_REPOSITORY_H
