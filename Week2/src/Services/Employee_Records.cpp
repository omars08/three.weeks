#include "Employee_Records.h"

Employee_Records::Employee_Records() ///smi�ur
{
    //ctor
}

void Employee_Records::add_record(const Employee& employee) ///�etta fall tekur vi� uppl�singum af skj� og sendir ni�ur � repository sem skrifar �a� � textaskr�.
 {
     employee_repo.add_employee(employee);
 }

 ///Falli� h�r a� ne�an skilar vector a�eins me� �eim employees records sem hafa �a� ssn n�mer sem leita� er eftir.
 ///Kalla� er � falli� � UserUI sem s�r um a� birta �a� � skj�inn
vector<Employee> Employee_Records::records_for_ssn(string ssn) ///tekur inn ssn n�mer (sem er samt strengur)
{
    vector<Employee> empl_records = employee_repo.read_employee_files(); ///kallar � fall sem skilar vector sem �tb�inn er � repository og hann sk�r�ur empl_records

    vector<Employee> ssn_records; ///b�r til n�jan vector(fylki) af Employee sem heldur utan um ��r skr�ningar � tilteknu ssn n�meri.
    for (unsigned int i = 0; i < empl_records.size(); i++){
        if (empl_records[i].get_ssn() == ssn){
            ssn_records.push_back(empl_records[i]); ///b�tir vi�eigandi tilvikum � vectorinn.
        }
    }

    return ssn_records;///skilar vectornum.
}

double Employee_Records::total_salary_for_year_and_ssn(int year, string ssn)
{
    double total_salary = 0.0;
    /*vector<Employee> empl_records = employee_repo.read_employee_files(); ///kallar � fall sem skilar vector sem �tb�inn er � repository og hann sk�r�ur empl_records
    vector<Employee> ssn_records; ///b�r til n�jan vector(fylki) af Employee sem heldur utan um ��r skr�ningar � tilteknu ssn n�meri.
    vector<Employee> year_and_ssn_records;
    for (unsigned int i = 0; i < empl_records.size(); i++){
        if (empl_records[i].get_ssn() == ssn){
            ssn_records.push_back(empl_records[i]); ///b�tir vi�eigandi tilvikum � vectorinn.
        }
    }
    for(unsigned int i = 0; i < ssn_records.size(); i++){
        if (ssn_records[i].get_year() == year){
            year_and_ssn_records.push_back(ssn_records[i]);
        }
    }

    for(unsigned int i = 0; i < year_and_ssn_records.size(); i++){
        total_salary +=year_and_ssn_records[i].get_salary();
    }
*/
    return total_salary;
}



