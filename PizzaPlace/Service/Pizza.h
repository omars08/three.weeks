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
        Pizza(int size, char base, int price, vector<Toppings> toppings);
        //friend istream& operator >> (istream& in, Pizza& pizza);
        int get_price();
        friend ostream& operator << (ostream& out, const Pizza& pizza);
        //string get_name();
        //string set_name(string name);
        //vector<Toppings> get_toppings();
        //void update_price(int additionalPrice);
    private:
        string name;
        //int phone;
        int size;
        char base;
        int price;
        vector<Toppings> toppings;

};

#endif // PIZZA_H
