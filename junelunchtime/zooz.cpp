#include <iostream>
using namespace std;
  
   
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int s[n];
        if(n%2==0){
            for(int i=(n/2-1);i>=0;i-=2){
                s[i]=s[n-1-i]=0;
                s[i-1]=s[n-i]=1;
            }
        }
        else{
            int k = (n-1)/2;
            s[k]=1;
            for(int i=(k-1);i>=0;i-=2){
                s[i]=s[n-1-i]=0;
                s[i-1]=s[n-i]=1;
            }
        }
        for(int i=0;i<n;i++){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}