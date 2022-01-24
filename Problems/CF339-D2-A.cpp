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
	string s;
	getline(cin, s);
	vector<pair<int, int>> v;
	for (int i = 1; i <= 3; i++){
		v.pb(mp(i, 0));
	}
	for (int i = 0; i < sz(s); i+=2){
		if (s[i] == '1'){
			v[0].second++;
		}
		else if (s[i] == '2'){
			v[1].second++;
		}
		else if (s[i] == '3'){
			v[2].second++;
		}
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < v[i].second; j++){
			if (i == 2 && j == v[i].second - 1){
				cout << i+1 << nl;
			}
			else{
				cout << i+1 << '+';
			}
		}
	}
	//easiest would be to add to a string and then remove the last char
	return 0;
}

