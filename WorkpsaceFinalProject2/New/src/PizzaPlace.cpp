#include "PizzaPlace.h"

PizzaPlace::PizzaPlace()
{
    //ctor
}

void PizzaPlace::addToppingToList (Toppings topping)
{
    this->listOfToppings.push_back(topping);
}

ostream& operator << (ostream& out, const PizzaPlace& pizzaplace)
{
    out << endl;
    out << "The toppings you chose: " << endl;
    for(unsigned int i = 0; i < pizzaplace.listOfToppings.size(); i++){
        out << pizzaplace.listOfToppings[i] << endl;
    }
        return out;
}
