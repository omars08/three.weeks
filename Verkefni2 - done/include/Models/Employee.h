#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <Employee.h>
using namespace std;

class Employee ///�etta er klasinn Employee. �tsk�rir sig sj�lfur. Hann kann a� skrifa sig og lesa inn � sig.
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
        string ssn; ///H�f�um �etta sem string, Sindri tala�i um �etta og �g held a� �etta s� ��gilegra. Fyrir utan �a� a� �egar �g haf�i dubble t�lu �� f�r allt � fuck
        double salary;
        int month;
        int year;

};

#endif // EMPLOYEE_H
