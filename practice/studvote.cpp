#include <iostream>
#include <map>
using namespace std;
  
  
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> m;
        for(int i = 0; i < n; i++){
                m[arr[i]]++;
        }
        for(int i = 0;i < n;i++){
	        if(arr[i] == i + 1 || m[arr[i]] < k){
	            m.erase(arr[i]);
	        }
	    }
	    cout<<m.size()<<endl;

    }
    return 0;
}