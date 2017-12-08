#include "Employee.h"

Employee::Employee()
{
    //ctor
}

Employee::Employee(string name, string ssn)
{
    this->name = name;
    this->ssn = ssn;
}

string Employee::get_name()
{
    return this->name;
}

string Employee::get_ssn()
{
    return this->ssn;
}

void Employee::set_name(string name)
{
    this->name = name;
}

void Employee::set_ssn(string ssn)
{
    this->ssn = ssn;
}

void Employee::add_salary_record(Salary salary)
{
    this->salary.push_back(salary);
}

ostream& operator << (ostream& out, const Employee& employee)
{
    out << employee.name << "," << employee.ssn << "," << endl;
    for (unsigned int i = 0; i < employee.salary.size(); i++){
        out << employee.salary[i] << endl;
    }
    out << endl;
    return out;
}

istream& operator >> (istream& in, Employee& employee)
{
    in >> employee.name >> employee.ssn;
    return in;
}

