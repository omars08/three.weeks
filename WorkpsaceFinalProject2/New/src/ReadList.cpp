#include "ReadList.h"

ReadList::ReadList()
{
    //ctor
}

Toppings ReadList::retrieveToppings()
{
    Toppings toppings;

    ifstream fin;
    fin.open("Toppings.txt");
    fin >> toppings;
    fin.close();
    return toppings;
}

