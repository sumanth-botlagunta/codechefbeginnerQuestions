#include <iostream>
#include <map>
using namespace std;
#define LL long long
  
   
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        map<LL int,LL int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        map<LL int, LL int>::iterator it;
        bool flag = true;
        for(it=m.begin();it!=m.end();it++){
            // cout<<it->first<<"->"<<it->second<<endl;
            if(it->second%it->first!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}