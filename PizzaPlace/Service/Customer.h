#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <iostream>
using namespace std;


class Customer
{
    public:
        Customer();
        Customer(string name, int phone);
        string get_name();
        int get_phone();
        void set_name(string name);
        void set_phone(int phone);
        friend ostream& operator << (ostream& out, const Customer& customer);
        friend istream& operator >> (istream& in, Customer& customer);



    private:
        string name;
        int phone;
};

#endif // CUSTOMER_H
