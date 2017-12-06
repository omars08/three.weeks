#ifndef USERUI_H
#define USERUI_H
#include <iostream>
#include "Employee_Records.h"
#include "Employee.h"

using namespace std;


class UserUI
{
    public:
        UserUI();
        void main_menu();
        Employee create_employee();

    private:
        Employee_Records employee_records;
};

#endif // USERUI_H
