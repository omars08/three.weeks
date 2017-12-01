#ifndef HEROES_H
#define HEROES_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Heroes
{
    public:
        Heroes();                                                 /// Takes in empty strings
        Heroes(char name[], int age, char power);                 /// Takes in name, age and a char letter
        friend istream& operator >> (istream& in, Heroes& Hero);  /// Overloading operators
        friend ostream& operator << (ostream& out, Heroes& Hero);
        void put_hero_in_file();                                   ///a function which saves the hero
        void get_wannabe_hero();                                  /// a function which displays all the heroes
        void binary_file_input();                                 /// function which uses a binary file

    private:
    char _name[30];                                                /// Declaring arguments
    int _age;
    char _power_letter;
    string power;
    ofstream fout;                                                 ///Declaring streams for text files
    ifstream fif;
    string line;
    int number;

};

#endif // HEROES_H
