#include <iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
    Sales_data item, curitem;
    double price = 0.0;
    if (cin >> item.Isbn >> item.solenum >> price)
    {
        item.revenue = item.solenum * price;
        while (cin >> curitem.Isbn >> curitem.solenum >> price)
        {
            curitem.revenue = curitem.solenum * price;
            if (item.Isbn == curitem.Isbn)
            {
                item.revenue += curitem.revenue;
                item.solenum += curitem.solenum;
            }
            /* code */
            else
            {
                cout << item.Isbn << " " << item.solenum << " " << item.revenue / item.solenum << endl;
                item = curitem;
            }
        }
        cout << item.Isbn << " " << item.solenum << " " << item.revenue / item.solenum << endl;
    }
    else
    {
        cerr << "no data?!!" << endl;
        return -1;
    }
    return 0;
}