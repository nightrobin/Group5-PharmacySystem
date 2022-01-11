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

    int choice;

    do {
    system("CLS");
    cout << "\t\tWelcome to PLM - PHARMACY NG LUNGSOD NG MAYNILA" << endl;
    cout << "\t\tLocated at Gen Luna St., Cor Muralla St., Intramuros, Manila" << endl;
    cout << "\t\tCURRENT DATE & TIME: " << asctime(localtime(&timetoday)) << endl;

    cout << "\t\t-----------------------------------------" << endl;
    cout << "\t\t|[1] - TAKE ORDER \t\t\t|" << endl;
    cout << "\t\t|[2] - DELETE ORDER \t\t\t|" << endl;
    cout << "\t\t|[3] - MODIFY ORDER \t\t\t|" << endl;
    cout << "\t\t|[4] - ORDER LIST \t\t\t|" << endl;
    cout << "\t\t|[5] - DAILY SUMMARY\t\t\t|" << endl;
    cout << "\t\t|[6] - TOTAL PURCHASE \t\t\t|" << endl;
    cout << "\t\t|[7] - E-PRESCRIPTION \t\t\t|" << endl;
    cout << "\t\t|[8] - EXIT \t\t\t\t|" << endl;
    cout << "\t\t-----------------------------------------" << endl;

    cout << "\n\t\tEnter your choice here: ";
    cin >> choice;


        cin.clear();
        fflush(stdin);

        switch (choice){

            case 1: {
                    pharmX.take_order();
                    system("PAUSE");
                    break; }
            case 2: {
                    pharmX.delete_order();
                    break; }
            case 3: {
                    pharmX.modify();
                    break; }
            case 4: {
                    pharmX.order_list();
                    break; }
            case 5: {
                    pharmX.daily_summary();
                    break; }
            case 6: {
                    pharmX.total_purchase();
                    break; }
            case 7: {
                    pharmX.e_prescription();

                    break;}
            case 8: {
                    pharmX.exit();
                    system("PAUSE");
                    break; }
            default: {
                    cout << "Invalid input" << endl;

            }

        } //end switch
} while (choice != 8);




   return 0;

   }
