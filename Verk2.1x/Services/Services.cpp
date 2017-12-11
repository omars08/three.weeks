#include "Services.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
Services::Services()
{

}

void Services::service_func(string SSN)
{
    int offset;
    int counter = 0;
    int check;
    bool checkcheck = false;
    int i = 0;
    fif.open("EmployInfo.txt", ios::app);
    while(!fif.eof())
    {
        getline(fif,line,' ');
        if((offset = line.find(SSN,0)) != string::npos)
        {
            check = counter
            <counter> == check;
        }

            counter++;
    }

    fif.close();
    fif.open("EmployInfo.txt", ios::app);
    counter = 0;
    while(!fif.eof())
    {

        if(counter > check -2 && check +4 > counter)
        {
            cout << line << endl;
        }
        getline(fif,line);
        counter++;
    }

    fif.close();
}

