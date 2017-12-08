#ifndef SALARY_H
#define SALARY_H
#include <iostream>

using namespace std;

class Salary
{
    public:
        Salary();
        Salary(int salary, int month, int year);
        int get_salary();
        int get_month();
        int get_year();
        void set_salary(int salary);
        void set_month(int month);
        void set_year(int year);
        friend ostream& operator << (ostream& out, const Salary& salary);
        //friend istream& operator >> (istream& in, Salary& salary);

    private:
        double salary;
        int month;
        int year;
};

#endif // SALARY_H
