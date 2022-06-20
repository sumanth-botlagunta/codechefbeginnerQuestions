#include <iostream>
#include <map>
using namespace std;
  
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> m;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < n; j++){
                m[i]+=arr[j]%10;
                arr[j]/=10;
            }
        }
        map<int, int>::iterator it;
        int max = 0;
        for(it = m.begin(); it != m.end(); it++){
            if(it->second%2 == 1){
                max++;
            }
        }
        cout << max << endl;  
    }
    return 0;
}