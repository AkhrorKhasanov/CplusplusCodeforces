#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cin >> n;
    while (n--)
    {
        int el;
        cin >> el;
        v.push_back(el);
    }
    int s = 0, d = 0, i = 0;
    while (!v.empty())
    {
        int maks;
        maks = max(v[0], v[v.size() - 1]);
        if (i % 2 == 0)
        {
            s += maks;
        }
        else
        {
            d += maks;
        }
        i++;
        if (maks == v[0])
        {
            v.erase(v.begin());
        }
        else
        {
            v.pop_back();
        }
    }
    cout << s << " " << d << endl;
    return 0;
}