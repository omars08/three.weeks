#include "Employee_Repository.h"

Employee_Repository::Employee_Repository()
{
    //ctor
}

void Employee_Repository::add_employee(const Employee& employee) ///Les employee af skjá og skellir því í txt skrá.
{
    ofstream fout;
    fout.open ("employee_records.txt", ios::app);
    if (fout.is_open()) {
        fout << employee;
        fout.close();
    }
    else {
        ///kasta villu eða eithvað
    }
}
///Þetta er fall sem skilar vector(fylki) af employees sem það les upp úr txt skrá. Svínvirkar.
vector<Employee> Employee_Repository::read_employee_files()
{
    string a; /// bý til string breytu
    vector<Employee> employee_list; ///Bý til vector af employee. Vectorinn er tómur núna
    ifstream fin;
    int counter = 0; ///Þessi countar hvar í línu við erum.
    fin.open ("employee_records.txt"); ///Opnar skrá
    if(fin.is_open()) { ///Leyfir okkur að bæta á skránna EF hún er opin
        while(!fin.eof()) {
            Employee employee; /// Búum til nýtt tilvik af Employee
            if(counter == 0){
                getline(fin, a, ','); ///Afmarkar hluti úr textaskrá afmarkaða af ',' og bætir þeim inn í string breytuna a
                employee.set_name(a); ///Bætir inn í tilvikið af employee. Í þessu tilfelli er það name.
                counter++; ///Bætir 1 við teljarann svo næsta atriði í línunni fari í næstu breytu.
            }
            if(counter == 1){ ///Ef counter == 1 þá fer það atriði í ssn breytuna í employee
                getline(fin, a, ',');
                employee.set_ssn(a);
                counter++;
                }
            if(counter == 2){
                getline(fin, a, ',');
                int c = atof(a.c_str()); ///Þetta tekur inn streng breytu og breytir henni í double breytu svo hún komist á réttu formati í salary dálkinn
                employee.set_salary(c);
                counter++;
                }
            if(counter == 3){
                getline(fin, a, ',');
                int c = atoi(a.c_str());///Þetta tekur inn streng breytu og breytir henni í int breytu svo hún komist á réttu formati í month dálkinn
                employee.set_month(c);
                counter++;
                }
            if(counter == 4){
                getline(fin, a, ',');
                int c = atoi(a.c_str());
                employee.set_year(c);
                employee_list.push_back(employee); ///hér eru öll gildi kominn í employee úr einni línu í text file og þá er þessum employee komið fyrir í vectornum employee_list
                counter = 0; ///Counter resettaður því línan er búin og ferlið hefst aftur með öðru tilviki af Employee.
                    }
            }
        fin.close();
        }

    return employee_list;///þegar búið er að lesa allar línurnar þá skilar fallið vectornum employee_list út.
}
