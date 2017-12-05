#include "Pizza.h"
#include <string.h>
#include <string>
#include <iostream>
#include <vector>
#include <Toppings.h>

using namespace std;

Pizza::Pizza()
{
    name = "Margarita";
    size = 16;

}

Pizza::Pizza(string name, int size, int phone, char base, vector<Toppings> toppings)
{
    this->name = name;
    this->size = size;
    this->phone = phone;
    this->base = base;

}

void Pizza::add_topping (Toppings topping)
{
    this->toppings.push_back(topping);
}

istream& operator >> (istream& in, Pizza& pizza)
{
    cout << "Your name: ";
    in >> pizza.name;
    cout << "Phone number: ";
    in >> pizza.phone;
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
    cout << "Pizza bases available: thick (t) and italian (i): ";
    in >> pizza.base;
        if(pizza.base == 'T' || pizza.base == 't'){
            pizza.base = 'T';
        }
        else if(pizza.base == 'i' || pizza.base == 'I'){
            pizza.base = 'I';
        }
    return in;
}

ostream& operator << (ostream& out, const Pizza& pizza) {
    out << endl;
    out << " Name: " << pizza.name << ", phone number: " << pizza.phone << endl;
    out << " Size: " << pizza.size << endl;
    out << " Base: " << pizza.base << endl;
    out << " Toppings: ";
    for(unsigned int i = 0; i < pizza.toppings.size(); i++){
        out << pizza.toppings[i] << " ";
    }
    out << endl;
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
