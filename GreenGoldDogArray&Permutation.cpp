/*▄███████▀▀▀▀▀▀███████▄
░▐████▀▒▒писатель▒▀██████▄
░███▀▒▒▒▒Кришнеш▒▒▒▒▀█████
░▐██▒▒▒▒Чаурасия▒▒▒▒▒████▌
░▐█▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▌
░░█▒▄▀▀▀▀▀▄▒▒▄▀▀▀▀▀▄▒▐███▌
░░░▐░░░▄▄░░▌▐░░░▄▄░░▌▐███▌
░▄▀▌░░░▀▀░░▌▐░░░▀▀░░▌▒▀▒█▌
░▌▒▀▄░░░░▄▀▒▒▀▄░░░▄▀▒▒▄▀▒▌
░▀▄▐▒▀▀▀▀▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒█
░░░▀▌▒▄██▄▄▄▄████▄▒▒▒▒█▀
░░░░▄█████████████  █▒▒▐▌
░░░▀███▀▀████▀█████▀▒▌
░░░░░▌▒▒▒▄▒▒▒▄▒▒▒▒▒▒▐
░░░░░▌▒▒▒▒▀▀▀▒▒▒▒▒▒▒▐*/

 #include <iostream> // std::cout
#include <numeric> // 
#include <bits/stdc++.h>
using namespace std;

typedef                     long long ll;
typedef                     long double lld;
typedef                     vector<ll> vl;
typedef                     vector<string> vs;
typedef                     vector<vl> vvl;
typedef                     pair<ll, ll> pl;
typedef                     unsigned long long ull;
#define _mod                1000000007
#define ff                  first
#define ln 					'\n';
#define ss                  second
#define pb                  push_back
#define sz(v)               ll(v.size())
#define all(v)              v.begin(), v.end()
#define forn(i,n)           for(ll i = 0; i < n; i++)
#define yy                  cout << "YES\n"
#define nn                  cout << "NO\n"
#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), V, sizeof((X)))

// Debugging
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif

/**************************************************************************************************************************************/
  

void solve(){

	// vector<int> v(n);
	// for(int i = 0; i < n; i++){
	// 	cin >> v[i];
	// }	

	// sort(v.begin(), v.end());

	// for(auto i: v){
	// 	cout << i << " "; 
	// }
	int n;
	cin >> n;

	vector<pair<int,int>> pairs(n);
	forn(i, n){
		int x;
		cin >> x;
		pairs[i].first = x;
		pairs[i].second = i;
	}

	// for(auto p: pairs) cout << p.first << " " << p.second << "\n";

	sort(pairs.begin(), pairs.end());
	
	vector<int> ans(n);
	
	int mx = n;
	forn(i, n){
		ans[pairs[i].second] = mx;
		mx--;
	}

	for(auto i: ans){
		cout << i << " "; 
	}

	cout << "\n";

	// int odd = 1;
	// while(odd <= n){
	// 	cout << odd << " ";
	// 	odd += 2;
	// }

	// int even = 2;
	// while(even <= n){
	// 	cout << even << " ";
	// 	even += 2;
	// }

	// cout << "\n";
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
// #ifndef ONLINE_JUDGE
//     freopen("Error.txt", "w", stderr);
// #endif
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int tc;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}