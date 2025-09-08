#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        m[a] = i;
    }
    for (auto el : m)
    {
        cout << el.second << " ";
    }
    return 0;
}