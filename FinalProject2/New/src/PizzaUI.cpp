  #include "PizzaUI.h"
#include <iostream>
#include "Pizza.h"
#include "Toppings.h"
#include <string>
#include <vector>
#include "WriteList.h"

using namespace std;

PizzaUI::PizzaUI()
{

}

void PizzaUI::makePizzaUI()
{
    char selection = '\0';
    string name = "";

    while(selection != 'q' || selection != 'Q'){
    int selectCounter = 0;
        cout << "F: find old orders" << endl;
        cout << "P: make pizza" << endl;
        cout << "R: Review order " << endl;
        cout << "Q: quit" << endl;

        cin >> selection;

        if(selection == 'p' || selection == 'P'){
            Pizza thepizza;
            cout << "*Default pizza is Margherita, only cheese." << endl;
            cin >> thepizza;
            Toppings toppings;
            cout << "Want to add a topping: (y/n)? ";
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
            else if (selection == 'n' || selection == 'N'){
                cout << "No topping added ";
                cout << "This is your pizza: " << endl;
                if(selectCounter == 0){
                    string margaName = "Margherita";
                    thepizza.set_name(margaName);
                }
                else{
                 cout << thepizza; //current order
                }
            }
            cout << thepizza;
            WriteList writelist;
            writelist.storePizza(thepizza);

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
            cout << "Which order would you like to display? " << endl;
            cin >> number;

            number = number + (number * 5);


            fif.open ("PizzaOrder.txt", ios::app);

            for(int i = 0;i < number;i++)
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
                cout << "Name? ";
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
                cout << i << " Connects" << endl;
            }
            fif.close();
        }
        else if(selection == 'r' || selection == 'R'){
                WriteList writelist;
                writelist.reviewPizza();
            }
        if(selection == 'o'){

        }
    }
}
