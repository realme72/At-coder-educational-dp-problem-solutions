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
	int n; cin >> n;
	vector<vector<int>> act(n, vector<int> (3, 0));
	
	for(int i = 0; i< n; ++i) {
		cin >> act[i][0] >> act[i][1] >> act[i][2];
	}

	vector<vector<int>> dp(n, vector<int>(3, 0));

	for(int i = 0; i < 3; ++i) {
		dp[0][i] = act[0][i];
	}

	for(int i = 1; i < n; ++i) {
		for(int j = 0; j < 3; ++j) {
			dp[i][j] = max(dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]) + act[i][j];
		}
	}

	cout << max({dp[n-1][0],dp[n-1][1],dp[n-1][2]}) << "\n";
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
  
