#ifndef WRITELIST_H
#define WRITELIST_H
#include "Toppings.h"
#include "Pizza.h"
#include <iostream>
#include <fstream>

using namespace std;

//�essi klasi s�r a�eins um a� skrifa � skr�

class WriteList
{
    public:
        WriteList();
        void storeName(string name);
        void storePizza (Pizza pizza);
        void storeTotalPrice(int totalPrice);
        void storeToppingList (Toppings toppings);
        void reviewPizza ();

    private:
        int totalPrice;
};

#endif // WRITELIST_H
