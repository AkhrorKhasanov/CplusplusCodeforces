#include <iostream>
using namespace std;

int solve(string s)
{
    int res;
    for (int i = 0; i < 4; i++)
    {
        if (s[i] == '#')
        {
            res = i + 1;
            break;
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            arr[i] = solve(s);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}