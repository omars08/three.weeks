#include "Heroes.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
Heroes::Heroes(string name,int age,char power)
{

    _name = name;
    _age = age;
    _power_letter = power;

}
istream& operator >> (istream& in, Heroes& Hero)
{
    in >> Hero._name >> Hero._age >> Hero._power_letter;
    return in;
}
ostream& operator << (ostream& out, Heroes& Hero)
{
    out << "Make a Hero buddy do it in order of name/age/SUPERPOWER(f,g,h,n) ";
    return out;
}
void Heroes::display()
{
    cout << _name << " (" << _age << ") " << power << endl;
}
void Heroes::fixdis()
{
    if(_power_letter == 'f')
    {
        power = "flying";
    }
    else if(_power_letter == 'g')
    {
        power = "giant";
    }
    else if(_power_letter == 'h')
    {
        power = "Hacker";
    }
    else if(_power_letter == 'n')
    {
        power = "None";
    }
    else
    {
        power = "Weakling";
    }
}
void Heroes::put_shit_heroe_in_file()
{
    fout.open("WannaBeHeroes.txt", ios::app);
    fout << _name << " (" << _age << ") " << power << endl;
    fout.close();
}
void Heroes::get_wannabe_hero()
{

    fif.open("WannaBeHeroes.txt", ios::app);
    while(!fif.eof()){

    getline(fif,line);
    cout << line << endl;

    }
    fif.close();
}
