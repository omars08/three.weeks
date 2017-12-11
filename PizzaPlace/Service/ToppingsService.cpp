#include "ToppingsService.h"
#include "Toppings.h"

ToppingsService::ToppingsService()
{
 //   this->control = control;
}


vector<Toppings> ToppingsService::getAllToppings()
{
    StaffToppingControl control;
    return control.getAllToppings();
}
