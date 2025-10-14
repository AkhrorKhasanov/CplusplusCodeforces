#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, p, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        c += p;
    }
    double res = 1.0 * c / n;
    cout << fixed << setprecision(4) << res << endl;
    return 0;
}