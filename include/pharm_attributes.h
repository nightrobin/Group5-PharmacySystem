#ifndef PHARM_ATTRIBUTES_H
#define PHARM_ATTRIBUTES_H
#include <iostream>

using namespace std;

class pharm_attributes
{
    public:
        pharm_attributes();
        virtual ~pharm_attributes();

        double amount[28];
        double price[28];
        string date;
        string genName;         // generic name
        string numberofMedicine[28];
        int receipt_number;
        int orderNumber;        // order number | use:
        int medicineNum;        // Medicine Number | use:
        int dosage;             // dosage | use:
        int quantity;           // quantity | max of 10 orders  | use:
        bool isActive;

    protected:

    private:
};

#endif // PHARM_ATTRIBUTES_H
