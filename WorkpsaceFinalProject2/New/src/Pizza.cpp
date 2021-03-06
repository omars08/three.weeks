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
    cout << "Name the pizza: " << endl;
    in >> pizza.name;
    cout << "What size is the pizza: (9, 12, 16) " << endl;
    in >> pizza.size;
    cout << "Choose topping: ";


    return in;
}

ostream& operator << (ostream& out, const Pizza& pizza) {
    out << "The name you chose: " << pizza.name << endl;
    out << "The size you chose: " << pizza.size << endl;
    out << "The toppings you chose: " << endl;
    for(unsigned int i = 0; i < pizza.toppings.size(); i++){
        out << pizza.toppings[i] << endl;
    }
        return out;
}

string Pizza::get_name()
{
    return name;
}

