#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
#define S second
#define F first
#define all(a) a.begin(),a.end()
#define gaurav main
#define prec(n) fixed<<setprecision(n)

// struct act{
// 	int a, b, c;
// };


void solve() {
	int n, weight; cin >> n >> weight;
	vector<ll> wt(n), val(n), dp(weight + 1, 0LL);

	for(int i = 0; i < n; ++i) {
		cin >> wt[i] >> val[i];
	}

	for(int i = 0; i < n; ++i) {
		for(int j = weight; j - wt[i] >= 0; --j) {
			dp[j] = max(dp[j], dp[j-wt[i]] + val[i]);
		}
	}

	cout << dp[weight] << "\n";
}



int gaurav() {
	ios_base::sync_with_stdio(false);
	
	// clock_t begin, end;
	// double time_spent;
	// begin = clock();

	int t = 1; 
	while(t--) {
		solve();
	}
 
	// end = clock();
	// time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	// cout << "Time Taken " << prec(10) << time_spent;
	// cout << "\n";
	return 0;
} 
  
