#include <iostream>
using namespace std;

int main()
{
    int n, m, curr = 1;
    unsigned long long int t = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        if (a >= curr)
        {
            t += a - curr;
        }
        else
        {
            t += n - curr + a;
        }
        curr = a;
    }
    cout << t << endl;
    return 0;
}