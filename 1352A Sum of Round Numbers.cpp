#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int len = s.size();
        int first = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != '0')
            {
                first++;
            }
        }
        cout << first << endl;
        for (int i = 0; i < len; i++)
        {
            int res = (s[i] - '0') * pow(10, len - i - 1);
            if (res)
            {
                cout << res << " ";
            }
        }
        cout << endl;
    }
    return 0;
}