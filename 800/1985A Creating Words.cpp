#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string res1 = "";
        string res2 = "";
        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                res1 += s2[i];
                res2 += s1[i];
            }
            else
            {
                res1 += s1[i];
                res2 += s2[i];
            }
        }
        cout << res1 << " " << res2 << endl;
    }
    return 0;
}