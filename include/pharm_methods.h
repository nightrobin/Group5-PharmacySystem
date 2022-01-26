#ifndef PHARM_METHODS_H
#define PHARM_METHODS_H
#include <iostream>

#include "pharm_attributes.h"

using namespace std;

class pharm_methods
{
    public:
        pharm_methods();
        virtual ~pharm_methods();

        static const int medMax = 20;
        pharm_attributes med[medMax];

        void listofAddedDrugs();
        void addMed();
        void take_order();
        void modify(int orderID);
        void list_of_orders();
        void list_of_orders_forReceipt();
        void total_purchase();
        void e_prescription();
        void listofDrugs();
        void exit();

    protected:

    private:
};

#endif // PHARM_METHODS_H
