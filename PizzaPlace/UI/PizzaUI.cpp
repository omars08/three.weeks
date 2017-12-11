  #include "PizzaUI.h"
#include <iostream>
#include "Pizza.h"
#include "Toppings.h"
#include <string>
#include <vector>
#include "WriteList.h"
#include "CustomerPrintToppings.h"
#include "MainUI.h"
#include "StaffToppingControl.h"
using namespace std;

PizzaUI::PizzaUI()
{

}

void PizzaUI::makePizzaUI()
{
    PizzaService pizzaService;
    char selection = '\0';
    string name = "";

    while(selection != 'q' || selection != 'Q'){
        cout << " ----------------------- " << endl;
        cout << "|                       |" << endl;
        cout << "| O:   Order from menu  |" << endl;
        cout << "| P:   Custom Pizza     |" << endl;
        cout << "| R:   Review order     |" << endl;
        cout << "| F:   Search for order |" << endl;
        cout << "| Q:   Return to        |" << endl;
        cout << "|      main menu.       |" << endl;
        cout << " ----------------------- " << endl;
        cout << "   User input: ";
        cin >> selection;
        if(selection == 'p' || selection == 'P'){
            Pizza pizza;
            cin >> pizza;
            int input;
            cout << endl;
            getToppinglist();
            cout << "Enter a number for corresponding topping (0 to finish): " << endl;
            cin >> input;
            while(input != 0){
                pizzaService.addToppingToPizza(input, pizza);
                pizzaService.storePizza(pizza);
                cout << endl;
                getToppinglist();
                cout << "Enter a number for corresponding topping (0 to finish): " << endl;
                cin >> input;
            }
        }
            /*if(selection == 'y'){
                //while(selection == 'y'){
                //Toppings toppings;
                    char input;
                    if(input != 'n'){
                            getToppinglist();
                        }
                    }
                //cin >> toppings;
                //thepizza.add_topping(toppings);
                cout << "Add another topping: (y/n)? ";
                cin >> selection;
                //selectCounter++;
                }
            }
            if (selection == 'n' || selection == 'N'){
                cout << "No topping added!";
                cout << "This is your pizza: " << endl;
                if(selectCounter == 0){
                    //string margaName = "Margherita";
                    //thepizza.set_name(margaName);
                }
                else{
                 //cout << thepizza; //current order
                }
            }
            //cout << thepizza;
            WriteList writelist;
            //writelist.storePizza(thepizza);

        }
        else if(selection == 'f' || selection == 'F')
        {
            int number;
            string answer;
            ifstream fif;
            cout << "Search by name or number? ";
            cin >> answer;
            string line;
            if(answer == "number")
            {
            cout << "Which order would you like to display? ";
            cin >> number;

            number = number * 4;


            fif.open ("PizzaOrder.txt", ios::app); /// endurvinna �ennan part

            for(int i = 0; i < number ;i++)
            {

                getline(fif,line);
                if(number - i <= 6 && number - i >= 2)
                {
                cout << line << endl;
                }

            }
            cout << endl;
            }
            else if(answer == "name")
            {
                int i = 0;
                cout << "Name: ";
                cin >> name;
                while(!fif.eof())
                {
                    getline(fif,line);
                    if(name.compare(line)==0)
                    {
                        getline(fif,line);
                        cout << line << endl;
                        i++;
                    }
                }
                cout << i << " matches" << endl;
            }
            fif.close();
        } ///�arf a� nota a�fer�ina �r week2 verkefninu
        if(selection == 'r' || selection == 'R'){
                WriteList writelist;
                writelist.reviewPizza();
            }
        else if(selection == 'o'){

        }
        else if(selection == 'q' || selection == 'Q'){

            MainUI mainui;
            cout << string(20, '\n');
            mainui.openingUI();
        }
        }
       */
    }
}
void PizzaUI::getToppinglist()
{
    ToppingsService toppingsService;
    vector<Toppings> myToppings = toppingsService.getAllToppings();
    for(unsigned int i = 0; i < myToppings.size(); i++){
        cout << i+1 << " " << myToppings[i] << endl;
    }
}
