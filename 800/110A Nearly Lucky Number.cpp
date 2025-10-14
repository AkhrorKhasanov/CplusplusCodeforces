#include <iostream>
using namespace std;
int main()
{
    string n;
    bool flag = true;
    int c = 0;
    cin >> n;
    for (char ch : n)
    {
        if (ch == '4' || ch == '7')
        {
            c++;
        }
    }
    if (!c)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (c)
        {
            int k = c % 10;
            c /= 10;
            if (k != 4 && k != 7)
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
    }
}