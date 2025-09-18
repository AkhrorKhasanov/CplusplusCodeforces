#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int a = arr[0];
        int b = arr[1];
        int c = arr[2];
        int d = arr[3];
        sort(arr, arr + 4);
        int maks1 = max(a, b);
        int maks2 = max(c, d);
        int mini = min(maks1, maks2);
        int maks = max(maks1, maks2);
        if (mini == arr[2] && maks == arr[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}