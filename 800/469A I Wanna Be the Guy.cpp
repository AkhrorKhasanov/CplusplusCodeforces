#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, p1, p2, x, c = 0;
    set<int> s;
    cin >> n;
    cin >> p1;
    for (int i = 0; i < p1; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cin >> p2;
    for (int i = 0; i < p2; i++)
    {
        cin >> x;
        s.insert(x);
    }
    for (int e : s)
    {
        c += e;
    }
    int r = (n * (n + 1)) / 2;
    if (r == c)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}