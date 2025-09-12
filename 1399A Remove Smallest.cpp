#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int n;
        cin >> n;
        int arr[n];
        if (n == 1)
        {
            int a;
            cin >> a;
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            sort(arr, arr + n);
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i + 1] - arr[i] > 1)
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
    return 0;
}