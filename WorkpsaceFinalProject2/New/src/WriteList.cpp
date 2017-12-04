#include "WriteList.h"

WriteList::WriteList()
{
    //ctor
}

void WriteList::storeTopping (Pizza pizza) ///Þetta fall tekur inn pizzu og bætir á lista. Sé önnur pizza útbúin þá bætist hún aftan á listan.
{
    ofstream fout;
    fout.open ("PizzaOrder.txt", ios::app);

    fout << pizza;

    fout.close();
}

void WriteList::storeToppingList (Toppings toppings) /// Bætir við topping í skrá Toppings.txt.
{
    ofstream fout;
    fout.open ("Toppings.txt", ios::app);

    fout << toppings;

    fout.close();
}
