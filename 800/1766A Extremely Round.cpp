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
        cout << one + 9 * (n.size() - 1) << endl;
        
    }
}
    return 0;
}
