// sucessful compilation: YES
#include <iostream>
#include <vector>
using namespace std;

int totalxor(vector<int> a, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum ^ a[i];
    }
    return sum;
}
   
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> b;
        for(int i=0;i<=n;i++){
            int x; cin>>x;
            b.push_back(x);
        }
        int bxor = totalxor(b,n+1);
        if(n%2==0)
        {
            for(int i = 1; i <= n; i++){
            cout << (b[0] ^ b[i]) << " ";}
            cout << endl;
        }
        else{ 
            bool found = false; 
            for(int i=0;i<=n;i++)
            {
                if(b[i] == bxor && !found)
                {
                    found = true;
                }
                else
                {
                    cout<<(bxor^b[i])<<" ";
                }
                
            }
            cout<<endl;
        }


    }
    return 0;
}