#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        if (n.size() == 1) {
            cout << n << endl;
        } else {

        
        int one = n[0] - '0';
        int res = one + 8 + 10 * (n.size() - 2);
        cout << res << endl;
    }
}
    return 0;
}