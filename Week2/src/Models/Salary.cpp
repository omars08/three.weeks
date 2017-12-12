#include "Salary.h"

Salary::Salary()
{
    //ctor
}

Salary::Salary(int salary, int month, int year)
{
    this->salary = salary;
    this->month = month;
    this->year = year;
}

int Salary::get_salary()
{
    return this->salary;
}

int Salary::get_month()
{
    return this->month;
}
int Salary::get_year()
{
    return this->year;
}

void Salary::set_salary(int salary)
{
    this->salary = salary;
}

void Salary::set_month(int month)
{
    this->month = month;
}

void Salary::set_year(int year)
{
    this->year = year;
}


ostream& operator << (ostream& out, const Salary& salary)
{
    out << salary.salary << "," << salary.month << "," << salary.year << ",";
    return out;
}
/*
istream& operator >> (istream& in, Salary& salary)
{
    in >> salary.year >> salary.month >> salary.salary;
    return in;
}
*/
