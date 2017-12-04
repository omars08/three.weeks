#include "PizzaUI.h"
#include <iostream>
#include "Pizza.h"
#include "Toppings.h"
#include <string>
#include <WriteList.h>

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

        cout << "p: make pizza" << endl;
        cout << "o: Review order " << endl;
        cout << "q: quit" << endl;

        cin >> selection;

        if(selection == 'p'){
            Pizza thepizza;
            cin >> thepizza;

            cout << "Want to add topping: j or n? ";
            cin >> selection;

            if(selection == 'j'){
                while(selection == 'j'){
                Toppings toppings;
                cin >> toppings;
                thepizza.add_topping(toppings);
                cout << "Want to add topping: j or n? ";
                cin >> selection;
                }
            }
            if (selection == 'n'){
                cout << "No topping added ";
                cout << "This is your pizza: " << endl;
                cout << thepizza;
                WriteList writelist;
                writelist.storeTopping(thepizza);

            }

        }
        if(selection == 'o'){

        }
    }
}
