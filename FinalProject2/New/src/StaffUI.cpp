#include "StaffUI.h"
#include "WriteList.h"
#include "Pizza.h"
#include "PizzaUI.h"
#include <iostream>
#include <fstream>

using namespace std;
StaffUI::StaffUI()
{
    //ctor
}

StaffUI::~StaffUI()
{
    //dtor
}
void StaffUI::printOrders()
{
cout << "Staff menu: " << endl;
cout << "1. Read orders." << endl;
cout << "2. Control orders." << endl;
cout << "3. Topping control." << endl;
cout << "4. Pizza menu control." << endl;
cout << "Q: return to main menu" << endl;
cout << "   User input: ";
}
void StaffUI::readOrders(int input)
{
    WriteList writelist;
    if(input == 1){
        writelist.reviewPizza();
    }
}
