#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t timetoday;
    time (&timetoday);

    int choice = -1;

    while (choice != 0) {

    system("CLS");
    cout << "\t\tWelcome to PLM - PHARMACY NG LUNGSOD NG MAYNILA" << endl;
    cout << "\t\tLocated at Gen Luna St., Cor Muralla St., Intramuros, Manila" << endl;
    cout << "\t\tCURRENT DATE & TIME: " << asctime(localtime(&timetoday)) << endl;

    cout << "\t\t-----------------------------------------" << endl;
    cout << "\t\t|[1] - ADD DRUG/MEDICINE \t\t|" << endl;
    cout << "\t\t|[2] - TAKE ORDER \t\t\t|" << endl;
    cout << "\t\t|[0] - EXIT \t\t\t\t|" << endl;
    cout << "\t\t-----------------------------------------" << endl;

    cout << "\n\t\tEnter your choice here: ";
    cin >> choice;


        cin.clear();
        fflush(stdin);


   return 0;

   }
}
