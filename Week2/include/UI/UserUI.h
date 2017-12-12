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
        Employee create_employee(); ///þetta fall skilar Employee

    private:
        Employee_Records employee_records; ///Með tilvik af employee_records sem private breytu
};

#endif // USERUI_H
