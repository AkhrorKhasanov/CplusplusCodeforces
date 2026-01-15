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
        string s1 = "", s2 = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                s1 += "..";
                s2 += "##";
            }
            else
            {
                s1 += "##";
                s2 += "..";
            }
        }
        string res1 = s1 + "\n" + s1;
        string res2 = s2 + "\n" + s2;
        string res = "";
        ;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                res += res2 + "\n";
            }
            else
            {
                res += res1 + "\n";
            }
        }
        cout << res;
    }
    return 0;
}