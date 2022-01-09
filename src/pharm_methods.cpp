#include "pharm_methods.h"


pharm_methods::pharm_methods()
{
    //ctor
}

pharm_methods::~pharm_methods()
{
    //dtor
}
void pharm_methods::take_order(){

system("CLS");

    cout << "\t\t\t\t---------- LIST OF MEDICINES ----------" << endl <<endl;

    cout << "**************************************************************************************************************" << endl;
    cout << "PRODUCT NO.\t\t\tPRODUCT NAME|mg/ml\t\t\tGENERIC NAME\t\t\tPRICE" << endl;
    cout << "**************************************************************************************************************" << endl;

    { //COUGHS AND COLDS
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\tFOR COUGH AND COLDS" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

        //Mucosolvan Brand
    cout << "   1\t\t\t    AMBROXOL 15mg/60ml Syrup\t\t\tMucosolvan\t\t\tP30.00" << endl;
    cout << "   2\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tMucosolvan\t\t\tP35.00"<< endl;
    cout << "   3\t\t\t    AMBROXOL 30mg Tab\t\t\t\tMucosolvan\t\t\tP1.25" << endl;
        //Ambrolex Brand
    cout << "   4\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tAmbrolex\t\t\tP35.00" << endl;
        //Solmux Brand
    cout << "   5\t\t\t    CARBOCISTEINE 500mg Cap\t\t\tSolmux\t\t\t\tP2.75" << endl;
    cout << "   6\t\t\t    CARBOCISTEINE 250mg/60ml Syrup\t\tSolmux\t\t\t\tP39.50" << endl;
        //Robitussin Brand
    cout << "   7\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tRobitussin\t\t\tP26.75" << endl;
        //Benadryl Exp Brand
    cout << "   8\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tBenadryl Exp\t\t\tP26.75" << endl;
        //Transpulmin-G
    cout << "   9\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tTranspulmin-G\t\t\tP26.75" << endl;
        //Neozep
    cout << "  10\t\t\t    PHENYL+PARA+CPM Tab (COLDZEP)\t\tNeozep\t\t\t\tP3.00" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    }


    {//FOR FEVER & BODY PAIN
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\tFOR FEVER AND BODY PAIN" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    cout << "  11\t\t\t    MEFENAMIC ACID 250mg Cap \t\t\tDolfenal\t\t\tP1.50" << endl;
    cout << "  12\t\t\t    MEFENAMIC ACID 500mg Cap \t\t\tDolfenal\t\t\tP2.00" << endl;
    cout << "  13\t\t\t    PARACETAMOL 250mg/60ml Syrup \t\tBiogesic\t\t\tP30.00" << endl;
    cout << "  14\t\t\t    PARACETAMOL 500mg Tab \t\t\tBiogesic\t\t\tP0.75" << endl;
    cout << "  15\t\t\t    PARACETAMOL+IBUP Cap (ENERLAX)\t\tAlaxan FR\t\t\tP2.75" << endl;

    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    }


    {//FOR ASTHMA
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\tFOR ASTHMA" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    cout << "  16\t\t\t    SALBUTAMOL 2mg\60ml Syrup \t\t\tVentolin\t\t\tP28.00" << endl;
    cout << "  17\t\t\t    SALBUTAMOL 2mg Tab \t\t\t\tVentolin\t\t\tP0.75" << endl;
    cout << "  18\t\t\t    SALBUTAMOL Nebules \t\t\t\tVentolin\t\t\tP8.50" << endl;

    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    }


    {//FOR STOMACH PAIN
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\tFOR STOMACH PAIN" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    cout << "  19\t\t\t    BISACODYL 5mg Tab (For Constipation)\tDulcolax\t\t\tP2.00" << endl;
    cout << "  20\t\t\t    LOPERAMIDE 2mg Cap (For Diarrhea)\t\tImodium\t\t\t\tP1.75" << endl;
    cout << "  21\t\t\t    LOPERAMIDE 2mg Cap (For Diarrhea)\t\tDiatabs\t\t\t\tP1.75" << endl;
    cout << "  22\t\t\t    DOMPERIDOME 10mg Tab (For Indigestion)\tMotilium\t\t\tP5.00" << endl;
    cout << "  23\t\t\t    HYOSCINE 10mg Tab (For Stomachache)\t\tBuscopan\t\t\tP5.00" << endl;

    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    }

    {//Vitamins
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\tVitamins" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    cout << "  24\t\t\t    ASCORBIC 120ml Syrup (Lemon-Cee)\t\tCeelin\t\t\t\tP47.00" << endl;
    cout << "  25\t\t\t    ASCORBIC 500mg Tab (Lemon-Cee)\t\tPotencee\t\t\tP1.50" << endl;
    cout << "  26\t\t\t    MULITIVITAMINS 120ml Syrup\t\t\tEnervon Syrup\t\t\tP60.00" << endl;
    cout << "  27\t\t\t    MULTIVITAMINS + IRON Cap\t\t\tStresstab\t\t\tP2.25" << endl;
    cout << "  28\t\t\t    MULTIVITAMINS + MINERALS Cap\t\tClusivol\t\t\tP4.00" << endl;

    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    }
}


void pharm_methods::delete_order(){

}

void pharm_methods::modify(){

}

void pharm_methods::daily_summary(){

}
void pharm_methods::order_list(){

}

void pharm_methods::total_purchase(){

}

void pharm_methods::e_prescription() {

    cout << "Please enter kind of desease or pain you are having";


}

void pharm_methods::exit(){


    system("CLS");
    cout << "\t\tExited" << endl;

}
