#include "UserUI.h"
#include "Employee.h"
#include <string>
#include <stdlib.h>
#include "MainUIExceptions.h"
#include "MonthExceptions.h"
#include "NameExceptions.h"
#include "SalaryExceptions.h"
#include "SSNExceptions.h"
#include "YearExceptions.h"
using namespace std;
UserUI::UserUI()
{
    //ctor
}

void UserUI::main_menu(){
    cout << "Tyrell Staff Corporation, founded 1967"
    cout << "Choose a number for the desired option" << endl;
    cout << "**************************************" << endl;
    cout << "1: Add a salary record " << endl;
    cout << "2: Get salary records for a specific SSN " << endl;
    cout << "3: Get a total salary for specific year and specific SSN " << endl;
    cout << "4: Find the employee with the highest salary for a specific year " << endl;
    cout << "5: To quit the program " << endl;

    int input;
    bool validInput = false;
    while(!validInput){
        try{
            cin >> input;
            if(input < 1 || input > 5){
                throw MainUIExceptions("Input not between 1-5");
            }
            else{
                validInput = true;
            }
        }
        catch(MainUIExceptions e){
            cout << e.getMessage() << endl;
        }
    }
    if(input == '1'){
           employee_records.add_record(create_employee()); ///kallar á fall í employee records sem skrifar 1 employee record í textaskrá
    }
    else if (input == '2'){
        ifstream fin("employee_records.txt");
        vector <string> data;
        int counter = 0;
        Employee employee;
        if (fin.is_open()){
            while(!fin.eof()){
                string line;
                getline(fin, line, ',');
                cout << line << endl;
                if (counter == 0){
                    employee.set_name(line);
                    counter++;
                }
                if (counter == 2){
                    employee.set_ssn(line);
                    counter++;
                }
            }
        }
        cout << "Herna prentast klasinn ut: " << endl;
        cout << employee;

            /*string ssn;
            vector<Employee> list_of_employes; ///Býr til vector með Employees til að taka á móti vektor sem fall(salary_for_ssn) í employee_records skilar.
            cout << "Enter ssn ;" << endl;
            cin >> ssn; ///Leyfir notanda að slá inn ssn númer (geymd í streng)
            list_of_employes = employee_records.records_for_ssn(ssn); ///taka á móti vektor sem fall(salary_for_ssn) í employee_records skilar.
            for(unsigned int i = 0; i < list_of_employes.size();i++){
                cout << list_of_employes[i];///Skrifar út listann af skráningum á vissa ssn tölu.
            }*/
        }
        else if (input == '3'){
            int year;
            int total_salary;

            string ssn;
            cout << "Enter ssn " << endl;
            cin >> ssn; ///Leyfir notanda að slá inn ssn númer (geymd í streng)
            cout << "Records for what year do you want records for? " << endl;
            cin >> year; ///biður notanda að skrá inn það ár sem hann vill fá af skráningum
            total_salary = employee_records.total_salary_for_year_and_ssn(year, ssn);
            cout << "Total salary for employee with SSN number: " << ssn << " for the year " << year << " is:" << endl;
            cout << total_salary << " dollars";
        }
        else if (input == '4'){
            cout << "Finding the employee with the highest salaries for a month..." << endl;
        }
}


Employee UserUI::create_employee()
{
        string name;
        cout << "Enter name of employee: ";
        cin.ignore();
        getline(cin, name);

        string ssn;
        cout << "Enter SSN of employee: ";
        bool validInput = false;
        while(!validInput){
            try{
                cin >> ssn;
                if(ssn.length() != 10){
                    throw SSNExceptions("SSN input is not 10 characters in length");
                }
                else{
                    validInput = true;
                }
            }
            catch(SSNExceptions e){
                cout << e.getMessage() << endl;
            }
        }

        int salary;
        cout << "Enter employees salary: ";
        bool validInput2 = false;
        while(!validInput2){
            try{
                cin >> salary;
            }
            catch(SalaryExceptions e){
                cout << "prufa" << endl;
            } cout << salary;
        }
        int month;
        cout << "Enter month: ";
        bool validInput3 = false;
        while(!validInput){
            try{
                cin >> month;
                if(month < 1 || month > 12){
                    throw MonthExceptions("Month");
                }
                else{
                    validInput = true;
                }
            }
            catch(MonthExceptions e){
                cout << e.getMessage() << endl;
            }
        }

        int year;
        cout << "Enter year: ";
        cin >> year;
        bool validInput4 = false;
        while(!validInput){
            try{
                cin >> year;
                if(month < 1967 || month > 2017){
                    throw MonthExceptions("Month");
                }
                else{
                    validInput = true;
                }
            }
            catch(MonthExceptions e){
                cout << e.getMessage() << endl;
            }
        }

        Employee employee(name, ssn);
        Salary salary_record(salary, month, year);
        employee.add_salary_record(salary_record);

        return employee;
        delete[] employee;
}

