#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    v.push_back(2);
    int i, j;
    for (i = 3; i <= 100; i++)
    {
        bool flag = true;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            v.push_back(i);
        }
    }
    bool flag = true;
    for (i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            if (v[i + 1] == m)
            {
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
    }
    return 0;
}