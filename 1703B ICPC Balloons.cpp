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
        map<char, int> m;
        string s;
        cin >> s;
        for (char c : s)
        {
            m[c]++;
        }
        int c = 0;
        for (auto e : m)
        {
            c += e.second + 1;
        }
        cout << c << endl;
    }
    return 0;
}