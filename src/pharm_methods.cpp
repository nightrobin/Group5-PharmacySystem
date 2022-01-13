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

string genericName;
    string nameOfmed;
    string x;
    string GenName[maxrow] = {};
    string NameMed[maxrow] = {};
    double Price[maxrow] = {};
    char ans;
    double priceOfmed;
    bool isPurchase;

void pharm_methods::listofAddedDrugs() {

    system("cls");
    cout << "LIST OF ADDED DRUGS" << endl;

    for(int i = 0; i < medMax; i++){
        if (med[i].isPurchase){
            cout << "\n-----------------------------------------------------" << endl;
            cout << "Name of Drugs   " << i + 1 << ": " << med[i].nameOfmed << endl;
            cout << "Generic Name    " << i + 1 << ": " << med[i].genericName << endl;
            cout << "Price of Drugs  " << i + 1 << ": " << med[i].priceOfmed << endl;
            cout << "-----------------------------------------------------" << endl;
        } else {
            cout << "There is no current in the list."  << endl;
        }
    }

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

        for (int i = 0; i < medMax; i++) {
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

    system("CLS");



    listofDrugs();
    cout << "Please input your order" << endl;



        cout << "Name of Product:";
        getline(cin, nameOfmed);
        cout << "Generic Name:";
        getline(cin, genericName);
        cout << "Price:";
        cin >> priceOfmed;



    for (int x = 0; x < maxrow; x++)
    {
        if (NameMed[x] == "\0")
            {
                NameMed[x] = nameOfmed;
                GenName[x] = genericName;
                Price[x] = priceOfmed;

                break;
            }
    }

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
    cout << "\t\t\t\t---------- LIST OF ORDERS ----------" << endl <<endl;

    int ctr = 0;
    cout << "PRODUCT NO.\tPRODUCT NAME|mg/ml\tGENERIC NAME\tPRICE" << endl;
    for (int x = 0; x < maxrow; x++)
    {
        if (NameMed[x] != "\0")
        {
            ctr++;
            cout << "   " << ctr << "                " << NameMed[x] << "                " << GenName[x] << "       " << Price[x] << endl;
        }
    }
    if (ctr == 0)
    {
        cout << "No Orders yet" << endl;
    }

}
void pharm_methods::total_purchase(int orderID){


}



void pharm_methods::e_prescription(){


    int choice;

   do{
    system ("CLS");

    cout << "\n\tDISCLAIMER:" << endl;

    cout << "\t\tThis pharmacy system does not assume any responsibility for any aspect of healthcare" << endl;
    cout << "\t\tadministered with the aid of materials provided. The information contained" << endl;
    cout << "\t\therein is not intended to cover all possible uses, directions, precautions," << endl;
    cout << "\t\twarnings, drug interactions, allergic reactions, or adverse effects. If you have" << endl;
    cout << "\t\tquestions about the substances you are taking, CHECK WTIH YOUR DOCTOR, NURSE, or PHARMACIST." << endl;


    cout << endl;
    cout << "\t\t\tCOVID-19 (coronavirus disease 2019) is an illness caused by a virus." << endl;
    cout << "\t\t\tThis virus is a new coronavirus that has spread throughout the world." << endl;
    cout << "\t\t\tIt is thought to spread mainly through close contact from person to person." << endl;


    cout << "\n\t\t\t-----------------------------------" << endl;
    cout << "\t\t\t| [1]   COLD/COUGH                |" << endl;
    cout << "\t\t\t| [2]   FEVER                     |" << endl;
    cout << "\t\t\t| [3]   SORE-THROAT               |" << endl;
    cout << "\t\t\t| [4]   MENSTRUAL CRAMPS          |" << endl;
    cout << "\t\t\t| [5]   TOOTHACHE                 |" << endl;
    cout << "\t\t\t| [6]   STOMACHACHE               |" << endl;
    cout << "\t\t\t| [7]   HEADACHE                  |" << endl;
    cout << "\t\t\t| [8]   DIARRHOEA                 |" << endl;
    cout << "\t\t\t| [9]   ALLERGY                   |" << endl;
    cout << "\t\t\t| [0]   BACK                      |" << endl;
    cout << "\t\t\t-----------------------------------" << endl;

    cout << "\n\t\t\tENTER NUMBER TO CHECK PRESCRIPTION: " ;
    cin >> choice;

            switch (choice) {

                case 1: {
                            system("cls");

                                {//CLASSIFICATIONS
                                cout << "=====================================================================================================" << endl;
                                cout << "MEDICINE NAME\t\tDESCRIPTION" << endl;
                                cout << "=====================================================================================================" << endl;
                                }

                                    {//AMBROXOL
                                    cout << "   AMBROXOL\t\tDAILY DOSE:" << endl;
                                    cout << "\t\t\t\tADULT: 30 mg | 1 Tablet  |" << endl;
                                    cout << "\t\t\t\t       120 mg| 4 Tablets | Taken in 2 to 3 divede doses" << endl;
                                    cout << "\n\t\t\t\tCHILDREN:" << endl;
                                    cout << "\t\t\t\t\tUP TO 2 YEARS: Half teaspoonful | Ambroxol syrup | 2x Daily" << endl;
                                    cout << "\t\t\t\t\t 2 TO 5 YEARS: Half teaspoonful | Ambroxol syrup | 3x Daily" << endl;
                                    cout << "\t\t\t\t\t OVER 5 YEARS: 1 teaspoonful    | Ambroxol syrup | 2x-3x Daily" << endl;
                                    cout << "\n\t\t\tPRECAUTIONS:" << endl;
                                    cout << "\t\t\t\tIt is advisable to avoid use during the first trimester of pregnancy" << endl;
                                    }
                                cout << "\n*****************************************************************************************************" << endl;

                                    {//CARBOCISTEINE
                                    cout << "   CARBOCISTEINE\tDAILY DOSE:" << endl;
                                    cout << "\t\t\t\tADULT: 375 mg | 2 Capsules  | 3x a Day" << endl;
                                    cout << "\t\t\t\t        15 ml | Syrup       | 3x a Day" << endl;
                                    cout << "\t\t\t\t                1 Sachet    | 3x a Day" << endl;
                                    cout << "\n\t\t\t\t    REDUCE IF THE SYMPTOMS IMPROVE" << endl;
                                    cout << "\t\t\t\t        10 ml | Syrup       | 3x a Day" << endl;
                                    cout << "\t\t\t\t                1 Sachet    | 2x a Day" << endl;
                                    cout << "\n\t\t\t\tCHILDREN:" << endl;
                                    cout << "\t\t\t\t\t 2 TO 4  YEARS: 1.25 ml to 2.5 ml| Syrup | 2x a Day" << endl;
                                    cout << "\t\t\t\t\t 5 TO 11 YEARS: 5 ml             | Syrup | 3x a Day" << endl;
                                    cout << "\t\t\t\t\t12 To 17 YEARS: 15 ml            | Syrup | 3x a Day" << endl;
                                    cout << "\n\t\t\tPRECAUTIONS:" << endl;
                                    cout << "\t\t\t\tIt is advisable to avoid use in patients with history of ulcer, any allergy," << endl;
                                    cout << "\t\t\t\twho are taking other medications, during pregnancy and breastfeeding." << endl;
                                    }
                                cout << "\n*****************************************************************************************************" << endl;

                                    {//GUAIFENESIN
                                    cout << "   GUAIFENESIN\t\tDAILY DOSE:" << endl;
                                    cout << "\t\t\t\tADULT: 200 mg to 400 mg | Every 4 hours  | not to exceed 2.4 g/Day" << endl;
                                    cout << "\t\t\t\t       600 mg to 1200 mg| Every 12 hours | not to exceed 2.4 g/Day" << endl;
                                    cout << "\n\t\t\t\tCHILDREN:" << endl;
                                    cout << "\t\t\t\t   Immidiate release formulation:" << endl;
                                    cout << "\t\t\t\t\t LESS THAN 2 YEARS: 12 mg/kg/day    | orally in 6 divided doses" << endl;
                                    cout << "\t\t\t\t\t      2 TO 5 YEARS: 100 mg to 200 mg| orally every 4 hours as needed | not to exceed 600 mg/Day" << endl;
                                    cout << "\t\t\t\t\t     6 To 11 YEARS: 100 mg to 200 mg| orally every 4 hours as needed | not to exceed 1.2 g/Day" << endl;
                                    cout << "\t\t\t\t\t  12 YEAR OR OLDER: 200 mg to 400 mg| orally every 4 hours as needed | not to exceed 2.4 g/Day" << endl;
                                    cout << "\t\t\t\t   Sustained release formulation:" << endl;
                                    cout << "\t\t\t\t\t      2 TO 5 YEARS: 300 mg           | orally every 12 hours | not to exceed 600 mg/Day" << endl;
                                    cout << "\t\t\t\t\t     6 To 11 YEARS: 600 mg           | orally every 12 hours | not to exceed 1.2 g/Day" << endl;
                                    cout << "\t\t\t\t\t  12 YEAR OR OLDER: 600 mg to 1200 mg| orally every 12 hours | not to exceed 2.4 g/Day" << endl;
                                    cout << "\n\t\t\tPRECAUTIONS:" << endl;
                                    cout << "\t\t\t\t Do not use this if you are allergic to guaifenesin." << endl;
                                    cout << "\t\t\t\t Use this medicine exactly as directed on the label or as prescribed by your doctor." << endl;
                                    }
                                cout << "\n*****************************************************************************************************" << endl;

                            system("pause");

                    break;
                }
                case 2: {

                    system("cls");

                            {//CLASSIFICATIONS
                                cout << "=====================================================================================================" << endl;
                                cout << "MEDICINE NAME\t\tDESCRIPTION" << endl;
                                cout << "=====================================================================================================" << endl;
                                }


                                    {//MEFENAMIC ACID
                                        cout << "  MEFENAMIC ACID\tDAILY DOSE:" << endl;
                                        cout << "\t\t\t\tADULT: " << endl;
                                        cout << "\t\t\t\t\t Initial Dose:           500 mg | orally once" << endl;
                                        cout << "\t\t\t\t\t Following Initial Dose: 250 mg | orally every 6 hours as needed" << endl;
                                        cout << "\t\t\t\t\t Duration of therapy:    Usually not to exceed 1 week" << endl;
                                        cout << "\n\t\t\t\tCHILDREN:" << endl;
                                        cout << "\t\t\t\t   14 years or older:" << endl;
                                        cout << "\t\t\t\t\t              Initial Dose: 500 mg | orally once" << endl;
                                        cout << "\t\t\t\t\t    Following Initial Dose: 200 mg | orally every 6 hours as needed" << endl;
                                        cout << "\t\t\t\t\t       Duration of therapy: 2 to 3 Days" << endl;
                                        cout << "\n\t\t\tPRECAUTIONS:" << endl;
                                        cout << "\t\t\t\t Do not use mefenamic acid just before or after heart bypass surgery (coronary artery bypass" << endl;
                                        cout << "\t\t\t\t graft, or CABG). Mefenamic acid may also cause stomach or intestinal bleeding, which can be fatal." << endl;
                                    }
                                    cout << "\n*****************************************************************************************************" << endl;


                                    {//PARACETAMOL
                                        cout << "  PARACETAMOL\t\tDAILY DOSE:" << endl;
                                        cout << "\t\t\t\tADULT: " << endl;
                                        cout << "\t\t\t\t   16 years old and Older: 500 mg | 1 g | 4-6 hours up to maximum of 4 g daily" << endl;
                                        cout << "\n\t\t\t\tCHILDREN:" << endl;
                                        cout << "\t\t\t\t\t    12 to 15 years: 480 - 750 mg | 4-6 hours up to maximum 4 doses daily" << endl;
                                        cout << "\t\t\t\t\t    10 to 11 years: 480 - 500 mg | 4-6 hours up to maximum 4 doses daily" << endl;
                                        cout << "\t\t\t\t\t     8 to 9  years: 360 - 375 mg | 4-6 hours up to maximum 4 doses daily" << endl;
                                        cout << "\t\t\t\t\t     6 to 7  years: 240 - 250 mg | 4-6 hours up to maximum 4 doses daily" << endl;
                                        cout << "\t\t\t\t\t     4 to 5  years: 240 mg       | 4-6 hours up to maximum 4 doses daily" << endl;
                                        cout << "\t\t\t\t\t     2 to 3  years: 180 mg       | 4-6 hours up to maximum 4 doses daily" << endl;
                                        cout << "\t\t\t\t\t  6 months to 1 yr: 120 mg       | 4-6 hours up to maximum 4 doses daily" << endl;
                                        cout << "\t\t\t\t\t        3-5 months: 60 mg        | 4-6 hours up to maximum 4 doses daily" << endl;
                                        cout << "\n\t\t\tPRECAUTIONS:" << endl;
                                        cout << "\t\t\t\t Do not use when you are pregnant or breastfeeding, have a serious problem" << endl;
                                        cout << "\t\t\t\t on your liver." << endl;
                                    }
                                    cout << "\n*****************************************************************************************************" << endl;

                    system("pause");
                    break;
                }
                case 3: {

                    system("cls");

                            {//CLASSIFICATIONS
                                cout << "=====================================================================================================" << endl;
                                cout << "MEDICINE NAME\t\tDESCRIPTION" << endl;
                                cout << "=====================================================================================================" << endl;
                                }


                                {//IBUPROFEN
                                        cout << "  IBUPROFEN\tDAILY DOSE:" << endl;
                                        cout << "\t\t\t\tADULT: " << endl;
                                        cout << "\t\t\t\t    12 to Adult: 200 - 400 mg | 3 - 4 times a day | 6 - 8 hours | leave 4 hours between doeses" << endl;
                                        cout << "\n\t\t\t\tCHILDREN:" << endl;
                                        cout << "\t\t\t\t     7 to 9 years: 200 mg | 3x | every 24 hours" << endl;
                                        cout << "\t\t\t\t   10 to 12 years: 300 mg | 3x | every 24 hours" << endl;
                                }
                                cout << "\n*****************************************************************************************************" << endl;


                    system("pause");

                    break;
                }
                case 4: {
                    system("cls");

                      {//CLASSIFICATIONS
                                cout << "=====================================================================================================" << endl;
                                cout << "MEDICINE NAME\t\tDESCRIPTION" << endl;
                                cout << "=====================================================================================================" << endl;
                                }

                                {
                                    cout << "  IBUPROFEN\tDAILY DOSE:" << endl;
                                    cout << "\t\t\t\tUsed to treat fever and pain from arthritis, menstrual cramps,"<< endl;
                                    cout << "\t\t\t\tand muscular aches. It works by reducing inflammation." << endl;
                                    cout << "\n\t\tPRECAUTIONS:" << endl;
                                    cout << "\t\t\t\tIbuprofen should be only used when only needed as it " << endl;
                                    cout << "\t\t\t\tmay increase risk or stroke or heart atttack. " << endl;
                                }

                    system("pause");
                    break;
                }
                case 5: {
                    system("cls");

                    system("pause");
                    break;
                }
                case 6: {
                    system("cls");

                    system("pause");
                    break;
                }
                case 7: {
                    system("cls");

                    system("pause");
                    break;
                }
                case 8: {
                    system("cls");

                    system("pause");
                    break;
                }
                case 9: {
                    system("cls");

                    system("pause");
                    break;
                }
                case 0: {

                    break;

                }
                default: {
                    cout << "not counted" << endl;
                    system("pause");
                }

            } //end swtich

    } while (choice != 0);

}

void pharm_methods::exit(){

    cout << "\n\t\t\tTHANKS FOR USING OUR SYSTEM!" << endl;

}



