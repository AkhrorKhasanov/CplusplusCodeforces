#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3, res = "";
        cin >> s1 >> s2 >> s3;
        res += s1[0];
        res += s2[0];
        res += s3[0];
        cout << res << endl;
    }
    return 0;
}