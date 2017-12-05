#include "Repositorie.h"
#include <iostream>
#include <istream>
using namespace std;
Repositorie::Repositorie()
{

}
Repositorie::Repositorie(string _name, int _SSN, int _salary,int _month,int _year)
{
    name = _name;
    SSN = _SSN;
    salary = _salary;
    month = _month;
    year = _year;
}

 istream& operator >> (istream& in, Repositorie& re)
{
    cout << "Name: ";
    in >> re.name;
    cout << "SSN: ";
    in >> re.SSN;
    cout << "Salary: ";
    in >> re.salary;
    cout << "Month: ";
    in >> re.month;
    cout << "Year: ";
    in >> re.year;

    return in;
}
 ostream& operator << (ostream& out, Repositorie& re)
{

    out << "Name: " << re.name << endl;
    out << "SSN: " << re.SSN << endl;
    out << "Salary: " << re.salary << endl;
    out << "Month: " << re.month << endl;
    out << "Year: " << re.year << endl;

    return out;
}
void Rep_func()
{

}
