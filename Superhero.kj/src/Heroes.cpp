#include "Heroes.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
Heroes::Heroes() /// Takes empty strings
{
   _name[0] = '\0';
   _age = 0;
   _power_letter = 'n';
}
Heroes::Heroes(char* name,int age,char power) ///takes in user input
{

    for(int i = 0; i < 30; i++){
        _name[i] = name[i];
    }
    _age = age;
    _power_letter = power;

}

istream& operator >> (istream& in, Heroes& Hero) ///overloaded operator
{
    in >> Hero._name >> Hero._age >> Hero._power_letter; ///takes user input in a correct row
    return in;
}

ostream& operator << (ostream& out, Heroes& Hero)
{
    out << Hero._name << " (" << Hero._age << ") "; /// outputs name and age
    if(Hero._power_letter == 'f') /// Checks the char letter
    {
        Hero.power = "Flying"; /// Gives the string the right superpower
        out << Hero.power << endl; /// writes out the superpower
    }
    else if(Hero._power_letter == 'g')
    {
        Hero.power = "Giant";
        out << Hero.power << endl;
    }
    else if(Hero._power_letter == 'h')
    {
        Hero.power = "Hacker";
        out << Hero.power << endl;
    }
    else if(Hero._power_letter == 'n')
    {
        Hero.power = "None";
        out << Hero.power << endl;
    }
    else ///If no char is a match
    {
        Hero.power = "Weakling";
        out << Hero.power << endl;
    }
    return out;
}

void Heroes::put_hero_in_file() /// Puts hero in txt file
{
    fout.open("WannaBeHeroes.txt", ios::app); /// Open text file and naming it
    fout << _name << " (" << _age << ") " << power << endl; /// Writes into text file
    fout.close(); ///close text file
}

void Heroes::get_wannabe_hero()
{

    fif.open("WannaBeHeroes.txt", ios::app); ///open text file
    while(!fif.eof()){  /// Runs til the end of file

    getline(fif,line); ///Gets every line
    cout << line << endl; /// outputs everyline

    }
    fif.close(); /// closes text file
}

void Heroes::binary_file_input() ///Binary text file
{

    cout << "please enter ammount of heroes to enter: "; ///asks for number
    cin >> number;

    Heroes *hero = new Heroes[number]; /// Prepares char array


    fout.open("binary_file.dat",ios::binary|ios::app); /// open input into binary file


    for(int i=0; i < number; i++) /// runs as many times as user inputs asks for
    {
        cout << "Please enter the Name, Age and Power character for hero nr " << i+1 << "." << endl;
        cin >> hero[i]; /// goes through array
        cout << endl;
    }
    fout.write((char*)(hero), sizeof(Heroes)*number); ///writes into file
    fout.close();

    fif.open("binary_file.dat", ios::binary); /// opens output for binary file

    fif.seekg(0,fif.end);
    int size_of = fif.tellg() / sizeof(Heroes); ///goes through the entire file to check the size
    fif.seekg(0,fif.beg);

    Heroes *hero2 = new Heroes[size_of]; /// creates another array to prepare char output

    if(fif.is_open()){
        fif.read((char*)(hero2), sizeof(Heroes)*size_of); /// reads binary input
    }

    else
    {
        cout << "Input file not open" << endl; /// checks if file hasn't been opened
    }
    for(int i = 0; i < size_of; i++){ ///goes through array
        cout << hero2[i]; ///goes through array
    }
    fif.close(); /// closes
    delete[] hero; ///deletes current array
    delete[] hero2;

}
