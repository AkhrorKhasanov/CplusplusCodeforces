#include <iostream>
using namespace std;
int main()
{
    int n, mini = -1, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        c = c - a + b;
        if (mini < c)
        {
            mini = c;
        }
    }
    cout << mini << endl;
    return 0;
}