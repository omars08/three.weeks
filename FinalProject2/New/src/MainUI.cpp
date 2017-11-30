#include "MainUI.h"
#include<iostream>
#include<PizzaUI.h>

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

        }
    }
}
