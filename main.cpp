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
    cout << "\t\t|[1] - ADD MEDICINE \t\t\t|" << endl;
    cout << "\t\t|[2] - TAKE ORDER \t\t\t|" << endl;
    cout << "\t\t|[3] - MODIFY ORDER \t\t\t|" << endl;
    cout << "\t\t|[4] - LIST OF ORDERS \t\t\t|" << endl;
    cout << "\t\t|[5] - QUANTITY OF PURCHASE MEDICINE\t|" << endl;
    cout << "\t\t|[6] - TOTAL PURCHASE \t\t\t|" << endl;
    cout << "\t\t|[7] - E-PRESCRIPTION \t\t\t|" << endl;
    cout << "\t\t|[8] - EXIT \t\t\t\t|" << endl;
    cout << "\t\t-----------------------------------------" << endl;

    cout << "\n\t\tEnter your choice here: ";
    cin >> choice;


        cin.clear();
        fflush(stdin);

        switch (choice){

            case 1:

                    pharmX.addMed();
                    system ("pause");

                    break;
            case 2:

                    pharmX.take_order(orderID);
                    system ("pause");
                    break;
            case 3:

                    cout << "\nPlease enter Medical/Drug ID you want to modify: ";
                    cin >> orderID;

                    cin.clear();
                    fflush(stdin);
                    break;
            case 4:

                    pharmX.list_of_orders(orderID);
                    system("pause");

                    break;
            case 5:
                    pharmX.quantity_of_purch_med(orderID);
                    system("pause");

                    break;
            case 6:

                    pharmX.total_purchase(orderID);
                    system("pause");

                    break;

            case 7:
                    pharmX.e_prescription();
                    system("pause");

                    break;
            case 8:

                    break;

            default:
                    cout << "Invalid inputff" << endl;



        } //end switch
    }




   return 0;

   }
