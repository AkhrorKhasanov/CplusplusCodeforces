#include <iostream>
using namespace std;

int main()
{
    int n, mini = 100001;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (abs(a) < mini)
        {
            mini = abs(a);
        }
    }
    cout << mini << endl;
    return 0;
}