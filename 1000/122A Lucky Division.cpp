#include <iostream>
using namespace std;

bool solve(int n)
{
    while (n)
    {
        int hlp = n % 10;
        n /= 10;
        if (hlp != 4 && hlp != 7)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    bool flag = false;

    for (int j = 1; j <= n; j++)
    {
        if (n % j == 0 && solve(j))
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}