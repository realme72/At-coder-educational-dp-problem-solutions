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
	int n, k; cin >> n >> k;
	vector<int> a(n);

	for(auto &i : a) cin >> i;
	vector<int>dp(n+1, INT_MAX);

	dp[0] = 0;

	for(int i = 0; i <n; ++i) {
		for(int j =i +1; j <= i+k; ++j)  {
			if(j < n) {
				dp[j] = min(dp[j], dp[i] + abs(a[j]-a[i]));
			}
 		}	
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
  
