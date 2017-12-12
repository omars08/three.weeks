#ifndef PIZZAORDER_H
#define PIZZAORDER_H

#include <vector>
#include<string>
#include<iostream>

#include "ToppingsService.h"
#include "Toppings.h"
#include "Pizza.h"


class PizzaOrder
{
    public:
        PizzaOrder(){};
        PizzaOrder(string name);
        void addPizza(char base, int inches, int price, vector<int> toppingsId);
        vector<Pizza> getPizzas();
        string get_name();

    private:
        string name;
        vector<Pizza> current_order;
        ToppingsService toppingService;
};

#endif // PIZZAORDER_H

