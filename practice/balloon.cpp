#include <iostream>
#include <map>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int, int> m;
        map<int, int>::iterator it;
        for(int i = 1; i <= n; i++){
            cin>>m[i];
        }
        int max = -1;
        for(it = m.begin(); it != m.end(); it++){
               if(it->second <= 7){
                    max = max > it->first ? max : it->first;
            }
        }
        cout<<max<<endl;
    }
}