#include "Employee_Records.h"

Employee_Records::Employee_Records()
{
    //ctor
}

 void Employee_Records::add_record(const Employee& employee)
 {
     employee_repo.add_employee(employee);
     cout << employee << endl;
 }
