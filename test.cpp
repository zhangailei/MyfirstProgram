#include <iostream>
#include <string>
#include <cctype>
#include "Sales_item.h"
#include "Sales_data.h"
using namespace std;
int main()
{
    string s("My name is zhj!!!");
    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;
}