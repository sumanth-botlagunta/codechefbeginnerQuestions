#include <iostream>
#include <map>
using namespace std;
#define LL long long
  
int max(int a, int b)
{
    return a > b ? a : b;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        map<LL int,LL int> m;
        for(int i=0;i<n;i++){
            m[i+1] = a[i];
        }
        map<LL int, LL int>::iterator it;
        unsigned int value = 0;
        for(it=m.begin();it!=m.end();it++){
            int prev_value = value;
            if(it->second!=it->first){
                value = it->first - value ;
            }
            value = max(value,prev_value);
        }
        cout<<value<<endl;
    }
    return 0;
}