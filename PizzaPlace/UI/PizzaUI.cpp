#include "PizzaUI.h"
using namespace std;

PizzaUI::PizzaUI()
{

}

void PizzaUI::makePizzaUI()
{
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
            cout << "Customer name: ";
            cin >> name;
            PizzaOrder pizzaOrder(name);
            char morePizza = '\0';
            while( morePizza != 'n' && morePizza != 'N' ){
                vector<int> toppings;
                int input = -1;
                char base;
                int inches;
                int price;
                initPizza(inches, base, price);
                getToppinglist();
                cout << "Enter a number for corresponding topping (0 to finish): " << endl;
                cin >> input;
                while(input != 0){
                    toppings.push_back(input);
                    cout << endl;
                    getToppinglist();
                    cout << "Enter a number for corresponding topping (0 to finish): " << endl;
                    cin >> input;
                }
                pizzaOrder.addPizza(base, inches, price, toppings);
                cout << "Do you want to add more pizzas(y/n)? " << endl;
                cin >> morePizza;
                cout << endl;
            }
            pizzaService.addOrder(pizzaOrder);





            //pizzaService.storePizza(pizza);
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


            fif.open ("PizzaOrder.txt", ios::app); /// endurvinna þennan part

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
        } ///þarf að nota aðferðina úr week2 verkefninu
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
void PizzaUI::initPizza(int& inches, char& base, int& price){

    //cout << "Phone number: ";
    //in >> pizza.phone;
    cout << "What size is the pizza: (9, 12, 16): ";
    cin >> inches;
    if(inches <= 9){
        inches = 9;
        price = 1000;
    }
    else if(inches <= 12){
        inches = 12;
        price = 1500;
    }
    else if(inches <= 16 || inches >= 16){
        inches = 16;
        price = 2000;
    }
    cout << "Pizza bases available: thick (t) and italian (i): ";
    cin >> base;
    if(base == 'T' || base == 't'){
        base = 'T';
    }
    else if(base == 'i' || base == 'I'){
        base = 'I';
    }
    cout << endl;
}

void PizzaUI::getToppinglist()
{
    ToppingsService toppingsService;
    vector<Toppings> myToppings = toppingsService.getAllToppings();
    for(unsigned int i = 0; i < myToppings.size(); i++){
        cout << i+1 << " " << myToppings[i] << endl;
    }
}
