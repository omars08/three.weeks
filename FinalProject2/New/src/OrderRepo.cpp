#include "OrderRepo.h"
#include "Pizza.h"
#include <fstream>
#include <iostream>
OrderRepo::OrderRepo()
{
    //ctor
}
s
OrderRepo::~OrderRepo()
{
    //dtor
}
void storeOrder(const Pizza& pizza){
    ofstream fout;
    fout.open("pizzaOrders.txt");
    fout << "This is order:" << endl;
    fout << pizza;

    fout.close();
}

Pizza retrievePizzaOrder(){
    ifstream fin;
    fin.open("pizzaOrders.txt");
    Pizza pizza;
    fin >> pizza;

    fin.close();

    return pizza;
}
