#include <iostream>
using namespace std;
#define LL long long

int main(){
    int t; cin>>t;
    while(t--){
        LL int r, g ,b,k;
        cin>>r>>g>>b>>k;
        LL int ans = min(r,k-1)+min(g,k-1)+min(b,k-1)+1;
        cout<<ans<<endl;   
    }
}