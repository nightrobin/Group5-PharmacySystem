#ifndef PHARM_ATTRIBUTES_H
#define PHARM_ATTRIBUTES_H
#include <iostream>

using namespace std;

class pharm_attributes
{
    public:
        pharm_attributes();
        virtual ~pharm_attributes();


        string date;
        string genName;         // generic name
        string numberofMedicine[28] ={"  16\t\t\t    SALBUTAMOL 2mg\60ml Syrup \t\t\tVentolin\t\t\tP28.00",
        "   2\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tMucosolvan\t\t\tP35.00",
        "   3\t\t\t    AMBROXOL 30mg Tab\t\t\t\tMucosolvan\t\t\tP1.25",
        "   4\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tAmbrolex\t\t\tP35.00",
        "   5\t\t\t    CARBOCISTEINE 500mg Cap\t\t\tSolmux\t\t\t\tP2.75",
        "   6\t\t\t    CARBOCISTEINE 250mg/60ml Syrup\t\tSolmux\t\t\t\tP39.50",
        "   7\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tRobitussin\t\t\tP26.75",
        "   8\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tBenadryl Exp\t\t\tP26.75",
        "   9\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tTranspulmin-G\t\t\tP26.75",
        "  10\t\t\t    PHENYL+PARA+CPM Tab (COLDZEP)\t\tNeozep\t\t\t\tP3.00",
        "  11\t\t\t    MEFENAMIC ACID 250mg Cap \t\t\tDolfenal\t\t\tP1.50",
        "  12\t\t\t    MEFENAMIC ACID 500mg Cap \t\t\tDolfenal\t\t\tP2.00",
        "  13\t\t\t    PARACETAMOL 250mg/60ml Syrup \t\tBiogesic\t\t\tP30.00",
        "  14\t\t\t    PARACETAMOL 500mg Tab \t\t\tBiogesic\t\t\tP0.75",
        "  15\t\t\t    PARACETAMOL+IBUP Cap (ENERLAX)\t\tAlaxan FR\t\t\tP2.75",
        "  16\t\t\t    SALBUTAMOL 2mg\60ml Syrup \t\t\tVentolin\t\t\tP28.00",
        "  17\t\t\t    SALBUTAMOL 2mg Tab \t\t\t\tVentolin\t\t\tP0.75",
        "  18\t\t\t    SALBUTAMOL Nebules \t\t\t\tVentolin\t\t\tP8.50",
        "  19\t\t\t    BISACODYL 5mg Tab (For Constipation)\tDulcolax\t\t\tP2.00",
        "  20\t\t\t    LOPERAMIDE 2mg Cap (For Diarrhea)\t\tImodium\t\t\t\tP1.75",
        "  21\t\t\t    LOPERAMIDE 2mg Cap (For Diarrhea)\t\tDiatabs\t\t\t\tP1.75",
        "  22\t\t\t    DOMPERIDOME 10mg Tab (For Indigestion)\tMotilium\t\t\tP5.00",
        "  23\t\t\t    HYOSCINE 10mg Tab (For Stomachache)\t\tBuscopan\t\t\tP5.00",
        "  24\t\t\t    ASCORBIC 120ml Syrup (Lemon-Cee)\t\tCeelin\t\t\t\tP47.00",
        "  25\t\t\t    ASCORBIC 500mg Tab (Lemon-Cee)\t\tPotencee\t\t\tP1.50",
        "  26\t\t\t    MULITIVITAMINS 120ml Syrup\t\t\tEnervon Syrup\t\t\tP60.00",
        "  27\t\t\t    MULTIVITAMINS + IRON Cap\t\t\tStresstab\t\t\tP2.25",
        "  28\t\t\t    MULTIVITAMINS + MINERALS Cap\t\tClusivol\t\t\tP4.00"

    };
        int receipt_number;
        int medicineName;
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
