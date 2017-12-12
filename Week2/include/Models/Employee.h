#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include "Salary.h"
#include <vector>

using namespace std;

class Employee ///Þetta er klasinn Employee. Útskýrir sig sjálfur. Hann kann að skrifa sig og lesa inn í sig.
{
    public:
        Employee();
        Employee(string name, string ssn);
        string get_name();
        string get_ssn();
        void set_name(string name);
        void set_ssn(string ssn);
        void add_salary_record(Salary salary);
        friend ostream& operator << (ostream& out, const Employee& employee);
        friend istream& operator >> (istream& in, Employee& employee);

    private:
        string name;
        string ssn; ///Höfðum þetta sem string, Sindri talaði um þetta og ég held að þetta sé þægilegra. Fyrir utan það að þegar ég hafði dubble tölu þá fór allt í fuck
        vector<Salary> salary;

};

#endif // EMPLOYEE_H
