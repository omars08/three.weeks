#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H
#include <vector>
//#include<string>
#include <iostream>
#include "WriteList.h"
#include "PizzaOrder.h"


using namespace std;

class PizzaService
{
    public:
        PizzaService(){};
        //void addToppingToPizza(int input, Pizza &pizza);
        //friend ostream& operator << (ostream& out, const PizzaService& pizzaservice);
        void addOrder(PizzaOrder pizzaOrder);

    private:
        WriteList writeList;
};

#endif // PIZZAPLACE_H
