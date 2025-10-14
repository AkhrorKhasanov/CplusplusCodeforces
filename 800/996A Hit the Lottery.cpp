#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int hundred = n / 100;
    int twenty = (n % 100) / 20;
    int ten = ((n % 100) % 20) / 10;
    int five = (((n % 100) % 20) % 10) / 5;
    int one = (((n % 100) % 20) % 10) % 5;
    cout << hundred + twenty + ten + five + one << endl;
    return 0;
}