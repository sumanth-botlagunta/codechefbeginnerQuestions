#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    for (int i = 0; i <n; i++) {
	        cin>>arr[i];
	    }
        int totalliters, units, ans;
        if(arr[0] >0){
            totalliters = arr[0];
            units = 0;
        }else{
            ans = 0;
        }
        for(int i= 1; i<n; i++) {
            units+=1;
            totalliters -= 1;
            totalliters += arr[i];
            if(totalliters <= 0) {
                break;
            }
        }
        if(ans == 0) {
            cout<<"0"<<endl; }
        else {
            ans = totalliters+units;
            cout<<ans<<endl;
        }
        
	    
	}
	return 0;
}
