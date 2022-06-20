#include <iostream>
#include <vector>
using namespace std;

 #define LL long long

LL int sum(vector<LL int> v, int n) {
    LL sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
    }
    return sum;
} 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        LL int v;
        cin >> v;
        vector<LL int> a;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        LL int nsum = sum(a,n);
        LL int tsum = v*(n+k);
        LL int diff = tsum - nsum;
        if(diff%k){
            cout << -1 << endl;
        }
        else{
            LL int ans = diff/k;
            if(ans <= 0){
                cout << -1 << endl;
            }
            else{
                cout << ans << endl;
            }
        }
    }
    return 0;
}