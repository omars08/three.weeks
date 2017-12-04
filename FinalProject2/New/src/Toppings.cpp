#include "Toppings.h"

Toppings::Toppings()
{
    number = 0;
    name = "";
    price = 0;
}

Toppings::Toppings(int number, string name, int price)
{
    this->number = number;
    this->name = name;
    this->price = price;
}

ostream& operator << (ostream& out, const Toppings& topping)
{
    out << topping.number << " " << topping.name << ":" << topping.price;
    return out;
}

istream& operator >> (istream& in, Toppings& toppings)
{
    cout << "Number of topping: ";
    in >> toppings.number;
    cout << "Name the topping: ";
    in >> toppings.name;
    cout << "Price: ";
    in >> toppings.price;
    return in;
}
