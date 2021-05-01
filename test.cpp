#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item item, curitem;
    if (cin >> item)
    {

        while (cin >> curitem)
        {
            if (item.isbn() == curitem.isbn())
                item += curitem;
            /* code */
            else
            {
                cout << item << endl;
                item = curitem;
            }
        }
        cout << item << endl;
    }
    else
    {
        cerr << "no data?!!" << endl;
        return -1;
    }
    return 0;
}