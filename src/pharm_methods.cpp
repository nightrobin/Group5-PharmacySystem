#include "pharm_methods.h"
#include <ctime>



pharm_methods::pharm_methods()
{
    //ctor
}

pharm_methods::~pharm_methods()
{
    //dtor
}


void pharm_methods::listofDrugs(){

    system("CLS");

    cout << "\t\t\t\t---------- LIST OF MEDICINES ----------" << endl <<endl;

    cout << "**************************************************************************************************************" << endl;
    cout << "PRODUCT NO.\t\t\tPRODUCT NAME|mg/ml\t\t\tGENERIC NAME\t\t\tPRICE" << endl;
    cout << "**************************************************************************************************************" << endl;


    {//COUGHS AND COLDS
    cout << "\t\t\t\tFOR COUGH AND COLDS" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

        //Mucosolvan Brand
    cout << "   0\t\t\t    AMBROXOL 15mg/60ml Syrup\t\t\tMucosolvan\t\t\tP30.00" << endl;
    cout << "   1\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tMucosolvan\t\t\tP35.00"<< endl;
    cout << "   2\t\t\t    AMBROXOL 30mg Tab\t\t\t\tMucosolvan\t\t\tP1.25" << endl;
        //Ambrolex Brand
    cout << "   3\t\t\t    AMBROXOL 30mg/60ml Syrup\t\t\tAmbrolex\t\t\tP35.00" << endl;
        //Solmux Brand
    cout << "   4\t\t\t    CARBOCISTEINE 500mg Cap\t\t\tSolmux\t\t\t\tP2.75" << endl;
    cout << "   5\t\t\t    CARBOCISTEINE 250mg/60ml Syrup\t\tSolmux\t\t\t\tP39.50" << endl;
        //Robitussin Brand
    cout << "   6\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tRobitussin\t\t\tP26.75" << endl;
        //Benadryl Exp Brand
    cout << "   7\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tBenadryl Exp\t\t\tP26.75" << endl;
        //Transpulmin-G
    cout << "   8\t\t\t    GUIAFENESIN 100mg/60ml Syrup\t\tTranspulmin-G\t\t\tP26.75" << endl;
        //Neozep
    cout << "   9\t\t\t    PHENYL+PARA+CPM Tab (COLDZEP)\t\tNeozep\t\t\t\tP3.00" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    }
    {//FOR FEVER & BODY PAIN
    cout << "\t\t\t\tFOR FEVER AND BODY PAIN" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    cout << "  10\t\t\t    MEFENAMIC ACID 250mg Cap \t\t\tDolfenal\t\t\tP1.50" << endl;
    cout << "  11\t\t\t    MEFENAMIC ACID 500mg Cap \t\t\tDolfenal\t\t\tP2.00" << endl;
    cout << "  12\t\t\t    PARACETAMOL 250mg/60ml Syrup \t\tBiogesic\t\t\tP30.00" << endl;
    cout << "  13\t\t\t    PARACETAMOL 500mg Tab \t\t\tBiogesic\t\t\tP0.75" << endl;
    cout << "  14\t\t\t    PARACETAMOL+IBUP Cap (ENERLAX)\t\tAlaxan FR\t\t\tP2.75" << endl;

    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    }
    {//FOR ASTHMA
    cout << "\t\t\t\tFOR ASTHMA" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    cout << "  15\t\t\t    SALBUTAMOL 2mg\60ml Syrup \t\t\tVentolin\t\t\tP28.00" << endl;
    cout << "  16\t\t\t    SALBUTAMOL 2mg Tab \t\t\t\tVentolin\t\t\tP0.75" << endl;
    cout << "  17\t\t\t    SALBUTAMOL Nebules \t\t\t\tVentolin\t\t\tP8.50" << endl;

    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    }
    {//FOR STOMACH PAIN
    cout << "\t\t\t\tFOR STOMACH PAIN" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    cout << "  18\t\t\t    BISACODYL 5mg Tab (For Constipation)\tDulcolax\t\t\tP2.00" << endl;
    cout << "  19\t\t\t    LOPERAMIDE 2mg Cap (For Diarrhea)\t\tImodium\t\t\t\tP1.75" << endl;
    cout << "  20\t\t\t    LOPERAMIDE 2mg Cap (For Diarrhea)\t\tDiatabs\t\t\t\tP1.75" << endl;
    cout << "  21\t\t\t    DOMPERIDOME 10mg Tab (For Indigestion)\tMotilium\t\t\tP5.00" << endl;
    cout << "  22\t\t\t    HYOSCINE 10mg Tab (For Stomachache)\t\tBuscopan\t\t\tP5.00" << endl;

    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    }
    {//Vitamins
    cout << "\t\t\t\tVITAMINS" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;

    cout << "  23\t\t\t    ASCORBIC 120ml Syrup (Lemon-Cee)\t\tCeelin\t\t\t\tP47.00" << endl;
    cout << "  24\t\t\t    ASCORBIC 500mg Tab (Lemon-Cee)\t\tPotencee\t\t\tP1.50" << endl;
    cout << "  25\t\t\t    MULITIVITAMINS 120ml Syrup\t\t\tEnervon Syrup\t\t\tP60.00" << endl;
    cout << "  26\t\t\t    MULTIVITAMINS + IRON Cap\t\t\tStresstab\t\t\tP2.25" << endl;
    cout << "  27\t\t\t    MULTIVITAMINS + MINERALS Cap\t\tClusivol\t\t\tP4.00" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    }

}

void pharm_methods::addMed(){

    system("CLS");

    listofDrugs();

        for (int i = 0; i < medMax; i++){

        string genericName;
        string nameOfmed;
        float priceOfmed;
        bool isPurchace;

        cout << "\nPlease input the following details" << endl;

        cout << "\nDrug key no. " << i  + 1<< endl;
        cout << "Please enter the name of Medicine/Drug: ";
        getline(cin, nameOfmed);

        cout << "Please enter the generic name of Medicine/Drug: ";
        getline(cin, genericName);

        cout << "Enter price of Medicine/Drug: ";
        cin >> priceOfmed;

        cout << endl << "-------------------------------------------------" << endl;



        med[i].nameOfmed = nameOfmed;
        med[i].genericName = genericName;
        med[i].priceOfmed = priceOfmed;

        cin.clear();
        fflush(stdin);

        }
}
void pharm_methods::take_order(int orderID){

 //   cout << "hello world" << endl;


}
void pharm_methods::modify(int orderID){

    orderID--;

        if (orderID <= 0){
        orderID = 0;
        }
        else if (orderID > medMax){
        orderID = medMax - 1;
        }

        cout << "\nName of Medicine/Drugs (" << med[orderID].nameOfmed << "): ";
        getline(cin, med[orderID].nameOfmed);

        cout << "\nGeneric Name of Medicine/Drug (" << med[orderID].genericName << "): ";
        getline(cin, med[orderID].genericName);


        cout << "\nPrice of Medicine (" << med[orderID].priceOfmed << "): ";
        cin >> med[orderID].priceOfmed;


        cin.clear();
        fflush(stdin);

        cout << endl;
}


void pharm_methods::list_of_orders(int orderID){

    system("CLS");
    cout << "Quantity of purchased medicine" << endl;

    int sum(int med[], int medMax);
    {
        int sum = 0;
        for(int i = 0; i < medMax; i++)
        if (med[i].isPurchase)
        {
            cout << "\nOrder ID " << i + 1 << ": " << med[i].nameOfmed << endl;
        }
    }
}


void pharm_methods::total_purchase(int orderID){


}

void pharm_methods::e_prescription(){

    int choice;
    system ("CLS");

    cout << "\t\t\tCOVID-19 (coronavirus disease 2019) is an illness caused by a virus." << endl;
    cout << "\t\t\tThis virus is a new coronavirus that has spread throughout the world." << endl;
    cout << "\t\t\tIt is thought to spread mainly through close contact from person to person." << endl;


    cout << "\n\t\t\t-----------------------------------" << endl;
    cout << "\t\t\t| [1]   COLD                      |" << endl;
    cout << "\t\t\t| [2]   FLU                       |"<< endl;
    cout << "\t\t\t| [3]   COUGH                     |" << endl;
    cout << "\t\t\t| [4]   FEVER                     |" << endl;
    cout << "\t\t\t| [5]   SORE-THROAT               |" << endl;
    cout << "\t\t\t| [6]   MENSTRUAL CRAMPS          |" << endl;
    cout << "\t\t\t| [7]   TOOTHACHE                 |" << endl;
    cout << "\t\t\t| [8]   STOMACHACHE               |" << endl;
    cout << "\t\t\t| [9]   HEADACHE                  |" << endl;
    cout << "\t\t\t| [10]  DIARRHOEA                 |" << endl;
    cout << "\t\t\t| [11]  ALLERGY                   |" << endl;
    cout << "\t\t\t-----------------------------------" << endl;

    cout << "\n\t\t\tENTER NUMBER TO CHECK PRESCRIPTION" << endl;
    cin >> choice;

            switch (choice) {

                case 1: {

                    break;
                }
                case 2: {
                    break;
                }
                case 3: {
                    break;
                }
                case 4: {
                    break;
                }
                case 5: {
                    break;
                }
                case 6: {
                    break;
                }
                case 7: {
                    break;
                }
                case 8: {
                    break;
                }
                case 9: {
                    break;
                }
                case 10: {
                    break;
                }
                case 11: {
                    break;
                }

            } //end swtich

}

void pharm_methods::exit(){

    cout << "\n\t\t\tTHANKS FOR USING OUR SYSTEM!" << endl;

}



