#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <Employee.h>
using namespace std;

class Employee ///Þetta er klasinn Employee. Útskýrir sig sjálfur. Hann kann að skrifa sig og lesa inn í sig.
{
    public:
        Employee();
        Employee(string name, string ssn, double salary, int month, int year);
        string get_name();
        string get_ssn();
        double get_salary();
        int get_month();
        int get_year();
        void set_name(string name);
        void set_ssn(string ssn);
        void set_salary(double salary);
        void set_month(int month);
        void set_year(int year);
        friend ostream& operator << (ostream& out, const Employee& employee);
        friend istream& operator >> (istream& in, Employee& employee);

    private:
        string name;
        string ssn; ///Höfðum þetta sem string, Sindri talaði um þetta og ég held að þetta sé þægilegra. Fyrir utan það að þegar ég hafði dubble tölu þá fór allt í fuck
        double salary;
        int month;
        int year;

};

#endif // EMPLOYEE_H
