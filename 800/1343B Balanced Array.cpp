#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, i;
        cin >> a;
        if (a % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int c = 0, d = 0;
            int arr[a];
            for (i = 0; i < a / 2; i++)
            {
                arr[i] = 2 * i + 2;
                c += arr[i];
            }
            int b = 1;
            for (i = a / 2; i < a - 1; i++)
            {
                arr[i] = b;
                b += 2;
                d += arr[i];
            }
            arr[a - 1] = c - d;
            cout << "YES" << endl;
            for (i = 0; i < a; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}