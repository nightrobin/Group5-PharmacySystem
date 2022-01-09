#ifndef PHARM_ATTRIBUTES_H
#define PHARM_ATTRIBUTES_H
#include <iostream>

using namespace std;

class pharm_attributes
{
    public:
        pharm_attributes();
        virtual ~pharm_attributes();

        int receipt_number;
        int numberofMedicine[28];
        int medicineName;
        string date;
        string genName;         // generic name
        int orderNumber;        // order number | use:
        int medicineNum;        // Medicine Number | use:
        int dosage;             // dosage | use:
        float price;            // price | use: only in input | automatic display
        int quantity;           // quantity | max of 10 orders  | use:
        bool isActive;

    protected:

    private:
};

#endif // PHARM_ATTRIBUTES_H
