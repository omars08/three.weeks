#include "WriteList.h"

WriteList::WriteList()
{
    //ctor
}

void WriteList::storeTopping (Pizza pizza) ///�etta fall tekur inn pizzu og b�tir � lista. S� �nnur pizza �tb�in �� b�tist h�n aftan � listan.
{
    ofstream fout;
    fout.open ("PizzaOrder.txt", ios::app);

    fout << pizza;

    fout.close();
}

void WriteList::storeToppingList (Toppings toppings) /// B�tir vi� topping � skr� Toppings.txt.
{
    ofstream fout;
    fout.open ("Toppings.txt", ios::app);

    fout << toppings;

    fout.close();
}
