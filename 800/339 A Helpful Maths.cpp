#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    vector<int> vc;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '1' && s[i] <= '3') {
            vc.push_back(s[i] - '0');
        }
    }
    sort(vc.begin(), vc.end());
    for (int i = 0; i < vc.size(); i++) {
        cout << vc[i];
        if (i < vc.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}