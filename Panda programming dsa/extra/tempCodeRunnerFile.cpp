#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    if (1 <= n && n <= 20 && n % 2 != 0)
    {
        cin >> n;

        s = n;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j != s)
                {
                    if (i == j)
                        cout << "\\";
                    else
                        cout << " ";
                }
                if (j == s)
                {
                    if (s == (n / 2 + 1))
                        cout << "X";
                    else
                        cout << "/";
                }
            }

            s--;

            cout << endl;
        }
    }
    return 0;
}