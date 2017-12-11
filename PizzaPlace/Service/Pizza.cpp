#include "Pizza.h"
#include <string.h>
#include <string>
#include <iostream>
#include <vector>
#include <Toppings.h>

using namespace std;

Pizza::Pizza()
{
    ///name = ""; - �urfum vi� n�llstilli, ekki bara villumeldingu ef vv er a� skrifa eh �leyfilegt � input?
    ///size = 0;

}

Pizza::Pizza(string name, int size, int phone, char base, int price, vector<Toppings> toppings)
{
    this->name = name;
    this->size = size;
    this->phone = phone;
    this->base = base;
    this->price = price;

}

void Pizza::add_topping (Toppings topping)
{
    this->toppings.push_back(topping);
}

istream& operator >> (istream& in, Pizza& pizza)
{
    pizza.price = 0;
    cout << "Customer name: ";
    in >> pizza.name;
    cout << "Phone number: ";
    in >> pizza.phone;
    cout << "What size is the pizza: (9, 12, 16): ";
    in >> pizza.size;
        if(pizza.size <= 9){
            pizza.size = 9;
            pizza.price = pizza.price + 1000;
        }
        else if(pizza.size <= 12){
            pizza.size = 12;
            pizza.price = pizza.price + 1500;
        }
        else if(pizza.size <= 16 || pizza.size >= 16){
            pizza.size = 16;
            pizza.price = pizza.price + 2000;
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
    out << " Toppings: " << endl;
    for(unsigned int i = 0; i < pizza.toppings.size(); i++){
        out << pizza.toppings[i] << " ";
    }
    out << endl;
    out << " Price: " << pizza.price;
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
