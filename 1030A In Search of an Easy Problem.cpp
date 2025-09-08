#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a)
        {
            cout << "HARD" << endl;
            exit(0);
        }
    }
    cout << "EASY" << endl;
}