#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<char, int> m1;
    m1['T'] = 1;
    m1['i'] = 1;
    m1['m'] = 1;
    m1['u'] = 1;
    m1['r'] = 1;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> m2;
        for (char c : s)
        {
            m2[c]++;
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