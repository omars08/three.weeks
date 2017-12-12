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
                ToppingsService toppingsService;
                vector<Toppings> myToppings = toppingsService.getAllToppings();
                for(unsigned int i = 0; i < myToppings.size(); i++){
                cout << i+1 << " " << myToppings[i] << endl;
                }
            }
            else if(char_input == 'a'){
            cout << "Create topping (y/n)? ";
            char input;
            cin >> input;
                if(input == 'y'){
                    cin >> toppings;
                    toppingcontrol.ToppingControl0(toppings);
            }
        }
    }
}
