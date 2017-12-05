#include "NewPizzaToppings.h"
#include "StaffLoginUI.h"
#include "StaffToppingControl.h"


NewPizzaToppings::NewPizzaToppings()
{
    //ctor
}

NewPizzaToppings::~NewPizzaToppings()
{
    //dtor
}
void NewPizzaToppings::PrintAvailableToppings(int input)
{
    StaffToppingControl toppingcontrol;
    if(input == 1){
        toppingcontrol.PrintTopping0();
    }
    else if(input == 2){
        toppingcontrol.PrintTopping1();
    }
    else if(input == 3){
        toppingcontrol.PrintTopping2();
    }
    else if(input == 4){
        toppingcontrol.PrintTopping3();
    }
}
