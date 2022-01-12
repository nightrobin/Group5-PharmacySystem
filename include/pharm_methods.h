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

        static const int medMax = 10;
        pharm_attributes med[medMax];

        void menu();
        void listofDrugs();
        void addMed();
        void take_order(int orderID);
        void modify(int orderID);
        void list_of_orders(int orderID);
        void quantity_of_purch_med(int orderID);
        void total_purchase(int orderID);
        void e_prescription();
        void exit();




    protected:

    private:
};

#endif // PHARM_METHODS_H
