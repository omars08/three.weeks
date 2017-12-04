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
void StaffToppingControl::ToppingControl0(Toppings toppings) /// B�tir vi� �keypis topping � skr� toppingfree.txt. 0 kr.
{
    ofstream fout;
    fout.open ("toppingfree.txt", ios::app);

    fout << toppings << endl;

    fout.close();
}
void StaffToppingControl::ToppingControl1(Toppings toppings) /// B�tir vi� gr�nmetis topping � skr� toppingfree.txt. 200 kr.
{
    ofstream fout;
    fout.open ("toppingVeg.txt", ios::app);

    fout << toppings << endl;

    fout.close();
}
void StaffToppingControl::ToppingControl2(Toppings toppings) /// B�tir vi� �keypis topping � skr� toppingfree.txt. 300 kr.
{
    ofstream fout;
    fout.open ("toppingMeat.txt", ios::app);

    fout << toppings << endl;

    fout.close();
}
void StaffToppingControl::ToppingControl3(Toppings toppings) /// B�tir vi� �keypis topping � skr� toppingfree.txt. 350 kr.
{
    ofstream fout;
    fout.open ("toppingLuxuryMeat.txt", ios::app);

    fout << toppings << endl;

    fout.close();
}
