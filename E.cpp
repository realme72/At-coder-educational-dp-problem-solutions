#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
#define S second
#define F first
#define all(a) a.begin(),a.end()
#define gaurav main
#define prec(n) fixed<<setprecision(n)

const ll V = 1e5 + 10;
const ll INF = 100000000000;

void solve() {
	ll N, W; cin >> N >> W;
    vector <ll> w(N + 10), v(N + 10);
    for (ll i = 0; i < N; i++) 
        cin >> w[i] >> v[i];

    vector<vector<ll>> dp(N + 10, vector<ll>(V, INF));
    dp[0][0] = 0;
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < V; j++) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            if (j - v[i] >= 0) {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - v[i]] + w[i]);
            }
        }
    }
    ll ans = 0;
    for (ll j = 100000; j >= 0 ; j--) {
        if (dp[N][j] <= W) {
            ans = j;
            break;
        }
    }
    cout << ans << endl;
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
  
