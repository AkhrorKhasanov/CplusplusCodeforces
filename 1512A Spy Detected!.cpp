#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        int hlp;
        for (auto el : m)
        {
            if (el.second == 1)
            {
                hlp = el.first;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == hlp)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}