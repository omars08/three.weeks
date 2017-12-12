#include "Employee.h"

Employee::Employee()
{
    //ctor
}

Employee::Employee(string name, string ssn, double salary, int month, int year)
{
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this-> year = year;
}

string Employee::get_name()
{
    return this->name;
}

string Employee::get_ssn()
{
    return this->ssn;
}

double Employee::get_salary()
{
    return this->salary;
}

int Employee::get_month()
{
    return this->month;
}
int Employee::get_year()
{
    return this->year;
}

void Employee::set_name(string name)
{
    this->name = name;
}

void Employee::set_ssn(string ssn)
{
    this->ssn = ssn;
}

void Employee::set_salary(double salary)
{
    this->salary = salary;
}

void Employee::set_month(int month)
{
    this->month = month;
}

void Employee::set_year(int year)
{
    this->year = year;
}


ostream& operator << (ostream& out, const Employee& employee)
{
    out << employee.name << "," << employee.ssn << "," << employee.salary << "," << employee.month << "," << employee.year << "," << endl;
    return out;
}

istream& operator >> (istream& in, Employee& employee)
{
    in >> employee.name >> employee.ssn >> employee.salary >> employee.month >> employee.year;
    return in;
}

