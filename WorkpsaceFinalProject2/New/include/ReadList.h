#ifndef READLIST_H
#define READLIST_H
#include "Toppings.h"
#include "Pizza.h"
#include <iostream>
#include <fstream>
#include "PizzaPlace.h"

using namespace std;

class ReadList
{
    public:
        ReadList();
        Toppings retrieveToppings();

    private:
};

#endif // READLIST_H
