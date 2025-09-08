#include <iostream>
#include <set>
using namespace std;
int main()
{
    int s1, s2, s3, s4;
    set<int> s;
    cin >> s1 >> s2 >> s3 >> s4;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    cout << 4 - s.size() << endl;
    return 0;
}