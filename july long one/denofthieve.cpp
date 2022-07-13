#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; std::cin >> t;
	while(t--){
	    int m,x,y; cin>>m>>x>>y;
	    vector<int> v(100,0) ;
	    int arr[m], maxhouses = x*y, lower = 101,upper = 0;
	    for (int i = 0; i < m; i++) {
	        /* code */
	        cin>>arr[i];
	       int  ll =  arr[i] - maxhouses ;
	       if(ll < 1){ll = 1;}
	       int ul = arr[i] + maxhouses;
	       if(ul>100){ul = 100;}
	       fill(v.begin()+ll-1,v.end()+ul-100,1);
	        
	    }
	    int totalsum = 0;
	    for (int i = 0; i < 100; i++) {
	        /* code */
	        totalsum+=v[i];
	    }
	    std::cout << 100-totalsum << std::endl;
	}
	return 0;
}
