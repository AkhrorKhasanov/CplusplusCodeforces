#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int e = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i % 2 == 0 && a % 2 != 0)
            {
                o++;
            }
            else if (i % 2 == 1 && a % 2 == 0)
            {
                e++;
            }
        }
        if (o != e)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << o << endl;
        }
    }
    return 0;
}