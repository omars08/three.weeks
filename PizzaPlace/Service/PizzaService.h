#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H
#include <vector>
#include<string>
#include<iostream>
#include "ToppingsService.h"
#include "WriteList.h"

using namespace std;

class PizzaService
{
    public:
        PizzaService(){};
        void addToppingToPizza(int input, Pizza &pizza);
        //friend ostream& operator << (ostream& out, const PizzaService& pizzaservice);
        void storePizza(Pizza pizza);

    private:
};

#endif // PIZZAPLACE_H
