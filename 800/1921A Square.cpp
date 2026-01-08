#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x[4];
        int hlp;
        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> hlp;
        }
        int a;
        for (int i = 0; i < 3; i++)
        {
            if (x[i + 1] != x[i])
            {
                a = x[i + 1] - x[i];
                break;
            }
        }

        cout << a * a << endl;
    }
}