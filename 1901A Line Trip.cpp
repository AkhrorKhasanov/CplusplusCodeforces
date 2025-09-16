#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n == 1)
        {
            int a;
            cin >> a;
            if (a > 2 * (x - a))
            {
                cout << a << endl;
            }
            else
            {
                cout << 2 * (x - a) << endl;
            }
        }
        else
        {
            int maks = -1;
            int arr[n + 1];
            arr[0] = 0;
            for (int i = 1; i < n + 1; i++)
            {
                cin >> arr[i];
            }
            int last = arr[n];
            for (int i = 0; i < n; i++)
            {
                if (arr[i + 1] - arr[i] > maks)
                {
                    maks = arr[i + 1] - arr[i];
                }
            }
            if (2 * (x - last) > maks)
            {
                maks = 2 * (x - last);
            }
            cout << maks << endl;
        }
    }
    return 0;
}