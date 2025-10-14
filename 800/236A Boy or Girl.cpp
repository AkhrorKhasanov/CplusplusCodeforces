#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> my_set(s.begin(), s.end());
    int len = my_set.size();

    if (len % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}
