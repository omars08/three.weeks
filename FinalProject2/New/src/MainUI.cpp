#include "MainUI.h"
#include<iostream>
#include <PizzaUI.h>
#include "Toppings.h"
#include "Pizza.h"
#include "PizzaPlace.h"
#include "StaffLoginUI.h"

using namespace std;

MainUI::MainUI()
{
    //ctor
}
void MainUI::introUI(){
   cout << "  _______  _        _     _______ _________ _______  _______ _______ " << endl;
   cout << " (  ____ \ ( )      ( )   (  ____ )\__   __// ___   )/ ___   )(  ___  )" << endl;
   cout << " | (    \/ | |      | |   | (    )|   ) (    \/   )  |\/   )  || (   ) |" << endl;
   cout << " | |    __| |__  __| |__ | (____)|   | |       /   )   /   )| (___) |" << endl;
   cout << " | |   (__   __)(__   __)|  _____)   | |      /   /   /   / |  ___  |" << endl;
   cout << " | |      | |      | |   | (         | |     /   /   /   /  | (   ) |" << endl;
   cout << " | (____/\ | |      | |   | )      ___) (___ /   (_/\ /   (_/\ | )   ( |" << endl;
   cout << " (_______/(_)      (_)   |/        \_______/(_______/_______/|/      \|" << endl;
   cout << " ----------------Fresh(ly) compiled pizzas since 2017----------------" << endl;
   cout << endl;
   cout << " --------------| W E L C O M E  T O  C + +  P I Z Z A |--------------" << endl;
   cout << endl;
   cout << "  -------------------------------    ------------------------------- " << endl;
   cout << " |        Are you hungry?        |  |                               |" << endl;
   cout << " |  How about some nice pizza?   |  |   Press 'S' for staff login   |" << endl;
   cout << " |      Press 'O' to order!      |  |                               |" << endl;
   cout << "  -------------------------------    ------------------------------- " << endl;
   cout << endl;
   cout << " For customer service and complaints, type \"ABORT\" and press enter." << endl;
   cout << " *************** CUSTOMER SITE IS UNDER CONSTRUCTION ****************" << endl;
   cout << endl;
}
void MainUI::pizzaOrderUI(){
cout << endl; //ascii art

}
void MainUI::openingUI()
{
    char selection = '\0';

    while(selection != 'q'){

        cout << "O: Create new order" << endl;
        cout << "T: Make new topping" << endl;
        cout << "Q: quit" << endl;

        cin >> selection;

        if(selection == 'o' || selection == 'p' || selection == 'O' || selection == 'P'){
            ///make pizza
            PizzaUI pizza;
            cout << string(50, '\n');
            pizzaOrderUI();
            pizza.makePizzaUI();
        }
        else if(selection == 't'){
            selection = '\0';
            PizzaPlace pizzaplace;
            do{
                Toppings topping;
                cin >> topping;
                pizzaplace.addToppingToList(topping);
                cout << "Do you want to add another topping to the list? ";
                cin >> selection;
            }
            while(selection == 'y');
            cout << pizzaplace;
        }
        else if(selection == 's' || selection == 'S'){ //STAFF LOGIN MENU
            cout << string(50, '\n');
            StaffLoginUI stafflogin;
            cin >> stafflogin;
            while(stafflogin.check_login_name(stafflogin) == true){
                cout << stafflogin << endl;
                cout << "Good." << endl; //test

            }
        }
    }
}