#include "PizzaService.h"
#include "ToppingsService.h"
#include "Toppings.h"


void PizzaService::addToppingToPizza(int input, Pizza &pizza)
{
    ToppingsService toppingService;
    vector<Toppings> allToppings = toppingService.getAllToppings(); //Sækja öll topping
    Toppings topping = allToppings[input-1];// leita af topping nr "input"
    pizza.add_topping(topping);
}
void PizzaService::storePizza(Pizza pizza)
{
    WriteList storepizza;
    storepizza.storePizza(pizza);
}
/*
ostream& operator << (ostream& out, const PizzaService& pizzaservice)
{
    out << "The toppings you chose: " << endl;
    for(unsigned int i = 0; i < pizzaservice.listOfToppings.size(); i++){
        out << pizzaservice.listOfToppings[i] << endl;
    }
        return out;
}


istream& operator >> (istream& in, Toppings& toppings)
{
    cout << "Please name the topping: ";
    in >> toppings.name;
    cout << "Please state the price: ";
    in >> toppings.price;
    return in;
}


//TODO
ostream& operator << (ostream& out, const PizzaService& pizzaservice){
    return out;
}*/
