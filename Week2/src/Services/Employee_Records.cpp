#include "Employee_Records.h"

Employee_Records::Employee_Records() ///smiður
{
    //ctor
}

void Employee_Records::add_record(const Employee& employee) ///Þetta fall tekur við upplýsingum af skjá og sendir niður í repository sem skrifar það í textaskrá.
 {
     employee_repo.add_employee(employee);
 }

 ///Fallið hér að neðan skilar vector aðeins með þeim employees records sem hafa það ssn númer sem leitað er eftir.
 ///Kallað er í fallið í UserUI sem sér um að birta það á skjáinn
vector<Employee> Employee_Records::records_for_ssn(string ssn) ///tekur inn ssn númer (sem er samt strengur)
{
    vector<Employee> empl_records = employee_repo.read_employee_files(); ///kallar á fall sem skilar vector sem útbúinn er í repository og hann skýrður empl_records

    vector<Employee> ssn_records; ///býr til nýjan vector(fylki) af Employee sem heldur utan um þær skráningar á tilteknu ssn númeri.
    for (unsigned int i = 0; i < empl_records.size(); i++){
        if (empl_records[i].get_ssn() == ssn){
            ssn_records.push_back(empl_records[i]); ///bætir viðeigandi tilvikum í vectorinn.
        }
    }

    return ssn_records;///skilar vectornum.
}

double Employee_Records::total_salary_for_year_and_ssn(int year, string ssn)
{
    double total_salary = 0.0;
    /*vector<Employee> empl_records = employee_repo.read_employee_files(); ///kallar á fall sem skilar vector sem útbúinn er í repository og hann skýrður empl_records
    vector<Employee> ssn_records; ///býr til nýjan vector(fylki) af Employee sem heldur utan um þær skráningar á tilteknu ssn númeri.
    vector<Employee> year_and_ssn_records;
    for (unsigned int i = 0; i < empl_records.size(); i++){
        if (empl_records[i].get_ssn() == ssn){
            ssn_records.push_back(empl_records[i]); ///bætir viðeigandi tilvikum í vectorinn.
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



