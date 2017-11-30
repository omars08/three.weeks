#include "Toppings.h"

Toppings::Toppings()
{
    name = "";
    price = 0.0;
}

Toppings::Toppings(string name, double price)
{
    this->name = name;
    this->price = price;
}

ostream& operator << (ostream& out, const Toppings& topping)
{
    out << "Name of topping: " << topping.name << endl;
    out << "Price of topping: " << topping.price << endl;
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
