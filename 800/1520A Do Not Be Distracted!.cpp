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
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < s.size(); i++)
        {
            vector<int> v;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[i] == s[j])
                {
                    v.push_back(j);
                }
            }
            for (int j = 0; j < v.size() - 1; j++)
            {
                if (v[j] + 1 != v[j + 1])
                {
                    flag = false;
                }
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}