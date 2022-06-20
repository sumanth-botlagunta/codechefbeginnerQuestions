#include <iostream>
using namespace std;
  
   
int main(){
    int t;
    cin >> t;
    while(t--){
        int p;
        cin >> p;
        string s;
        cin >> s;
        s = '0'+s+'1';
        int n = s.length();
        // cout << s << endl;
        int count = 0;
        for(int i = 1; i < n; i++){
            if((s[i] == '1') && (s[i-1] == '0')){
                // cout<<"i="<<i<<endl;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}