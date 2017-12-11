#ifndef PIZZA_H
#define PIZZA_H
#include<string>
#include<iostream>
#include "Toppings.h"
#include <vector>

using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(string name, int size, char base, int price, vector<Toppings> toppings);
        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out, const Pizza& pizza);
        string get_name();
        void add_topping (Toppings topping);
        string set_name(string name);
        void update_price(int additionalPrice);
    private:
        string name;
        //int phone;
        int size;
        char base;
        int price;
        vector<Toppings> toppings;

};

#endif // PIZZA_H
