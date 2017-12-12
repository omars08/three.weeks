#include "Employee_Repository.h"

Employee_Repository::Employee_Repository()
{
    //ctor
}

void Employee_Repository::add_employee(const Employee& employee) ///Les employee af skj� og skellir �v� � txt skr�.
{
    ofstream fout;
    fout.open ("employee_records.txt", ios::app);
    if (fout.is_open()) {
        fout << employee;
        fout.close();
    }
    else {
        ///kasta villu e�a eithva�
    }
}
///�etta er fall sem skilar vector(fylki) af employees sem �a� les upp �r txt skr�. Sv�nvirkar.
vector<Employee> Employee_Repository::read_employee_files()
{
    string a; /// b� til string breytu
    vector<Employee> employee_list; ///B� til vector af employee. Vectorinn er t�mur n�na
    ifstream fin;
    int counter = 0; ///�essi countar hvar � l�nu vi� erum.
    fin.open ("employee_records.txt"); ///Opnar skr�
    if(fin.is_open()) { ///Leyfir okkur a� b�ta � skr�nna EF h�n er opin
        while(!fin.eof()) {
            Employee employee; /// B�um til n�tt tilvik af Employee
            if(counter == 0){
                getline(fin, a, ','); ///Afmarkar hluti �r textaskr� afmarka�a af ',' og b�tir �eim inn � string breytuna a
                employee.set_name(a); ///B�tir inn � tilviki� af employee. � �essu tilfelli er �a� name.
                counter++; ///B�tir 1 vi� teljarann svo n�sta atri�i � l�nunni fari � n�stu breytu.
            }
            if(counter == 1){ ///Ef counter == 1 �� fer �a� atri�i � ssn breytuna � employee
                getline(fin, a, ',');
                employee.set_ssn(a);
                counter++;
                }
            if(counter == 2){
                getline(fin, a, ',');
                int c = atof(a.c_str()); ///�etta tekur inn streng breytu og breytir henni � double breytu svo h�n komist � r�ttu formati � salary d�lkinn
                employee.set_salary(c);
                counter++;
                }
            if(counter == 3){
                getline(fin, a, ',');
                int c = atoi(a.c_str());///�etta tekur inn streng breytu og breytir henni � int breytu svo h�n komist � r�ttu formati � month d�lkinn
                employee.set_month(c);
                counter++;
                }
            if(counter == 4){
                getline(fin, a, ',');
                int c = atoi(a.c_str());
                employee.set_year(c);
                employee_list.push_back(employee); ///h�r eru �ll gildi kominn � employee �r einni l�nu � text file og �� er �essum employee komi� fyrir � vectornum employee_list
                counter = 0; ///Counter resetta�ur �v� l�nan er b�in og ferli� hefst aftur me� ��ru tilviki af Employee.
                    }
            }
        fin.close();
        }

    return employee_list;///�egar b�i� er a� lesa allar l�nurnar �� skilar falli� vectornum employee_list �t.
}
