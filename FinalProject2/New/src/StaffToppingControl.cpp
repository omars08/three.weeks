#include "StaffToppingControl.h"
#include <iostream>
#include <fstream>
#include "Toppings.h"
#include "WriteList.h"
StaffToppingControl::StaffToppingControl()
{
    //ctor
}

StaffToppingControl::~StaffToppingControl()
{
    //dtor
}
void StaffToppingControl::ToppingControl0(Toppings toppings) /// Bætir við ókeypis topping í skrá toppingfree.txt. 0 kr.
{
    ofstream fout;
    fout.open ("toppingfree.txt", ios::app);
    cin >> toppings;
    fout << toppings << endl;
    fout << endl;

    fout.close();
}
void StaffToppingControl::ToppingControl1(Toppings toppings) /// Bætir við grænmetis topping í skrá toppingfree.txt. 200 kr.
{
    ofstream fout;
    fout.open ("toppingVeg.txt", ios::app);
    cin >> toppings;
    fout << toppings << endl;
    fout << endl;

    fout.close();
}
void StaffToppingControl::ToppingControl2(Toppings toppings) /// Bætir við ókeypis topping í skrá toppingfree.txt. 300 kr.
{
    ofstream fout;
    fout.open ("toppingMeat.txt", ios::app);
    cin >> toppings;
    fout << toppings << endl;
    fout << endl;

    fout.close();
}
void StaffToppingControl::ToppingControl3(Toppings toppings) /// Bætir við ókeypis topping í skrá toppingfree.txt. 350 kr.
{
    ofstream fout;
    fout.open ("toppingLuxuryMeat.txt", ios::app);
    cin >> toppings;
    fout << toppings << endl;
    fout << endl;

    fout.close();
}
void StaffToppingControl::PrintTopping0()
{
    string line;
    ifstream fin;
    fin.open("toppingfree.txt");
        do{
                getline(fin, line);
        cout << line << endl;
        }while(!fin.eof());
        fin.close();
}
void StaffToppingControl::PrintTopping1()
{
    string line;
    ifstream fin;
    fin.open("toppingVeg.txt");
        do{
                getline(fin, line);
        cout << line << endl;
        }while(!fin.eof());
        fin.close();
}
void StaffToppingControl::PrintTopping2()
{
    string line;
    ifstream fin;
    fin.open("toppingMeat.txt");
        do{
                getline(fin, line);
        cout << line << endl;
        }while(!fin.eof());
        fin.close();
}
void StaffToppingControl::PrintTopping3()
{
    string line;
    ifstream fin;
    fin.open("toppingLuxuryMeat.txt");
        do{
                getline(fin, line);
        cout << line << endl;
        }while(!fin.eof());
        fin.close();
}
