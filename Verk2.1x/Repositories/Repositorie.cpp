#include "Repositorie.h"
#include <iostream>
#include <istream>
#include <fstream>
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
    cout << "Name: " << endl;
    in >> re.name;
    cout << "SSN: " << endl;
    in >> re.SSN;
    cout << "Salary: " << endl;
    in >> re.salary;
    cout << "Month: " << endl;
    in >> re.month;
    cout << "Year: " << endl;
    in >> re.year;
    re.Rep_func();
    return in;
}
 ostream& operator << (ostream& out, Repositorie& re)
{

    out << "Name: " << re.name  << endl;
    out << "SSN: " << re.SSN << endl;
    out << "Salary: " << re.salary << endl;
    out << "Month: " << re.month << endl;
    out << "Year: " << re.year << endl;

    return out;
}
void Repositorie::Rep_func()
{
    fof.open("EmployInfo.txt", ios::app);                /// Open text file and naming it
    fof << "Name: " << name  << endl;
    fof << "SSN: " << SSN << endl;
    fof << "Salary: " << salary << endl;
    fof << "Month: " << month << endl;
    fof << "Year: " << year << endl;
                                                            /// Writes into text file
    fof.close();                                            ///close text file

}
