
// partially correct (TLE error)
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void cycle(vector<long long> &a, long long &n)
{
    long long temp = a[n - 1];
    for (long long i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

long long no_of_different_element(vector<long long> v, long long n)
{
    unordered_map<long long, long long> m;
    long long prev_bit = v[0];
    m[prev_bit]++;
    for (long long i = 1; i < n; i++)
    {
        m[v[i] ^ prev_bit]++;
        prev_bit = v[i] ^ prev_bit;
    }
    return m.size();
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            a.push_back(x);
        }
        long long size = 0;
        for (long long i = 0; i < n; i++)
        {
            cycle(a, n);
            if (size < no_of_different_element(a, n))
            {
                size = no_of_different_element(a, n);
            }
        }
        cout << size << endl;
    }
    return 0;
}