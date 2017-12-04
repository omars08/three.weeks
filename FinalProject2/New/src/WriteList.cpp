#include "WriteList.h"

WriteList::WriteList()
{
    //ctor
}

void WriteList::storePizza (Pizza pizza) ///Þetta fall tekur inn pizzu og bætir á lista. Sé önnur pizza útbúin þá bætist hún aftan á listan.
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
void WriteList::reviewPizza ()
{
    string line;
    ifstream fin;
    fin.open("PizzaOrder.txt");
        do{
                getline(fin, line);
        cout << line << endl;
        }while(!fin.eof());
        fin.close();
}


