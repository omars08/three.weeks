#ifndef STAFFTOPPINGCONTROL_H
#define STAFFTOPPINGCONTROL_H
#include "Toppings.h"
#include "Pizza.h"
#include <iostream>
#include <fstream>
#include "PizzaPlace.h"
#include "PizzaUI.h"

class StaffToppingControl
{
    public:
        StaffToppingControl();
        virtual ~StaffToppingControl();
        void ToppingControl0(Toppings toppings);
        void ToppingControl1(Toppings toppings);
        void ToppingControl2(Toppings toppings);
        void ToppingControl3(Toppings toppings);

        void PrintTopping0();
        void PrintTopping1();
        void PrintTopping2();
        void PrintTopping3();

    private:
};

#endif // STAFFTOPPINGCONTROL_H
