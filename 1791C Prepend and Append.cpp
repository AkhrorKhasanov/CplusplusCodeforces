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
        vector<char> v;
        for (char c : s)
        {
            v.push_back(c);
        }
        while ((v[0] == '0' && v[v.size() - 1] == '1') || (v[0] == '1' && v[v.size() - 1] == '0'))
        {
            v.erase(v.begin());
            v.pop_back();
        }
        cout << v.size() << endl;
    }
    return 0;
}