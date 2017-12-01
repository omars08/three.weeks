#include "superheroii.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

    SuperheroII::Superhero(){
        string name = "unknown";
        int age = 0;
        char superpower = ' ';
    }

    SuperheroII::Superhero(string name, int age, char superpower){
        _name = name;
        _age = age;
        _superpower = superpower;
    }

    string SuperheroII::set_name()const{
        return _name;
    }

    int SuperheroII::set_age()const{
        return _age;
    }

    string SuperheroII::set_superpower()const{

        return _superpowerstring;

    }
    ostream& operator << (ostream& out, SuperheroII& superhero){
        out << "Name of superhero: " << superhero._name << endl;
        out << "Age of superhero: " << superhero._age << endl;
        out << "Power of superhero: ";
            if(superhero._superpower == 'f'){
                cout << "Flying";
            }
            else if(superhero._superpower == 'g'){
                cout << "Giant";
            }
            else if(superhero._superpower == 'h'){
                cout << "Hacking";
            }
            else if(superhero._superpower == 'n'){
                cout << "None";
            }
            else{
                cout << "Weakling";
            }
        out << endl;
        return out;
    }

    istream& operator >> (istream& in, SuperheroII& superhero){
        in >> superhero._name >> superhero._age >> superhero._superpower;
        return in;
    }

    void SuperheroII::fileinput(){

    fout.open("SuperheroData.txt", ios::app);

    fout << _name << " (" << _age << "): ";
            if(_superpower == 'f'){
                fout << "Flying";
            }
            else if(_superpower == 'g'){
                fout << "Giant";
            }
            else if(_superpower == 'h'){
                fout << "Hacking";
            }
            else if(_superpower == 'n'){
                fout << "None";
            }
            else{
                fout << "Weakling";
            }
    fout.close();
    }

    void SuperheroII::print_hero_from_file(){
        fin.open("SuperheroData.txt");
            while(!fin.eof()){
                getline(fin, line);
                cout << line << endl;
        }
        fin.close();
    }
