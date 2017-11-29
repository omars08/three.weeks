#ifndef SUPERHEROII_H
#define SUPERHEROII_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class SuperheroII
{
    public:
        Superhero(); //færibreytulaus smiður, default.
        Superhero(string name, int age, char superpower);
        string set_name()const;
        int set_age()const;
        string set_superpower()const;
        friend ostream& operator << (ostream& out, SuperheroII& superhero);
        friend istream& operator >> (istream& in, SuperheroII& superhero);
        void fileinput();
        void print_hero_from_file();

    private:
        string _name;
        int _age;
        char _superpower;
        string _superpowerstring;
        ofstream fout;
        ifstream fin;
        string line;
};

#endif // SUPERHERO_H
