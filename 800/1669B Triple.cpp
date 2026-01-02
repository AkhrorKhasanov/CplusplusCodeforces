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
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
        }
        for (auto el : m)
        {
            if (el.second >= 3)
            {
                cout << el.first << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}