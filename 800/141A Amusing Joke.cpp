#include <iostream>
#include <map>
#include <cstdlib>
using namespace std;
int main()
{
    string s1, s2, s3;
    map<char, int> m;
    map<char, int> M;
    cin >> s1 >> s2 >> s3;
    for (char s : s1)
    {
        m[s]++;
    }
    for (char s : s2)
    {
        m[s]++;
    }
    for (char s : s3)
    {
        M[s]++;
    }
    for (auto e : m)
    {
        if (M[e.first] != e.second)
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    for (auto e : M)
    {
        if (m[e.first] != e.second)
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}
