
#include "Toppings.h"
#include "StaffToppingControl.h"

CustomerPrintToppings::CustomerPrintToppings()
{
    //ctor
}

CustomerPrintToppings::~CustomerPrintToppings()
{
    //dtor
}
void CustomerPrintToppings::PrintToppings(int input){
    StaffToppingControl topping;
    if(input == 1){
        topping.PrintTopping0();
    }
    else if(input == 2){
        topping.PrintTopping1();
    }
    else if(input == 3){
        topping.PrintTopping2();
    }
    else if(input == 4){
        topping.PrintTopping3();
    }
}
