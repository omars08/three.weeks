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
        char char_input;
        cout << "Read (r) or alter (a) the toppings?" << endl;
        cout << "   User input: ";
        cin >> char_input;
            if(char_input == 'r'){
                cout << "Which topping category to print?" << endl;
                cout << "1. Sauces and spices." << endl;
                cout << "2. Vegetables and fruit." << endl;
                cout << "3. Meats." << endl;
                cout << "4. Luxury meats." << endl;
                cout << "   User input: ";
                int input;
                cin >> input;
                    if(input == 1){
                        toppingcontrol.PrintTopping0();
                    }
                    else if(input == 2){
                        toppingcontrol.PrintTopping1();
                    }
                    else if(input == 3){
                        toppingcontrol.PrintTopping2();
                    }
                    else if(input == 4){
                        toppingcontrol.PrintTopping3();
                    }

                }
            else if(char_input == 'a'){
        cout << "Which topping category to alter?" << endl;
        cout << "1. Sauces and spices (0 kr.)." << endl;
        cout << "2. Vegetables and fruit (200 kr.)." << endl;
        cout << "3. Meats (300 kr.)." << endl;
        cout << "4. Luxury meats (350 kr.)." << endl;
        cout << "   User input: ";
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
}
