#include <bits/stdc++.h>
using namespace std;

// get set bit at position i
int get_bit(int n, int i) {
    return (n >> i) & 1;
}

int set_bit(int n, int i) {
    return n | (1 << i);
}

int main() {
 int a = 3;
 for(int i = 0; i < 8; i++) {
  cout << get_bit(a, i) << " ";
 }
    cout << endl;
    a = set_bit(a, 3);
    cout<<a<<endl;
//  int b = (1<<2);
//  cout << b<<endl;
 return 0;
}