#ifndef HEROES_H
#define HEROES_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Heroes
{
    public:
        Heroes(){};
        Heroes(string name, int age, char power);
        friend istream& operator >> (istream& in, Heroes& Hero);
        friend ostream& operator << (ostream& out, Heroes& Hero);
        void fixdis();
        void display();
        void put_shit_heroe_in_file();
        void get_wannabe_hero();

    private:
    string _name;
    int _age;
    char _power_letter;
    string power;
    ofstream fout;
    ifstream fif;
    string line;

};

#endif // HEROES_H
