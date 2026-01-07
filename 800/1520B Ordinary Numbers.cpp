#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 0, p = 0;
        string s = to_string(n);
        for (int i = 0; i < s.size(); i++)
        {
            p++;
        }
        c += 9 * (p - 1);
        if (p == 1)
        {
            c += n;
        }
        else
        {
            int num = s[0] - '0';
            string hlp = "";
            for (int i = 0; i < p; i++)
            {
                hlp += s[0];
            }
            int hlp2 = stoi(hlp);
            if (hlp2 <= n)
            {
                c += num;
            }
            else
            {
                c += num - 1;
            }
        }
        cout << c << endl;
    }
    return 0;
}