#include <iostream>
using namespace std;
int main() {
    
    int t, i, a, b, c, res = 0;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if (a + b + c > 1) {
            res++;
        }
    }
    
    cout << res << endl;

    return 0;
}