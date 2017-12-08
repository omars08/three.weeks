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

void UserUI::main_menu()
{
    int input = 0;
    while(input != 5){
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

        if(input == 1){
            employee_records.add_record(create_employee()); ///kallar á fall í employee records sem skrifar 1 employee record í textaskrá
        }
        else if (input == 2){
            string ssn;
            vector<Employee> list_of_employes; ///Býr til vector með Employees til að taka á móti vektor sem fall(salary_for_ssn) í employee_records skilar.
            cout << "Enter ssn: ";
            cin >> ssn; ///Leyfir notanda að slá inn ssn númer (geymd í streng)
            list_of_employes = employee_records.records_for_ssn(ssn); ///taka á móti vektor sem fall(salary_for_ssn) í employee_records skilar.
            for(unsigned int i = 0; i < list_of_employes.size();i++){
                cout << list_of_employes[i];///Skrifar út listann af skráningum á vissa ssn tölu.
            }
        }
        else if (input == 3){
            int year;
            int total_salary;

            string ssn;
            cout << "Enter ssn: " << endl;
            cin >> ssn; ///Leyfir notanda að slá inn ssn númer (geymd í streng)
            cout << "Records for what year do you want records for? " << endl;
            cin >> year; ///biður notanda að skrá inn það ár sem hann vill fá af skráningum
            total_salary = employee_records.total_salary_for_year_and_ssn(year, ssn);
            cout << "Total salary for employee with SSN number: " << ssn << " for the year " << year << " is:" << endl;
            cout << total_salary << " dollars";
        }
        else if (input == 4){
            int year;
            cout << "Highest employee for year: ";
            cin >> year;
            Employee top_gun;

            top_gun = employee_records.top_gun_staff(year);
            cout << "Highest paid employee for year " << year << " is:" << endl;
            cout << top_gun << endl;


        }
        else if(input == 5){
            break;
        }
}
}

bool UserUI::isValidName(const string& name)
{
    if(name.size() == 0){
        return false;
    }

    for(int i = 0; i < name.size(); i++){
        if(!(isalpha(name[i]) || isspace(name[i]))){
            return false;
        }
    }
    return true;
}

bool UserUI::isValidNumber(const string& number)
{
    if(number.size() == 0){
        return false;
    }

    for(int i = 0; i < number.size(); i++){
        if(!(isdigit(number[i]))){
            return false;
        }
    }
    return true;
}

Employee UserUI::create_employee()
{
    string name;
    cout << "Enter name of employee: ";
    bool validInput0 = false; /// hunsa bil?
    //NameExceptions nameex;
    while(!validInput0){
        try{
            cin.ignore();
            getline(cin, name);
            //nameex.setName(name);
            if(!isValidName(name)){
                throw NameExceptions("Name is not valid, try again");
            }
            else{
                validInput0 = true;
            }
        }
        catch(NameExceptions e){
            cout << e.getMessage() << endl;
        }
    }

    string ssn;
    cout << "Enter SSN of employee: ";
    bool validInput1 = false;
    while(!validInput1){
        try{
            cin >> ssn;
            if(ssn.length() != 10 || !isValidNumber(ssn)){
                throw SSNExceptions("SSN input is not 10 characters in length, try again");
            }
            else{
                validInput1 = true;
            }
        }
        catch(SSNExceptions e){
            cout << e.getMessage() << endl;
        }
    }

    string salary;
    cout << "Enter employees salary: ";
    bool validInput2 = false;
    while(!validInput2){
        try{
            cin >> salary;
            if(!isValidNumber(salary)){
               throw SalaryExceptions("Not an integer, try again");
            }
            else{
                validInput2 = true;
            }
        }
        catch(SalaryExceptions e){
         cout << e.getMessage() << endl;
        }
    }

    string month;
    int month_to_number;
    cout << "Enter month: ";
    bool validInput3 = false;
    while(!validInput3){
        try{
            cin >> month;
            month_to_number = atoi(month.c_str());
            if(!(isValidNumber(month))){
                throw MonthExceptions("Not a valid month, try again");
            }
            else if(month_to_number < 1 || month_to_number > 12){
                throw MonthExceptions("Not a valid month, try again");
            }
            else {
                validInput3 = true;
            }
        }
        catch(MonthExceptions e){
            cout << e.getMessage() << endl;
        }
    }
        string year;
        int year_to_number;
        cout << "Enter year: ";
        bool validInput4 = false;
        while(!validInput4){
        try{
            cin >> year;
            year_to_number = atoi(year.c_str());
            if(!(isValidNumber(year))){
                throw YearExceptions("Not a valid year, try again");
            }
            else if(year_to_number < 1967 || year_to_number > 2017){
                throw YearExceptions("Not a valid year, try again");
            }
            else {
                validInput4 = true;
            }
        }
        catch(YearExceptions e){
            cout << e.getMessage() << endl;
        }
    }

        int salary_to_number = atoi(salary.c_str());
        Employee employee(name, ssn, salary_to_number, month_to_number, year_to_number);

        return employee;
}

