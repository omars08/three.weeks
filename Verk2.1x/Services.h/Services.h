#ifndef SERVICES_H
#define SERVICES_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Services
{
    public:
        Services();
        void service_func(string SSN);



    private:
    string SSN;
    string line;
    ifstream fif;
};

#endif // SERVICES_H
