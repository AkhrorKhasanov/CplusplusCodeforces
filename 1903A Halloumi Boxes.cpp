#include <iostream>
using namespace std;
int main()
{

    int t, item, n, k, i;
    cin >> t;
    for (item = 0; item < t; item++)
    {
        cin >> n >> k;
        bool flag = true;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (k == 1)
        {
            for (i = 0; i < n - 1; i++)
            {
                if (arr[i + 1] < arr[i])
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}