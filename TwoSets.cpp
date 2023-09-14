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
	yy;
	//if n is odd
	if(n%2){
		int flag = 1;
		int vsize = n-1;
		vector<int> num(vsize);
		iota(num.begin(), num.end(), 1);
		vector<int> sub1;
		vector<int> sub2;
		int idx1 = 0;
		int idx2 =  vsize-1;
		for(int i = 0; i < vsize/2; i++){
			if(flag == 1){
				sub1.push_back(num[idx1++]);
				sub1.push_back(num[idx2--]);
				flag = 2;
			} else {
				sub2.push_back(num[idx1++]);
				sub2.push_back(num[idx2--]);
				flag = 1;
			}
		}
		sub2.push_back(n);
		cout << sub1.size() << '\n';
		for(auto i : sub1) cout << i << ' ';
		cout << '\n' << sub2.size() << '\n';
		for(auto i : sub2) cout << i << ' ';
	} else {
		int flag = 1;
		vector<int> num(n);
		iota(num.begin(), num.end(), 1);
		vector<int> sub1;
		vector<int> sub2;
		int idx1 = 0;
		int idx2 =  n - 1;
		for(int i = 0; i < n/2; i++){
			if(flag == 1){
				sub1.push_back(num[idx1++]);
				sub1.push_back(num[idx2--]);
				flag = 2;
			} else {
				sub2.push_back(num[idx1++]);
				sub2.push_back(num[idx2--]);
				flag = 1;
			}
		}
		cout << sub1.size() << '\n';
		for(auto i : sub1) cout << i << ' ';
		cout << '\n' << sub2.size() << '\n';
		for(auto i : sub2) cout << i << ' ';
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