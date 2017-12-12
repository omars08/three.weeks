#ifndef TOPPINGSSERVICE_H
#define TOPPINGSSERVICE_H
#include "StaffToppingControl.h"
#include "Toppings.h"
#include <vector>

class ToppingsService
{
    public:
        ToppingsService();
        vector<Toppings> getAllToppings();
        Toppings toppingAt(int index);

    private:
        StaffToppingControl control;

};

#endif // TOPPINGSSERVICE_H
