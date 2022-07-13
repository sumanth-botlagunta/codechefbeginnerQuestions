#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    LL int B;
    cin >> B;
    LL int array[B][2];
    for (int i = 0; i < B; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array[i][j];
        }
    }
    LL int mx = array[0][1] - array[0][0] + 1;
    LL int nx = array[B - 1][1] - array[B - 1][0] + 1;

    LL int qs = 1, k = INT_MIN, flag = 0;

    for (int i = 0; i < B - 1; i++)
    {
        if (array[i][0] == 0 && array[i + 1][0] == 0)
        {
            qs++;
        }
        else
        {
            flag = 1;
            k = max(k, qs);
        }
    }
    if (flag == 0)
        k = B;

    LL int ul = 1, flan = 0;
    LL int tp = INT_MIN;
    for (int i = 0; i < B - 1; i++)
    {
        if (array[i][1] == B - 1 && array[i + 1][1] == B - 1)
        {

            ul++;
        }
        else
        {
            flan = 1;
            tp = max(tp, ul);
        }
    }
    if (flan == 0)
    {
        tp = B;
    }
    LL int db = max(mx, nx);
    LL int ge = max(k, tp);
    LL int solution = max(db, ge);

    cout << solution << endl;
    return 0;
}