// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int goodSubsets(vector<int> &arr, int n){
        int count = pow(2,n);
        int ans = 0;
        for(int i=0;i<count;i++){
            int prod = 1;
            for(int j=0;j<n;j++){
                if((i & (1 << j)) != 0){
                    prod = prod*arr[j];
                }
            }
            if(isPrime(prod)|| primeFactors(prod)){
                ans++;
            }
        }
        int N = 1000000007;
        return ans%N;
    }
    bool isPrime(int n){
        if(n == 1){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    bool primeFactors(int n){
        vector<int> v;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
    if (n > 2){
        v.push_back(n);
    }
    map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->second>1){
            return false;
        }
    }
    return true;
    }

};

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.goodSubsets(a, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends