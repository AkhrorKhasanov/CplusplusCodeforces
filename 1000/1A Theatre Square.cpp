#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long n, m, a;
    cin >> n >> m >> a;
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;
    return 0;
}