#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n], even[n / 2], odd[n / 2], hlp[n / 2];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n / 2; i++)
        {
            odd[i] = b[i];
        }
        for (int i = n - 1; i >= n / 2; i--)
        {
            even[n - 1 - i] = b[i];
        }
        for (int i = 0; i < n / 2; i++)
        {
            hlp[i] = b[n - 1 - i];
        }
        for (int i = 0; i < n / 2; i++)
        {
            v.push_back(odd[i]);
            v.push_back(hlp[i]);
        }
        if (n % 2)
        {
            v.push_back(b[n / 2]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}