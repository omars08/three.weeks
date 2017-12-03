#ifndef ORDERREPO_H
#define ORDERREPO_H
#include "Pizza.h"

class OrderRepo
{
    public:
        OrderRepo();
        virtual ~OrderRepo();
        void storeOrder(const Pizza& pizza);
        Pizza retrievePizzaOrder();

    private:
};

#endif // ORDERREPO_H
