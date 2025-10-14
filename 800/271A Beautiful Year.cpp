#include <iostream>
#include <set>
using namespace std;
set<int> solve(int n)
{
    set<int> nums;
    while (n)
    {
        int k = n % 10;
        n /= 10;
        nums.insert(k);
    }
    return nums;
}
int main()
{
    int s;
    cin >> s;
    s += 1;
    set<int> res = solve(s);
    while (res.size() != 4)
    {
        s += 1;
        res = solve(s);
    }
    cout << s << endl;
    return 0;
}