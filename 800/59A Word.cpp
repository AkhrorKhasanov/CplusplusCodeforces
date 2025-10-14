#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = 0, A = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            a++;
        }
        else
        {
            A++;
        }
    }
    string res = "";
    if (a >= A)
    {
        for (char ch : s)
        {
            res += tolower(ch);
        }
    }
    else
    {
        for (char ch : s)
        {
            res += toupper(ch);
        }
    }
    cout << res << endl;
    return 0;
}