#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0;
        string arr[10];
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            arr[i] = s;
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                char e = arr[i][j];
                bool one = ((i == 0 || i == 9) && j >= 0 && j <= 9) || ((j == 0 || j == 9) && i >= 0 && i <= 9);
                bool two = ((i == 1 || i == 8) && j >= 1 && j <= 8) || ((j == 1 || j == 8) && i >= 1 && i <= 8);
                bool three = ((i == 2 || i == 7) && j >= 2 && j <= 7) || ((j == 2 || j == 7) && i >= 2 && i <= 7);
                bool four = ((i == 3 || i == 6) && j >= 3 && j <= 6) || ((j == 3 || j == 6) && i >= 3 && i <= 6);
                bool five = ((i == 4 || i == 5) && j >= 4 && j <= 5) || ((j == 4 || j == 5) && i >= 4 && i <= 5);
                if (e == 'X')
                {
                    if (one)
                    {
                        c++;
                    }
                    else if (two)
                    {
                        c += 2;
                    }
                    else if (three)
                    {
                        c += 3;
                    }
                    else if (four)
                    {
                        c += 4;
                    }
                    else if (five)
                    {
                        c += 5;
                    }
                }
            }
        }
        cout << c << endl;
    }
}