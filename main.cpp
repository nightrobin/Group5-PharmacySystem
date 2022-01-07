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

    while (choice != 0) {

    system("CLS");
    cout << "\t\tWelcome to PLM - PHARMACY NG LUNGSOD NG MAYNILA" << endl;
    cout << "\t\tLocated at Gen Luna St., Cor Muralla St., Intramuros, Manila" << endl;
    cout << "\t\tCURRENT DATE & TIME: " << asctime(localtime(&timetoday)) << endl;

    cout << "\t\t-----------------------------------------" << endl;
    cout << "\t\t|[1] - TAKE ORDER \t\t\t|" << endl;
    cout << "\t\t|[2] - DELETE ORDER \t\t\t|" << endl;
    cout << "\t\t|[3] - MODIFY ORDER t\t\t\t|" << endl;
    cout << "\t\t|[4] - ORDER LIST \t\t\t|" << endl;
    cout << "\t\t|[5] - DAILY SUMMARY\t\t\t|" << endl;
    cout << "\t\t|[6] - TOTAL PURCHASE \t\t\t|" << endl;
    cout << "\t\t|[0] - EXIT \t\t\t\t|" << endl;
    cout << "\t\t-----------------------------------------" << endl;

    cout << "\n\t\tEnter your choice here: ";
    cin >> choice;


        cin.clear();
        fflush(stdin);

        switch (choice){

            case 1: {
                    break; }
            case 2: {
                    break; }
            case 3: {
                    break; }
            case 4: {
                    break; }
            case 5: {
                    break; }
            case 6: {
                    break; }
            case 0: {
                    break; }



        }


   return 0;

   }
}
