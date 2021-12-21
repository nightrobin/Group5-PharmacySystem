#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   time_t timetoday;
   time (&timetoday);

    cout << "\t-----------------------------------------------------------------" << endl;
    cout << "\t|Welcome to PLM - PHARMACY NG LUNGSOD NG MAYNILA \t\t|" << endl;
    cout << "\t|Located at: Gen. Luna cor Muralla Sts., Intramuros, Manila \t|" << endl;
    cout << "\t|CURRENT DATE & TIME: " << asctime(localtime(&timetoday));
    cout << "\t-----------------------------------------------------------------" << endl;

   return 0;

   }

