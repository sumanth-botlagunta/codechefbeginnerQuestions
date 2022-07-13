#include <iostream>
#include <stack>
#include <map>
using namespace std;

bool checkrecipe(map<int, int> m)
{
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
        {
            return false;
        }
    }
    return true;
}

bool checkfrequency(map<int, int> f, int arr[], int n)
{
    map<int, int>::iterator it, st;
    for (it = f.begin(); it != f.end(); it++)
    {
        for (int i = 0; i < n; i++)
        {
            if ((it->second == f[arr[i]]) && (it->first != arr[i]))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }
        stack<int> st;
        st.push(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (st.top() != a[i])
            {
                st.push(a[i]);
            }
        }
        int sz = st.size();
        map<int, int> m;
        for (int i = 0; i < sz; i++)
        {
            m[st.top()]++;
            st.pop();
        }
        if (checkrecipe(m) && checkfrequency(freq, a, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}