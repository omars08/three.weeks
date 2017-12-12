#include "StaffToppingControl.h"
#include <iostream>
#include <fstream>
#include "Toppings.h"
#include "WriteList.h"
#include <stdlib.h>
#include <vector>
using namespace std;

/*
StaffToppingControl::StaffToppingControl()
{
    //ctor
}*/
StaffToppingControl::~StaffToppingControl(){}
void StaffToppingControl::ToppingControl0(Toppings toppings) ///
{
    ofstream fout;
    fout.open ("toppinglist.txt", ios::app);
    //cin >> toppings;
    fout << toppings;

    fout.close();
}

vector<Toppings> StaffToppingControl::getAllToppings()
{

vector <Toppings> toppingVector;
    //int counter = 0;
    string line;
    string name;
    int price;
    ifstream fin;
    fin.open("toppinglist.txt");
    if(fin.is_open()){
        while(getline(fin, name, ',')){
            string tempPrice = "";
            getline(fin, tempPrice, ',');

            if(name[0] == '\n'){
                name.erase(0,1);
            }
            if(tempPrice[0] == '\n'){
                tempPrice.erase(0,1);
            }

            price = atoi(tempPrice.c_str());
            Toppings topping(name, price);
            toppingVector.push_back(topping);
        }
    }
        fin.close();
        return toppingVector;
    }
