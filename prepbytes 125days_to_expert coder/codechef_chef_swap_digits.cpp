//https://www.codechef.com/problems/SWPDGT//
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int max = a + b;
        int a1 = a / 10;
        int a2 = a % 10;
        int b1 = b / 10;
        int b2 = b % 10;
        if (a1 != 0 && b1 != 0)
        {
            int X = a1 * 10 + b1 + a2 * 10 + b2;
            int Y = a2 * 10 + b1 + a1 * 10 + b2;
            int Z = b2 * 10 + a2 + b1 * 10 + a1;
            if (max < X)
                max = X;
            if (max < Y)
                max = Y;
            if (max < Z)
                max = Z;
            cout << max << " "
                 << "\n";
        }
        else if (a1 != 0 && b1 == 0)
        {
            int X = a1 * 10 + b2 + a2;
            int Y = b2 * 10 + a2 + a1;
            if (max < X)
                max = X;
            if (max < Y)
                max = Y;
            cout << max << " "
                 << "\n";
        }
        else if (a1 == 0 && b1 != 0)
        {
            int X = b2 + a2 * 10 + b1;
            int Y = b1 + a2 * 10 + b2;
            if (max < X)
                max = X;
            if (max < Y)
                max = Y;
            cout << max << " "
                 << "\n";
        }
        else
        {
            cout << max << " " << endl;
        }
    }
    return 0;
}
