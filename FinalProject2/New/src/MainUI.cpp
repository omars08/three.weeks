#include "MainUI.h"
#include<iostream>
#include <PizzaUI.h>
#include "Toppings.h"
#include "Pizza.h"
#include "PizzaPlace.h"
#include "StaffLoginUI.h"
#include "StaffUI.h"
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
   cout << " |        Are you hungry?        |  |          Administrator        |" << endl;
   cout << " |  How about some nice pizza?   |  |   Press 'S' for staff login   |" << endl;
   cout << " |      Press 'O' to order!      |  |            Q: quit            |" << endl;
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
    MainUI mainui;
    char selection = '\0';

    while(selection != 'q'){
        mainui.introUI(); /// Prentar ASCII skjáinn.
        cout << "   User input: ";
        cin >> selection;


        if(selection == 'o' || selection == 'p' || selection == 'O' || selection == 'P'){
            ///make pizza
            PizzaUI pizza;
            cout << string(50, '\n');
            pizzaOrderUI();
            pizza.makePizzaUI();
        }
        /*else if(selection == 't'){
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
        }*/ ///Þetta á ekki að vera aðgengilegt í viðskiptavinamenu/MAINUI
        else if(selection == 's' || selection == 'S'){ //STAFF LOGIN MENU
            cout << string(50, '\n');
            StaffLoginUI stafflogin;
            //StaffLoginUI(login_name);
            string login_name = stafflogin.get_login_name();
            cout << "******************************************************************************************" << endl;
            cout << "* Welcome to staff login. To access staff menu, please enter the correct user name below *" << endl;
            cout << "******************************************************************************************" << endl;
            cout << string(3, '\n'); //empty space

            cout << "USER: ";
            cin >> login_name;

            if(stafflogin.check_login_name(login_name) == true){
                char loginInput;
                cout << "View staff options (y/n)? ";
                cin >> loginInput;

                    StaffUI staffui();
                    while(loginInput == 'y' || loginInput == 'Y'){

                    StaffUI staffui;
                    while(true){
                        if(loginInput == 'y' || loginInput == 'Y'){
                            staffui.printOrders(); ///prints the staff menu, 1-4.
                            int input;
                            cin >> input;
                            if(input != 'q' || input != 'Q'){
                            staffui.readOrders(input); ///reads the int input and enter the corresponding menu
                        }

                    }
                }
            }
            }
            else{
                cout << "Illegal user name: " << "\"" << login_name << "\"" << ". Entering Main UI.";
                cout << endl;
            }
        }
    }
}
