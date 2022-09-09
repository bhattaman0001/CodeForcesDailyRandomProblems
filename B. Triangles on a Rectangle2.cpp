#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
	int w, h;
	cin>>w>>h;
	int m1 = INT_MIN;
	for(int i=0;i<2;i++){
		int k;
		cin>>k;
		int a=INT_MAX, b=INT_MIN;
		for(int j=0;j<k;j++){
			int x;
			cin>>x;
			a = min(a, x);
			b = max(b, x);
		}
		m1 = max(m1, h*(b-a));
	}
	int m2 = INT_MIN;
	for(int i=0;i<2;i++){
		int k;
		cin>>k;
		int a=INT_MAX, b=INT_MIN;
		for(int j=0;j<k;j++){
			int x;
			cin>>x;
			a = min(a, x);
			b = max(b, x);
		}
		m2 = max(m2, w*(b-a));
	}
	cout<<max(m1, m2)<<endl;
	return;
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while (test--)
		solve();
}
