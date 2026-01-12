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
        map<char, int> m1;
        map<char, int> m2;
        string s, t;
        cin >> s >> t;
        for (int i = 0; i < n; i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        if (m1 == m2)
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