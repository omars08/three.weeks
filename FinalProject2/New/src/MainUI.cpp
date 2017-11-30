#include "MainUI.h"
#include<iostream>
#include <PizzaUI.h>
#include "Toppings.h"
#include "Pizza.h"
#include "PizzaPlace.h"

using namespace std;

MainUI::MainUI()
{
    //ctor
}

void MainUI::openingUI()
{
    char selection = '\0';

    while(selection != 'q'){

        cout << "p: Make pizza" << endl;
        cout << "t Make new topping" << endl;
        cout << "q: quit" << endl;

        cin >> selection;

        if(selection == 'p'){
            ///make pizza
            PizzaUI pizza;
            pizza.makePizzaUI();

        }
        if(selection == 't'){
            selection = '\0';
            PizzaPlace pizzaplace;
            do{
                Toppings topping;
                cin >> topping;
                pizzaplace.addToppingToList(topping);
                cout << "Do you want to add another topping to the list? ";
                cin >> selection;
            }
            while(selection == 'j');
            cout << pizzaplace;
        }
    }
}
