#include "Toppings.h"

Toppings::Toppings()
{
    //number = 0;
    name = "";
    price = 0;
}

Toppings::Toppings(string name, int price)
{
    //this->number = number;
    this->name = name;
    this->price = price;
}
string Toppings::get_name()
{
    return this->name;
}
int Toppings::get_price()
{
    return this->price;
}

ostream& operator << (ostream& out, const Toppings& topping)
{
    out << topping.name << "," << topping.price;
    return out;
}

istream& operator >> (istream& in, Toppings& toppings)
{
    //cout << "Number of topping: ";
    //in >> toppings.number;
    cout << "Name the topping: "; /// m� ekki vera cout � service klasa!!!!
    in >> toppings.name;
    cout << "Price: "; //-- m� ekki handskrifa, ver�ur a� vera skr�� sj�lfvirkt me� st�r�inni. 1*sp, 1,25*sp og 1,50*sp
    in >> toppings.price;
    return in;
}
