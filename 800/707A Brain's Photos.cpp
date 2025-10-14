#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'C' || ch == 'M' || ch == 'Y')
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }
    return 0;
}