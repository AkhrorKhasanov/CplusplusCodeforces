#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, maks = 0;
    cin >> n;
    map<string, int> m;
    while (n--)
    {
        string s;
        cin >> s;
        m[s]++;
        if (m[s] > maks)
        {
            maks = m[s];
        }
    }
    for (auto e : m)
    {
        if (e.second == maks)
        {
            cout << e.first << endl;
            break;
        }
    }
    return 0;
}