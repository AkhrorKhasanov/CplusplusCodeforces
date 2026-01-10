#include <iostream>
using namespace std;

int give_number(string s)
{
    return (s[0] - '0') * 10 + (s[1] - '0');
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, a_p_m = "PM";
        cin >> s;
        int num = give_number(s);
        if (num >= 0 && num < 12)
        {
            a_p_m = "AM";
            if (num == 0)
            {
                cout << "12:" << s.substr(3, 2) << " " << a_p_m << endl;
            }
            else
            {
                cout << s << " " << a_p_m << endl;
            }
        }
        else
        {
            if (num == 12)
            {
                cout << "12:" << s.substr(3, 2) << " " << a_p_m << endl;
            }
            else
            {
                num -= 12;
                string hlp = to_string(num);
                while (hlp.size() < 2)
                {
                    hlp = '0' + hlp;
                }
                cout << hlp << ":" << s.substr(3, 2) << " " << a_p_m << endl;
            }
        }
    }
    return 0;
}