#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
#define S second
#define F first
#define all(a) a.begin(),a.end()
#define gaurav main
#define prec(n) fixed<<setprecision(n)

// struct cnt {
// 	int a, b, c;
// };


void solve() {
	int n; cin >> n;
	vector<int> a(n);

	for(auto &i : a) cin >> i;
	vector<int>dp(n+1, 0);

	dp[0] = 0;
	dp[1] = abs(a[1]-a[0]);

	for(int i = 2; i <n; ++i) {
		dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]), dp[i-2] + abs(a[i]-a[i-2]));	
	}

	cout << dp[n-1] << "\n";
}


int gaurav() {
	ios_base::sync_with_stdio(false);
	
	// clock_t begin, end;
	// double time_spent;
	// begin = clock();

	int t=1; 
	while(t--) {
		solve();
	}
 
	// end = clock();
	// time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	// cout << "Time Taken " << prec(10) << time_spent;
	// cout << "\n";
	return 0;
} 
  
