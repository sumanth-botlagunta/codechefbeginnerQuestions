#include <iostream>
using namespace std;
  
   
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],d[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        int bestdefence = -1;
        for(int i=0;i<n;i++){
            if(i==0)
	        {
	            if(d[i]>a[i+1]+a[n-1])
	            bestdefence=max(bestdefence,d[i]);
	        }
	        else if(i==n-1)
	        {
	            if(d[i]>a[i-1]+a[0])
	            bestdefence=max(bestdefence,d[i]);
	        }
	        else
	        {
	            if(d[i]>(a[i-1]+a[i+1]))
	            bestdefence=max(bestdefence,d[i]);
	        }
        }
        cout<<bestdefence<<endl;
    }
    return 0;
}