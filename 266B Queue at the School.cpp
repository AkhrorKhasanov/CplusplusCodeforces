#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int n, t;
    cin >> n >> t;
    cin >> s;
    while (t)
    {
        string temp = s;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                temp[i] = 'G';
                temp[i + 1] = 'B';
            }
        }
        s = temp;
        t--;
    }
    cout << s << endl;

    return 0;
}