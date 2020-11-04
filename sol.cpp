#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<ll> v(100005, 0);
	int mx=0;
	for(int i=0; i<n; ++i) {
		int x;
		cin >> x;
		v[x]++;
		mx=max(mx, x);
	}
	vector<ll> v2(100005, 0);
	v2[0]=0;
	v2[1]=v[1];
	for(ll i=2; i<=100000; ++i)
		v2[i]=max(v2[i-1], v2[i-2]+(v[i]*i));
	cout << v2[mx] << "\n";
}
