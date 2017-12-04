#include "StaffUI.h"
#include "WriteList.h"
#include "Pizza.h"
#include "PizzaUI.h"
#include <iostream>
#include <fstream>
#include "StaffToppingControl.h"
#include "Toppings.h"
#include "MainUI.h"
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
    else if(input == 3){
        Toppings toppings;
        StaffToppingControl toppingcontrol;
        int input;
        cout << "Which topping category to alter?" << endl;
        cout << "1. Sauces and spices (0 kr.)." << endl;
        cout << "2. Vegetables and fruit (200 kr.)." << endl;
        cout << "3. Meats (300 kr.)." << endl;
        cout << "4. Luxury meats (350 kr.)." << endl;
        cout << "User input: ";
        cin >> input;
            if(input == 1){
                toppingcontrol.ToppingControl0(toppings);
            }
            else if(input == 2){
                toppingcontrol.ToppingControl1(toppings);
            }
            else if(input == 3){
                toppingcontrol.ToppingControl2(toppings);
            }
            else if(input == 4){
                toppingcontrol.ToppingControl3(toppings);
            }
    }
}
