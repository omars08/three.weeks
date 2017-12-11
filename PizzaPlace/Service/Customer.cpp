#include "Customer.h"
#include <iostream>
#include <string>

Customer::Customer(string name, int phone)
{
    this->name = name;
    this->phone = phone;
}

string Customer::get_name()
{
    return this->name;
}

int Customer::get_phone()
{
    return this->phone;
}

void Customer::set_name(string name)
{
    this->name = name;
}

void Customer::set_phone(int phone)
{
    this->phone = phone;
}


ostream& operator << (ostream& out, const Customer& customer)
{
    out << customer.name << "," << customer.phone << endl;
    return out;
}

istream& operator >> (istream& in, Customer& customer)
{
    in >> customer.name >> customer.phone;
    return in;
}

