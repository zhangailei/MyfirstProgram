#include <iostream>
#include <string>
using namespace std;

void e3_5()
{
    string curline, line;
    while (getline(cin, curline))
    {
        line = line + " " + curline;
    }
    cout << line;
}
void e3_4(short i)
{
    string line1, line2, s;
    getline(cin, line1);
    getline(cin, line2);
    if (i == 1)
    {
        if (line1 == line2)
        {
            cout << "equal" << endl;
        }
        else
        {
            line1 = line1 >= line2 ? line1 : line2;
            cout << line1 << endl;
        }
    }
    else
    {
        if (line1.size() == line2.size())
        {
            cout << "equal" << endl;
        }
        else
        {
            line1 = line1.size() >= line2.size() ? line1 : line2;
            cout << line1 << endl;
        }
    }
}
int main()
{
    e3_5();
    return 0;
}