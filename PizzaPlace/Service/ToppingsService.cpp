#include "ToppingsService.h"

ToppingsService::ToppingsService()
{
 //   this->control = control;
}


vector<Toppings> ToppingsService::getAllToppings()
{
    return control.getAllToppings();
}
Toppings ToppingsService::toppingAt(int index)
{
    vector<Toppings> all = getAllToppings();
    return all[index];
}
