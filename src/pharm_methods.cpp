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
    cout << "\tFOR COUGH AND COLDS" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

        //Mucosolvan Brand
    cout << "   1\t\t\t    AMBROXOL 15mg/60ml Syrup\t\t\tMucosolvan\t\t\tP30.00" << endl;
    cout << "   2\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tMucosolvan\t\t\tP35.00"<< endl;
    cout << "   3\t\t\t    AMBROXOL 30mg Tab\t\t\t\tMucosolvan\t\t\tP1.25" << endl;
        //Ambrolex Brand
    cout << "   4\t\t\t    AMBROXOL 15mg/60ml Syrup\t\t\tAmbrolex\t\t\tP30.00" << endl;
    cout << "   5\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tAmbrolex\t\t\tP35.00" << endl;
    cout << "   6\t\t\t    AMBROXOL 30mg Tab\t\t\t\tAmbrolex\t\t\tP1.25" << endl;
        //Zobrixol Brand
    cout << "   7\t\t\t    AMBROXOL 15mg/60ml Syrup\t\t\tZobrixol\t\t\tP30.00" << endl;
    cout << "   8\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tZobrixol\t\t\tP35.00" << endl;
    cout << "   9\t\t\t    AMBROXOL 30mg Tab\t\t\t\tZobrixol\t\t\tP1.25" << endl;
        //Loviscol Brand
    cout << "  10\t\t\t    CARBOCISTEINE 500mg Cap\t\t\tLoviscol\t\t\tP2.75" << endl;
    cout << "  11\t\t\t    CARBOCISTEINE 250mg/60ml Syrup\t\tLoviscol\t\t\tP39.50" << endl;
        //Solmux Brand
    cout << "  12\t\t\t    CARBOCISTEINE 500mg Cap\t\t\tSolmux\t\t\t\tP2.75" << endl;
    cout << "  13\t\t\t    CARBOCISTEINE 250mg/60ml Syrup\t\tSolmux\t\t\t\tP39.50" << endl;
        //Phlegmol Brand
    cout << "  14\t\t\t    CARBOCISTEINE 500mg Cap\t\t\tPhlegmol\t\t\tP2.75" << endl;
        //Carbosol Brand
    cout << "  15\t\t\t    CARBOCISTEINE 250mg/60ml Syrup\t\tCarbosol\t\t\tP39.50" << endl;
        //Robitussin Brand
    cout << "  16\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tRobitussin\t\t\tP26.75" << endl;
        //Benadryl Exp Brand
    cout << "  17\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tBenadryl Exp\t\t\tP26.75" << endl;
        //Transpulmin-G
    cout << "  18\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tTranspulmin-G\t\t\tP26.75" << endl;
        //Neozep
    cout << "  19\t\t\t    PHENYL+PARA+CPM Tab (COLDZEP)\t\tNeozep\t\t\t\tP3.00" << endl;
        //Decolgen Forte
    cout << "  20\t\t\t    PHENYL+PARA+CPM Tab (COLDZEP)\t\tDecolgen Forte\t\t\tP3.00" << endl;
        //Nafarin-A
    cout << "  21\t\t\t    PHENYL+PARA+CPM Tab (COLDZEP)\t\tNafarin-A\t\t\tP3.00" << endl;
        //Tuseran
    cout << "  22\t\t\t    PHENYL+PARA+DEXTRO Tab\t\t\tTuseran\t\t\t\tP7.50" << endl;
        //Disudrin
    cout << "  23\t\t\t    PHENYL 60ml Syrup\t\t\t\tDisudrin\t\t\tP39.50" << endl;
        //Decolgen
    cout << "  24\t\t\t    PHENYL 60ml Syrup\t\t\t\tDecolgen\t\t\tP39.50" << endl;
        //Dimetapp
    cout << "  25\t\t\t    PHENYL 60ml Syrup\t\t\t\tDimetapp\t\t\tP39.50" << endl;
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
