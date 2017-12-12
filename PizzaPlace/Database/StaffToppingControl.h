#ifndef STAFFTOPPINGCONTROL_H
#define STAFFTOPPINGCONTROL_H
#include "Toppings.h"
#include "Pizza.h"
#include <iostream>
#include <fstream>

class StaffToppingControl
{
    public:
        StaffToppingControl(){ };
        virtual ~StaffToppingControl();
        void ToppingControl0(Toppings toppings);
        /*void ToppingControl1(Toppings toppings);
        void ToppingControl2(Toppings toppings);
        void ToppingControl3(Toppings toppings);*/

        vector<Toppings> getAllToppings();
        /*void PrintTopping1();
        void PrintTopping2();
        void PrintTopping3();*/

    private:
        Toppings topping;
};

#endif // STAFFTOPPINGCONTROL_H
