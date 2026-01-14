#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, c = 0, gold = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a != 0)
            {
                if (a >= k)
                {
                    gold += a;
                }
            }
            else
            {
                if (gold)
                {
                    gold--;
                    c++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}