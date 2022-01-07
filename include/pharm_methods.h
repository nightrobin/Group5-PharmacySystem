#ifndef PHARM_METHODS_H
#define PHARM_METHODS_H
#include <iostream>

using namespace std;

class pharm_methods
{
    public:
        pharm_methods();
        virtual ~pharm_methods();

        void take_order(); // to take orders
        void delete_order(); // to delete
        void modify (); // to modify
        void order_list(); // list order
        void daily_summary(); // list of summary sales
        void total_purchase();
        void e_prescription();
        void exit(int code);

    protected:

    private:
};

#endif // PHARM_METHODS_H
