#include <iostream>
using namespace std;

int main() {
    int n, k, s = 0, i = 0;
    cin >> n >> k;
    
    while (true) {
        if (s > 240 - k || i > n) {
            break;
        }
        i++;
        s += 5 * i;
    }
    cout << i - 1 << endl;
    return 0;
}