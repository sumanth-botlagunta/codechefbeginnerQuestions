#include<iostream>
using namespace std;
#include <bits/stdc++.h>
class Solution{
public:
    int maxInstance(string s){
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'||s[i]=='a'||s[i]=='o'||s[i]=='l'||s[i]=='n'){
                char temp = s[i];
                m[temp]++;
            }
        }
        m['o']= m['o']/2;
        m['l']= m['l']/2;

        map<char,int>::iterator it;
        int min = INT_MAX;
        for(it=m.begin();it!=m.end();it++){
            if(it->second<min){
                min = it->second;
            }
        }
        return min;
    }
};

int main(){
    Solution s;
    string s1 = "loonbalxballpoon";
    cout<<s.maxInstance(s1)<<endl;
    return 0;
}
