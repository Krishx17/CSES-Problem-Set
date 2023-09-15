// /*▄███████▀▀▀▀▀▀███████▄
// ░▐████▀▒▒писатель▒▀██████▄
// ░███▀▒▒▒▒Кришнеш▒▒▒▒▀█████
// ░▐██▒▒▒▒Чаурасия▒▒▒▒▒████▌
// ░▐█▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▌
// ░░█▒▄▀▀▀▀▀▄▒▒▄▀▀▀▀▀▄▒▐███▌
// ░░░▐░░░▄▄░░▌▐░░░▄▄░░▌▐███▌
// ░▄▀▌░░░▀▀░░▌▐░░░▀▀░░▌▒▀▒█▌
// ░▌▒▀▄░░░░▄▀▒▒▀▄░░░▄▀▒▒▄▀▒▌
// ░▀▄▐▒▀▀▀▀▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒█
// ░░░▀▌▒▄██▄▄▄▄████▄▒▒▒▒█▀
// ░░░░▄█████████████  █▒▒▐▌
// ░░░▀███▀▀████▀█████▀▒▌
// ░░░░░▌▒▒▒▄▒▒▒▄▒▒▒▒▒▒▐
// ░░░░░▌▒▒▒▒▀▀▀▒▒▒▒▒▒▒▐*/
 
 
// #include <bits/stdc++.h>
// using namespace std;
 
// typedef                     long long ll;
// typedef                     long double lld;
// typedef                     vector<ll> vl;
// typedef                     vector<string> vs;
// typedef                     vector<vl> vvl;
// typedef                     pair<ll, ll> pl;
// typedef                     unsigned long long ull;
// #define _mod                1000000007
// #define ff                  first
// #define ln 					'\n';
// #define ss                  second
// #define pb                  push_back
// #define sz(v)               ll(v.size())
// #define all(v)              v.begin(), v.end()
// #define forn(i,n)           for(ll i = 0; i < n; i++)
// #define yy                  cout << "YES\n"
// #define nn                  cout << "NO\n"
// #define ms0(X)              memset((X), 0, sizeof((X)))
// #define ms1(X, V)           memset((X), V, sizeof((X)))
 
// // Debugging
// #ifndef ONLINE_JUDGE
// #define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
// #else
// #define dbg(x)
// #endif
 
// /**************************************************************************************************************************************/
  
 
// // vector<long> fun(long n, vector<long> &v){
// // 	if(n == 1) return v;
// // 	if(n % 2 != 0) {
// // 		long temp = (n*3) + 1;
// // 		v.push_back(temp);
// // 		fun(temp, v);
// // 	}else{
// // 		long temp = (n/2);
// // 		v.push_back(temp);
// // 		fun(temp, v);
// // 	}
// // 	return v;
// // }

// int main() {
//     cin.tie(0)->sync_with_stdio(0);
// // #ifndef ONLINE_JUDGE
// //     freopen("Error.txt", "w", stderr);
// // #endif
// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// // #endif
 
//   //   	vector<long> v;
//   //   	long n;
//   //   	cin >> n;
// 		// v.push_back(n);
//   //   	fun(n, v);
//   //   	for(auto i: v) cout << i << " ";
//   //   	cout << "\n";
//   //   	v.clear();

    
 
//     return 0;
// }

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    while (n != 1)
    {
        cout << n << ' ';
        if (n&1) n = n*3 + 1;
        else n /= 2;
    }
    cout << "1\n";
    return 0;
}