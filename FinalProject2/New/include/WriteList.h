#ifndef WRITELIST_H
#define WRITELIST_H
#include "Toppings.h"
#include "Pizza.h"
#include <iostream>
#include <fstream>
#include "PizzaPlace.h"

using namespace std;

///�essi klasi s�r a�eins um a� skrifa � skr�

class WriteList
{
    public:
        WriteList();
        void storePizza (Pizza pizza);
        void storeToppingList (Toppings toppings);

    private:
};

#endif // WRITELIST_H
