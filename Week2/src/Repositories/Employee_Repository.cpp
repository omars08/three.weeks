#include "Employee_Repository.h"

Employee_Repository::Employee_Repository()
{
    //ctor
}

void Employee_Repository::add_employee(const Employee& employee)
{
    ofstream fout;
    fout.open ("employee_records.txt", ios::app);
    if (fout.is_open()) {
        fout << employee;
        fout.close();
    }
    else {
        ///kasta villu
    }
}

///Næ ekki að láta getline bæta inn í class.
vector<Employee> Employee_Repository::read_employee_files()
{
    vector <Employee> list_of_employee_records;
    string a;
    Employee employee;
    ifstream fin;
    fin.open ("employee_records.txt");

    if(fin.is_open()){
        while(!fin.eof()) {
            getline(fin, a, ',');
            fin >> employee;
            }
            list_of_employee_records.push_back(employee);
        }
    fin.close();

    for(unsigned int i = 0; i < list_of_employee_records.size(); i++){
        cout << list_of_employee_records[i] << endl;
    }

    return list_of_employee_records;
}
