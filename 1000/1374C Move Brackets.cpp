#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                c++;
            }
            else
            {
                c--;
                res = min(res, c);
            }
        }
        cout << abs(res)<< endl;
    }
    return 0;
}