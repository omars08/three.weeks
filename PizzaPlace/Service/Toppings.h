#ifndef TOPPINGS_H
#define TOPPINGS_H
#include<string>
#include<iostream>

using namespace std;


class Toppings
{
    public:
        Toppings();
        Toppings(string name, int price);
        friend istream& operator >> (istream& in, Toppings& toppings);
        friend ostream& operator << (ostream& out, const Toppings& topping);
        string get_name();
        int get_price();

    private:
        int number;
        string name;
        int price;

};

#endif // TOPPINGS_H
