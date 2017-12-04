#ifndef PIZZAPLACE_H
#define PIZZAPLACE_H
#include "Toppings.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "WriteList.h"
#include "Pizza.h"

using namespace std;

class PizzaPlace
{
    public:
        PizzaPlace();
        void addToppingToList(Toppings topping);
        friend ostream& operator << (ostream& out, const PizzaPlace& pizzaplace);

    private:
        vector<Toppings> listOfToppings;
};

#endif // PIZZAPLACE_H
