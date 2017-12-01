#include "PizzaUI.h"
#include <iostream>
#include "Pizza.h"
#include "Toppings.h"
#include <string>
#include <vector>

using namespace std;

PizzaUI::PizzaUI()
{
    //ctor
}

void PizzaUI::makePizzaUI()
{
    char selection = '\0';
    string name = "";

    while(selection != 'q'){
    int selectCounter = 0;
        cout << "P: make pizza" << endl;
        cout << "R: Review order " << endl;
        cout << "Q: quit" << endl;

        cin >> selection;

        if(selection == 'p'){
            Pizza thepizza;
            cout << "Default pizza is Margherita, only cheese" << endl;
            cin >> thepizza;
            Toppings toppings;
            cout << "Want to add topping: (y/n)? ";
            cin >> selection;

            if(selection == 'y'){
                while(selection == 'y'){
                Toppings toppings;
                cin >> toppings;
                thepizza.add_topping(toppings);
                cout << "Add another topping: (y/n)? ";
                cin >> selection;
                selectCounter++;
                }
            }
            else if (selection == 'n'){
                cout << "No topping added ";
                cout << "This is your pizza: " << endl;
                if(selectCounter == 0){
                    string margaName = "Margherita";
                    thepizza.set_name(margaName);
                }
                else{
                 cout << thepizza; //current order
                }
            cout << thepizza;
            }

        }
        if(selection == 'o'){

        }
    }
}
