#include "MainUI.h"
#include<iostream>
#include <PizzaUI.h>
#include "Toppings.h"
#include "Pizza.h"
#include "PizzaPlace.h"
#include "ReadList.h"

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
            //PizzaPlace pizzaplace;
            WriteList writelist;
            //ReadList readlist;
            do{
                Toppings topping;
                cin >> topping;
                //pizzaplace.addToppingToList(topping);
                writelist.storeToppingList(topping);
                ///Hér er hvert topping sett inn í skrá. Spurning hvort að við þurfum að geyma þessi topping í fylki inni í PizzaPlace
                ///klasanum þar sem þau eiga bara að fara inn í textaskránna en ekki geymast öðruvísi.
                cout << "Do you want to add another topping to the list? ";
                cin >> selection;
            }
            while(selection == 'j');

            //cout << pizzaplace;
        }
    }
}
