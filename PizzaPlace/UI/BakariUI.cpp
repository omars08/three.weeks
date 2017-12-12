#include "BakariUI.h"
#include "BakerStatus.h"
#include <iostream>
#include <ios>
#include <string>
#include <fstream>
using namespace std;
BakariUI::BakariUI()
{
    //ctor
}

void BakariUI::bakara()
{
    fif.open("PizzaOrder.txt", ios::app);
    int i = 0;
    while(!fif.eof())
    {

        getline(fif,line,',');
        getline(fif,line,',');
        cout << line << " " << i << endl;
        i++;
    }
    fif.close();

    cout << "**************************" << endl;
    cout << "* -- BAKARA INTERFACE -- *" << endl;
    cout << "*    Flag an order?(y/n) *" << endl;
    cout << "**************************" << endl;
    check = false;
    while(check == false)
    {
    cin >> select;
    if(select == "y" || select == "Y")
    {
        check = true;
        BakerStatus status;
        status.FlaggingOrders();
    }
    else if(select == "n" || select == "N")
    {
        check = true;
    }
    else
    {
        cout << "Wrong input! try again" << endl;
    }
    }
}
