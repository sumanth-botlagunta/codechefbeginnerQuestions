// FUNCTION F( S - a valid parentheses sequence )
// 	BEGIN
// 		balance = 0
// 		max_balance = 0
// 		FOR index FROM 1 TO LENGTH(S)
// 		BEGIN
// 			if S[index] == '(' then balance = balance + 1
// 			if S[index] == ')' then balance = balance - 1
// 			max_balance = max( max_balance, balance )
// 		END
// 		RETURN max_balance
// 	END

#include <iostream>
using namespace std;

int f(string s){
    int balance = 0;
    int max_balance = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') balance++;
        if(s[i] == ')') balance--;
        max_balance = max(max_balance,balance);
    }
    return max_balance;
}

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int max_length = f(s);
        string ans = "";
        for(int i = 0; i < max_length; i++){
            ans = "("+ans+")";
        }
        cout<<ans<<endl;   
    }
}