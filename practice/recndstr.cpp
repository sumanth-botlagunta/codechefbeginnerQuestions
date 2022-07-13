#include <iostream>
using namespace std;

void checkstring(string s,int n){
    for(int i = 0; i < n; i++){
                if(s[i] != s[(i+2)%n]){
                    cout<<"NO"<<endl; return;
                }  
            }
            cout<<"YES"<<endl; return;

}  
int main(){
    int t ; cin>>t;
    while(t--){
        string s; cin>>s;
        int n = s.size();
        checkstring(s,n);
        
    }
    return 0;
}