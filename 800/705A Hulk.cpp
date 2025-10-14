#include <iostream>
using namespace std;
int main()
{
    int n;
    string res, s1 = " that I love", s2 = " that I hate";
    cin >> n;
    if (n == 1)
    {
        cout << "I hate it" << endl;
    }
    else
    {
        res = "I hate";
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                res += s1;
            }
            else
            {
                res += s2;
            }
        }
        cout << res + " it" << endl;
    }

    return 0;
}