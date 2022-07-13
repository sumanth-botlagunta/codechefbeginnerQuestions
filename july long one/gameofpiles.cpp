#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n ,a, k=0;
        cin>>n;
        bool falsy = false;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a==1){
                falsy = true;
            }
            else
                if(a!=2){
                    a= a-2;
                    k+=a;
                }

        }
        if(falsy){cout<<"CHEF"<<endl;}
        else{
            if(k%2==0){cout<<"CHEFINA"<<endl;}
            else{cout<<"CHEF"<<endl;}
        }

    }
    return 0;
}