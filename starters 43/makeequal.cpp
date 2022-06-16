#include "bits/stdc++.h"

using namespace std;
using ll = long long int;
 
int main()
{ 
	int t; cin >> t;
	while (t--) {
		ll a, b, c; cin >> a >> b >> c;
		bool good = false;
		for (int i = 0; i < 40; ++i) {
			if (a == b and b == c) {
				good = true;
				break;
			}
			int ct = ((a>>i)&1) + ((b>>i)&1) + ((c>>i)&1);
			if (ct == 2) {
				if (((a>>i)&1) == 0) a += 1LL<<i;
				if (((b>>i)&1) == 0) b += 1LL<<i;
				if (((c>>i)&1) == 0) c += 1LL<<i;
			}
			else if (ct == 1) {
				if ((a>>i)&1) a += 1LL<<i;
				if ((b>>i)&1) b += 1LL<<i;
				if ((c>>i)&1) c += 1LL<<i;
			}
			else break;
		}
		if (good) cout << "YES\n";
		else cout << "NO\n";
	}
}