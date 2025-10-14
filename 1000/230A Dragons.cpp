#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int s, n;
    bool flag = true;
    cin >> s >> n;
    map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        m[x].push_back(y);
    }
    for (auto e : m)
    {
        if (!flag)
        {
            break;
        }
        for (int i = 0; i < e.second.size(); i++)
        {
            if (s <= e.first)
            {
                flag = false;
                break;
            }
            else
            {
                s += e.second[i];
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
    return 0;
}