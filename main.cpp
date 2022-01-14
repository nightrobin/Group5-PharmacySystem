#include <iostream>
#include <ctime>
#include "pharm_attributes.h"
#include "pharm_methods.h"

using namespace std;

int main()
{
    pharm_methods pharmX;


    time_t timetoday;
    time (&timetoday);

    int choice = -1;
    int orderID;

    while (choice !=0){
    system("CLS");
    cout << "\t\tWelcome to PLM - PHARMACY NG LUNGSOD NG MAYNILA" << endl;
    cout << "\t\tLocated at Gen Luna St., Cor Muralla St., Intramuros, Manila" << endl;
    cout << "\t\tCURRENT DATE & TIME: " << asctime(localtime(&timetoday)) << endl;

    cout << "\t\t-----------------------------------------" << endl;
    cout << "\t\t|[1] - ADD 10 MEDICINE \t\t\t|" << endl;
    cout << "\t\t|[2] - TAKE ORDER \t\t\t|" << endl;
    cout << "\t\t|[3] - LIST OF ADDED DRUGS \t\t|" << endl;
    cout << "\t\t|[4] - MODIFY ORDER \t\t\t|" << endl;
    cout << "\t\t|[5] - LIST OF ORDERS \t\t\t|" << endl;
    cout << "\t\t|[6] - TOTAL PURCHASE \t\t\t|" << endl;
    cout << "\t\t|[7] - E-PRESCRIPTION \t\t\t|" << endl;
    cout << "\t\t|[0] - EXIT \t\t\t\t|" << endl;
    cout << "\t\t-----------------------------------------" << endl;

    cout << "\n\t\tEnter your choice here: ";
    cin >> choice;


        cin.clear();
        fflush(stdin);

        switch (choice){

            case 1: {
                            pharmX.addMed();
                            system("PAUSE");

                    break; }
            case 2: {
                            pharmX.take_order(orderID);

                    break; }

            case 3: {
                            pharmX.listofAddedDrugs();
                            system("PAUSE");

                    break; }

            case 4: {
                            system("CLS");
                            cout << "\nPlease enter Medical/Drug ID you want to modify: ";
                            cin >> orderID;
                            cin.clear();
                            fflush(stdin);
                            pharmX.modify(orderID);

                    break; }

            case 5: {
                            pharmX.list_of_orders(orderID);
                            //list ng inorder
                            system("PAUSE");

                    break; }

            case 6: {
                            pharmX.total_purchase(orderID);
                            //nameofmed
                            //price * quantity
                            system("CLS");
                            system("PAUSE");

                    break; }

            case 7: {
                            pharmX.e_prescription();

                    break; }

            case 0: {
                            pharmX.exit();
                    }

            default: {
                    cout << "\n\t\t\t\tNOT VALID INPUT" << endl;
                    system("pause");
                     }

        } //end switch
    }

   return 0;
   }
