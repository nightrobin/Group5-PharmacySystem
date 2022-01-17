#ifndef PHARM_ATTRIBUTES_H
#define PHARM_ATTRIBUTES_H
#include <iostream>

using namespace std;

const int maxrow = 10;

class pharm_attributes
{
    public:
         pharm_attributes();
        virtual ~pharm_attributes();

    int quantity;
    string genericName;
    string nameOfmed;
    string typeOfmed;
    double priceOfmed = 0;
    bool isPurchase = true;

    //discounts and tax
    double discountID = 0.05;
    double VAT = 0.12;

    //for infos of costumer:
    string nameOfcostumer;
    int contactOfcostumer;
    int ageOfcostumer;
    string addressOfcostumer;



    protected:

    private:
};

#endif // PHARM_ATTRIBUTES_H
