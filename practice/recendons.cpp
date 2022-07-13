#include<iostream>
using namespace std;
#include <map>

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        map<int,int> m;

        for(int i=0; i<n; i++){ 
            m[a[i]]=max(m[a[i]],i);
        }
         map<int,int>::iterator it;
         int maxd = 0;
         int maxtype = 0;
         int premaxd;
         for(it=m.begin(); it!=m.end(); it++) {
            cout << it->first << " " << it->second << endl;
            premaxd = maxd;
            for(int i= it->second; i>=0; i-=2){
                if(a[i] == it->first){
                    maxd++;
                }
            }
            if(maxd >= premaxd){
                maxtype = it->first;
            }
         }
         cout <<maxtype<<endl;
    }
    return 0;
}