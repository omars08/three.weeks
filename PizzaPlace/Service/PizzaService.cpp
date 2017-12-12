#include "PizzaService.h"

void PizzaService::addOrder(PizzaOrder pizzaOrder){

    writeList.storeName(pizzaOrder.get_name());
    vector<Pizza> pizzas = pizzaOrder.getPizzas();
    for(unsigned int i = 0; i < pizzas.size(); i++){
        writeList.storePizza(pizzas[i]);
    }
    writeList.storeTotalPrice(pizzaOrder.get_totalPrice());
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
