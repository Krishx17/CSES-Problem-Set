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

	//if sum of n is odd
	if(((n*(n+1))/2)%2){
		nn;
		return;
	}
	//if sum of n is even, and can be divided into 2 sub arrays.
	yy;
	vector<int> f;
	vector<int> s;
	//if n is odd
	if(n%2){
		int len = n - 1;
		for(int i = 0; i < len/2; i++){
			if(i%2){
				s.push_back(i + 1);
				s.push_back(n - i - 1);
			} else {
				f.push_back(i+1);
				f.push_back(n-i - 1);
			}
		}
		if(f.size() > s.size()) s.push_back(n);
		else f.push_back(n);

		cout << f.size() << '\n';
		for(auto i: f) cout << i << " ";
		cout << '\n' << s.size() << '\n';
		for(auto i: s) cout << i << " ";
		cout << '\n';
		return;
	}
	//if n is even 
	else {
		for(int i = 0; i < n/2; i++){
			if(i%2){
				s.push_back(i + 1);
				s.push_back(n - i);
			} else {
				f.push_back(i+1);
				f.push_back(n-i);
			}
		}
		cout << f.size() << '\n';
		for(auto i: f) cout << i << " ";
		cout << '\n' << s.size() << '\n';
		for(auto i: s) cout << i << " ";
		cout << '\n';
		return;
	}
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

    // int tc;
    // cin >> tc;

    // while (tc--)
        solve();

    return 0;
}