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

    private:

};

#endif // TOPPINGSSERVICE_H
