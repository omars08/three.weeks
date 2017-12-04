#include "Pizza.h"
#include <string.h>
#include<string>
#include<iostream>
#include <vector>

using namespace std;

Pizza::Pizza()
{
    name = "Margarita";
    size = 16;

}

Pizza::Pizza(string name, int size, vector<Toppings> toppings)
{
    this->name = name;
    this->size = size;

}

void Pizza::add_topping (Toppings topping)
{
    this->toppings.push_back(topping);
}

istream& operator >> (istream& in, Pizza& pizza)
{
    cout << "Name the pizza: ";
    in >> pizza.name;
    cout << "What size is the pizza: (9, 12, 16) ";
    in >> pizza.size;
        if(pizza.size <= 9){
            pizza.size = 9;
        }
        else if(pizza.size <= 12){
            pizza.size = 12;
        }
        else if(pizza.size <= 16 || pizza.size >= 16){
            pizza.size = 16;
        }
    return in;
}

ostream& operator << (ostream& out, const Pizza& pizza) {
    out << "Pizza: " << pizza.name << endl;
    out << "Size: " << pizza.size << endl;
    out << "Toppings: " << endl;
    for(unsigned int i = 0; i < pizza.toppings.size(); i++){
        out << pizza.toppings[i] << endl;
    }
        return out;
}

string Pizza::get_name()
{
    return name;
}

string Pizza::set_name(string name){
    this->name = name;
    return name;
}
