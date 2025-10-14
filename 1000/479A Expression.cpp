#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c, maks = 0;
    vector<int> v;
    cin >> a >> b >> c;
    v.push_back(a + b + c);
    v.push_back((a + b) * c);
    v.push_back(a * b + c);
    v.push_back(a * b * c);
    v.push_back(a * (b + c));
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > maks)
        {
            maks = v[i];
        }
    }
    cout << maks << endl;
    return 0;
}