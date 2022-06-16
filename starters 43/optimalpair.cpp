#include <iostream>
#include <vector>
using namespace std;

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// int lcm(int a, int b)
// {
//     return a * b / gcd(a, b);
// }

// int g(int a, int b)
// {
//     return lcm(a, b)+gcd(a, b);
// }

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        for(int j = 1; j < n; j++)
        {
            if(n%j == 0)
            {
                count++;
            }
        }
        if(n%2==0)
        cout << 2*count -1 << endl;
        else
        cout << 2*count << endl;
        // vector<int> a;
        // for (int j = 1; j < n; j++)
        // {
        //     a.push_back(j);
        // }
        // int count = 0;
        // int min_g = g(1,n-1);
        // for (int i = 0; i < a.size(); i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (((a[i] + a[j]) == n) && (g(a[i], a[j]) == min_g))
        //         {
        //             count++;
        //         }
        //     }
        // }
        // cout << count << endl;
    }
    return 0;
}
