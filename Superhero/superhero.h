#ifndef SUPERHERO_H
#define SUPERHERO_H
<<<<<<< HEAD
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
=======

#include <string>

>>>>>>> 692971027ab081b1591470eabb5c7fca8fa2f850

class Superhero
{
    public:
        Superhero(); //færibreytulaus smiður, default.
        Superhero(string name, int age, char superpower);
        string set_name()const;
        int set_age()const;
        string set_superpower()const;
        friend ostream& operator << (ostream& out, Superhero& superhero);
        friend istream& operator >> (istream& in, Superhero& superhero);
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
