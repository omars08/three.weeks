#ifndef PIZZAUI_H
#define PIZZAUI_H
#include <iostream>
#include <string>
#include <vector>

#include "PizzaOrder.h"
#include "PizzaService.h"
#include "ToppingsService.h"

class PizzaUI
{
    public:
        PizzaUI();
        void makePizzaUI();
        void getToppinglist();

    private:
        void initPizza(int& inches, char& base, int& price);
        PizzaService pizzaService;


};

#endif // PIZZAUI_H
