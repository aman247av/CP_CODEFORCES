#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, cc = 1, dc=1;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {

            for (int j = 0; j < c; j++)
            {
                cout << "#";
            }
        }
        else
        {
            for (int j = 0; j < c; j++)
            {

                if ((4 * cc - 3) == i && j == c - 1)
                {
                    cout << "#";
                    cc++;
                }
                else
                {
                    if ((4 * dc - 3) != i && j == 0)
                    {
                        cout << "#";
                        dc++;
                    }
                    else
                        cout << ".";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}