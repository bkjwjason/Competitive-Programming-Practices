#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1000000007;
const char nl = '\n';


// Solution Starts Here

void solve() {



}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<char> vc;
	for(int i = 'a'; i <= 'z'; i++){
		vc.pb(i);
	}
	vector<char> pw;
	for(int i = 0; i < k; i++){
		pw.pb(vc[i]);
	}
	string s = "";
	int i = 0;
	while(sz(s) != n){
		if (i == sz(pw)){
			i = 0;
			s += pw[i];
			i++;
		}
		else{
			s+=pw[i];
			i++;
		}
	}
	cout << s << nl;
	return 0;
}

