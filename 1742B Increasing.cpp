#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        set<int> st;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }
        if (st.size() == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}