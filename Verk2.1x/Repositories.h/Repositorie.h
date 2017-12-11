#ifndef REPOSITORIE_H
#define REPOSITORIE_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Repositorie
{
    public:

        Repositorie();
        Repositorie(string name, int SSN, int salary,int month,int year);
        friend istream& operator >> (istream& in, Repositorie& re);
        friend ostream& operator << (ostream& out, Repositorie& re);
        void Rep_func();

    private:
    ifstream fif;
    ofstream fof;
    string name;
    string SSN;
    int salary;
    int month;
    int year;
};

#endif
