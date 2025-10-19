#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long hlp = (n + k - 1) / k;
        k *= hlp;
        cout << (n + k - 1) / n << endl;
    }
    return 0;
}