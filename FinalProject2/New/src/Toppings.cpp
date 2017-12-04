#include "Toppings.h"

Toppings::Toppings()
{
    number = 0;
    name = "";
}

Toppings::Toppings(int number, string name)
{
    this->number = number;
    this->name = name;
}

ostream& operator << (ostream& out, const Toppings& topping)
{
    out << "Number of topping: " << topping.number << endl;
    out << "Name of topping: " << topping.name << endl;
    return out;
}

istream& operator >> (istream& in, Toppings& toppings)
{
    cout << "Number of topping: ";
    in >> toppings.number;
    cout << "Please name the topping: ";
    in >> toppings.name;
    return in;
}
