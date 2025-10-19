#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maks = -1;
        cin >> n;
        string s;
        cin >> s;
        vector<int> l(n), r(n);
        unordered_set<char> sl, sr;
        for (int i = 0; i < n; i++)
        {
            sl.insert(s[i]);
            l[i] = sl.size();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            sr.insert(s[i]);
            r[i] = sr.size();
        }
        for (int i = 0; i < n - 1; i++)
        {
            maks = max(maks, l[i] + r[i + 1]);
        }
        cout << maks << endl;
    }
    return 0;
}