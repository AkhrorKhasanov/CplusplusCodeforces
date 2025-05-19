#include <iostream>
using namespace std;
int main() {
    
    int t, i, res = 0;
    string s;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> s;
        if (s[0] == '+' || s[2] == '+') {
            res++;
        } else if (s[0] == '-' || s[2] == '-') {
            res--;
        }
    }
    cout << res << endl;
    

    return 0;
}