#ifndef EMPLOYEE_RECORDS_H
#define EMPLOYEE_RECORDS_H
#include "Employee.h"
#include "Employee_Repository.h"


class Employee_Records
{
    public:
        Employee_Records();
        void add_record(const Employee& employee);///tekur vi� uppl�singum af skj� og skrifar � textaskr�
        vector <Employee> records_for_ssn(string ssn); ///skilar vector a�eins me� �eim employees records sem hafa �a� ssn n�mer sem leita� er eftir.
        double total_salary_for_year_and_ssn(int year, string ssn);

    private:
        Employee_Repository employee_repo;
};

#endif // EMPLOYEE_RECORDS_H
