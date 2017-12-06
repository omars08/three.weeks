#include "UserUI.h"
#include "Employee.h"
#include <string>
#include <stdlib.h>
using namespace std;
UserUI::UserUI()
{
    //ctor
}

void UserUI::main_menu()
{
    cout << "Choose a number for the desired option" << endl;
    cout << "**************************************" << endl;
    cout << "1: Add a salary record " << endl;
    cout << "2: Get salary records for a specific SSN " << endl;
    cout << "3: Get a total salary for specific year and specific SSN " << endl;
    cout << "4: Find the employee with the highest salary for a specific year " << endl;
    cout << "q: To quit the program " << endl;

    char input;
    cin >> input;

        if(input == '1'){
            //cout << "Adding salary..." << endl;
            employee_records.add_record(create_employee());
        }
        else if (input == '2'){
            //cout << "Getting salary records..." << endl;
            //vector <Employee> list_of_employee_records;
            string a;
            Employee employee;
            vector<Employee> employee_list;
            ifstream fin;
            int counter = 0;
            fin.open ("employee_records.txt");

            if(fin.is_open()) {
                while(!fin.eof()) {
                    if(counter == 0){
                        getline(fin, a, ',');
                        employee.set_name(a);
                        cout << "0" << endl;
                        counter++;
                    }
                    if(counter == 1){
                        getline(fin, a, ',');
                        int c = atoi(a.c_str());
                        employee.set_ssn(c);
                        cout << "1" << endl;
                        counter++;
                    }
                    if(counter == 2){
                        getline(fin, a, ',');
                        int c = atof(a.c_str());
                        employee.set_salary(c);
                        cout << "2" << endl;
                        counter++;
                    }
                    if(counter == 3){
                        getline(fin, a, ',');
                        int c = atoi(a.c_str());
                        employee.set_month(c);
                        cout << "3" << endl;
                        counter++;
                    }
                    if(counter == 4){
                        getline(fin, a, ',');
                        int c = atoi(a.c_str());
                        employee.set_year(c);
                        cout << "4" << endl;
                    }
                    employee_list.push_back(employee);
                    counter = 0;
                }
                fin.close();
            }
            cout << "Profa: " << endl;
            for (unsigned int i = 0; i < employee_list.size(); i++){
                cout << employee_list[i];
            }

        }
            else if (input == '3'){
            //cout << "Getting total salary records for a specific SSN..." << endl;
            string b = "1999";
            int c = atoi(b.c_str());
            cout << c;

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
        int ssn;
        cout << "Enter SSN of employee: ";
        cin >> ssn;
        double salary;
        cout << "Enter employees salary: ";
        cin >> salary;
        int month;
        cout << "Enter month: " << endl;
        cin >> month;
        int year;
        cout << "Enter year: " << endl;
        cin >> year;
        Employee employee(name, ssn, salary, month, year);

        return employee;
}

