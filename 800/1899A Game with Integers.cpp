#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else if (n % 3 == 1)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
    return 0;
}