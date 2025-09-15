#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int a = 0, b = 0;
        cin >> s;
        for (char c : s)
        {
            if (c == 'A')
                a++;
            if (c == 'B')
                b++;
        }
        if (a > b)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }
    return 0;
}