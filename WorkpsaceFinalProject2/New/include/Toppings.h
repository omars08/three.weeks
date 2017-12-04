#ifndef TOPPINGS_H
#define TOPPINGS_H
#include<string>
#include<iostream>

using namespace std;


class Toppings
{
    public:
        Toppings();
        Toppings(string name, double price);
        friend istream& operator >> (istream& in, Toppings& toppings);
        friend ostream& operator << (ostream& out, const Toppings& topping);

    private:
        string name;
        double price;
};

#endif // TOPPINGS_H
