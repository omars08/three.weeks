#ifndef TOPPINGS_H
#define TOPPINGS_H
#include<string>
#include<iostream>

using namespace std;


class Toppings
{
    public:
        Toppings();
        Toppings(int number, string name);
        friend istream& operator >> (istream& in, Toppings& toppings);
        friend ostream& operator << (ostream& out, const Toppings& topping);

    private:
        int number;
        string name;

};

#endif // TOPPINGS_H
