#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        for(int i =1; i*i<=n; i++){
            if(n%i == 0){
                int fac1 = i, fac2 = n-i;
                if(fac2 == 2) count++;
                else count+=2;
                if(fac2 !=fac1 && fac2 !=n){
                    if(fac1 == 2) count++;
                    else count+=2;
                }
            }
        }
        cout<<count<<" "<<endl;
    }
}