#include <iostream>
using namespace std;
int main() {
    string s1, s2, r1 = "", r2 = "";
    int count1 = 0, count2 = 0;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++){
        r1 += tolower(s1[i]);
        r2 += tolower(s2[i]);
    }    
    if (r1.compare(r2) < 0) {
        cout << -1;
    } else if (r1.compare(r2) > 0) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}