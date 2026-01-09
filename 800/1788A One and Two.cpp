#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
            if (a == 2)
            {
                c++;
            }
        }
        if (c == 0)
        {
            cout << 1 << endl;
        }
        else if (c % 2 == 0)
        {
            int num = 0, hlp = 0;
            for (int i = 0; i < n; i++)
            {
                hlp++;
                if (arr[i] == 2)
                {
                    num++;
                }
                if (num == c / 2)
                {
                    cout << hlp << endl;
                    break;
                }
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}