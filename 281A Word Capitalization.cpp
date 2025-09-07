#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s, res = "";
    cin >> s;
    res += toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        res += s[i];
    }

    cout << res << endl;

    return 0;
}