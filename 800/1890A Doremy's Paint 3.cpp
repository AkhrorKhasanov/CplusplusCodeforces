#include <iostream>
#include <map>
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
        map<int, int> m;

        while (n--)
        {
            int a;
            cin >> a;
            m[a]++;
        }
        int key = 0;
        bool flag = false;
        for (auto e : m)
        {
            key++;
            if (key > 2)
            {
                flag = true;
                cout << "No" << endl;
                break;
            }
                }
        if (key == 1 && !flag)
        {
            cout << "Yes" << endl;
        }
        else if (key == 2 && !flag)
        {
            vector<int> v;
            for (auto e : m)
            {
                v.push_back(e.second);
            }
            if (abs(v[1] - v[0]) > 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}