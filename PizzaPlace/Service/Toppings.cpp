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
    //cout << "Price: "; -- má ekki handskrifa, verður að vera skráð sjálfvirkt með stærðinni. 1*sp, 1,25*sp og 1,50*sp
    //in >> toppings.price;
    return in;
}
