#include <iostream>
using namespace std;
int main()
{
    int n, a, pos, pos2, maks = 0, mini = 101;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = a;
        if (a > maks)
        {
            maks = a;
            pos = i + 1;
        }
        if (a < mini)
        {
            mini = a;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == mini)
        {
            pos2 = i + 1;
            break;
        }
    }
    if (pos < pos2)
    {
        cout << pos - 1 + n - pos2 << endl;
    }
    else
    {
        cout << n - pos2 + pos - 2 << endl;
    }
    return 0;
}