#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int five = x / 5;
    int four = (x % 5) / 4;
    int three = ((x % 5) % 4) / 3;
    int two = (((x % 5) % 4) % 3) / 2;
    int one = (((x % 5) % 4) % 3) % 2;
    cout << one + two + three + four + five << endl;
    return 0;
}