#ifndef WRITELIST_H
#define WRITELIST_H
#include "Toppings.h"
#include "Pizza.h"
#include <iostream>
#include <fstream>
#include "PizzaPlace.h"
#include "PizzaUI.h"

using namespace std;

///Þessi klasi sér aðeins um að skrifa í skrá

class WriteList
{
    public:
        WriteList();
        void storePizza (Pizza pizza);
        void storeToppingList (Toppings toppings);
        void reviewPizza ();

    private:
};

#endif // WRITELIST_H
