#ifndef PHARM_ATTRIBUTES_H
#define PHARM_ATTRIBUTES_H
#include <iostream>

using namespace std;

class pharm_attributes
{
    public:
         pharm_attributes();
        virtual ~pharm_attributes();


    string genericName;
    string nameOfmed;
    double priceOfmed;

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
