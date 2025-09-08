#include <iostream>
using namespace std;
int main()
{
    string s1, s2, res = "";
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            res += '1';
        }
        else
        {
            res += '0';
        }
    }
    cout << res << endl;
    return 0;
}