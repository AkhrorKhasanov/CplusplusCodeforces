#include <iostream>
using namespace std;

int solve(int num)
{
    int c = 0;
    while (num % 2 == 0)
    {
        c++;
        num /= 2;
    }
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n, w1, h1, res = 1;
        cin >> w >> h >> n;
        w1 = solve(w);
        h1 = solve(h);
        for (int i = 0; i < w1 + h1; i++)
        {
            res *= 2;
        }
        if (res >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}