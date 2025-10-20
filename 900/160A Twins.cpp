#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, s = 0, hlp = 0, c = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s += a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--)
    {
        hlp += v[i];
        c++;
        if (hlp > s - hlp)
        {
            break;
        }
    }
    cout << c << endl;
    return 0;
}