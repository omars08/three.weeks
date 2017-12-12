#include "PizzaOrder.h"

PizzaOrder::PizzaOrder(string name)
{
    this->name = name;
}

void PizzaOrder::addPizza(char base, int inches, int price, vector<int> toppingsId)
{
    vector<Toppings> toppings;
    for(unsigned int i = 0; i < toppingsId.size(); i++ ){
        Toppings t = toppingService.toppingAt(toppingsId[i] - 1);
        price += t.get_price();
        toppings.push_back(t);
    }

    Pizza pizza(inches, base, price, toppings);
    current_order.push_back(pizza);
}

vector<Pizza> PizzaOrder::getPizzas()
{
    return this->current_order;
}
string PizzaOrder::get_name()
{
    return this->name;
}
int PizzaOrder::get_totalPrice()
{
    int totalPrice = 0;
    for(unsigned int i = 0; i < current_order.size(); i++){
        totalPrice += current_order[i].get_price();
    }
    return totalPrice;
}
